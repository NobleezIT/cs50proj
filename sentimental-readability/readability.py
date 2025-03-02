from cs50 import get_string

text = get_string("Text: ")

letters = 0
space = 0
sentences = 0  # Initialize sentence count
for character in text:
    if character.isalpha():  # Corrected method name to `isalpha()`
        letters += 1
    elif character == ' ':
        space += 1
    elif character == '.' or character == '?' or character == '!':
        sentences += 1  # Use `sentences` consistently

words = space + 1  # Words count is spaces + 1

L = (letters / words) * 100
S = (sentences / words) * 100

grade = 0.0588 * L - 0.296 * S - 15.8
if grade > 16:
    print("Grade 16+")
elif grade < 1:
    print("Before Grade 1")  # Fixed typo
else:
    print(f"Grade {round(grade)}")
