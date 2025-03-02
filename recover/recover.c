#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h> // Include stdbool.h for bool, true, false

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    FILE *raw_file = fopen(argv[1], "r");
    if (raw_file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    uint8_t buffer[512];
    bool found_jpg = false;
    int counter = 0;
    char filename[8];
    FILE *img = NULL;

    // Read 512 bytes into the buffer until end of file
    while (fread(buffer, 1, 512, raw_file) == 512)
    {
        // Check if start of a new JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (found_jpg)
            {
                // Close previous JPEG file if one was open
                fclose(img);
            }
            else
            {
                found_jpg = true; // First JPEG found
            }

            // Open a new JPEG file
            sprintf(filename, "%03i.jpg", counter);
            img = fopen(filename, "w");
            if (img == NULL)
            {
                printf("Could not create image file.\n");
                fclose(raw_file);
                return 1;
            }
            counter++;
        }

        // If a JPEG has been found, write to the current JPEG file
        if (found_jpg)
        {
            fwrite(buffer, 1, 512, img);
        }
    }

    // Close any remaining files
    if (img != NULL)
    {
        fclose(img);
    }
    fclose(raw_file);

    return 0;
}
