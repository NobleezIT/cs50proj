# Hungry Snake 🎮

#### Video Demo: [Watch Demo here](https://youtu.be/6pqWsNjTdsQ)

#### Description:

A classic Snake game developed using Python and Pygame for CS50 final project submission. It incorporates exciting features like high scores, dynamic speed, and boundary wrapping for an engaging gameplay experience.  

## Features 🚀  
- **Snake Growth:** The snake grows longer each time it eats an apple.  
- **High Score Tracking:** Keeps track of the highest score across sessions using a file-based system.  
- **Dynamic Speed:** The speed of the snake increases as it grows, adding a layer of challenge.  
- **Boundary Wrapping:** The snake reappears from the opposite side when it moves beyond the screen boundaries.  
- **Collision Detection:** The game ends when the snake collides with itself.  
- **Customizable Background:** Players can use their own images as the background, apple, and snake resources.  
- **Pause and Resume:** The game can be paused and resumed using specific keys.  
- **Exit Button:** Allows the player to exit the game smoothly.  


2. **Install Dependencies:**  
   Ensure you have Python 3 and Pygame installed. Use the following command to install Pygame:  
   ```bash  
   pip install pygame  
   ```  

3. **Resources:**  
   Place the following files in a `resources` directory within the project folder:  
   - `background.jpg` (Background image)  
   - `block.jpg` (Snake block image)  
   - `apple.jpg` (Apple image)  
   - `bg_music_1.wav` (Background music)  
   - `crash.mp3` (Collision sound)  
   - `ding.mp3` (Apple-eating sound)  

   You can use the included resources or replace them with your own.  

## How to Play 🕹️  
1. Run the game:  
   ```bash  
   python snake.py  
   ```  
2. Use the arrow keys to control the snake's movement:  
   - **Up Arrow:** Move up  
   - **Down Arrow:** Move down  
   - **Left Arrow:** Move left  
   - **Right Arrow:** Move right  

3. Press the following keys during gameplay:  
   - **Enter:** Resume the game  
   - **Escape:** Exit the game  

4. Avoid colliding with yourself!  

## Folder Structure 📁  
```
project/  
├── snake.py                # Main game script  
├── high_score.txt         # File to store the high score  
├── resources/             # Folder for resources  
│   ├── background.jpg  
│   ├── block.jpg  
│   ├── apple.jpg  
│   ├── bg_music_1.wav  
│   ├── crash.mp3  
│   └── ding.mp3  
└── README.md              # Documentation  
```  

## Features Explained 📝  

### High Score  
The game maintains a high score across sessions. The highest score is saved to a file (`high_score.txt`), ensuring that players can challenge themselves to beat their previous records.  

### Dynamic Speed  
The snake starts at a standard speed, which increases as the length of the snake grows, making the game progressively harder.  

### Boundary Wrapping  
Instead of ending the game when the snake moves out of the screen, the snake reappears on the opposite side, providing a seamless gaming experience.  

### Sound Effects  
- **Background Music:** Plays throughout the game to enhance the gaming atmosphere.  
- **Collision Sound:** Plays when the snake collides with itself, marking the end of the game.  
- **Apple-Eating Sound:** Plays when the snake successfully eats an apple.  

## Future Enhancements 🌟  
- **Custom Levels:** Add different levels with unique challenges.  
- **Multiplayer Mode:** Allow two players to compete on the same screen.  
- **Score Sharing:** Integrate with social platforms to share high scores.  

## Contributing 🤝  
Feel free to fork this repository and contribute to improving the game. Open a pull request to suggest changes!  
