# Ping-Pong

## Pong Game Image

![Pong Game](PingPong%20Game.png)

## Overview

This is a game created using C++ and the SDL2 library. The game showcases basic game development principles, particularly the use of Object-Oriented Programming (OOP) to structure the code.

- **Encapsulation**: The game logic and rendering are encapsulated within the `Game` class, providing a clean separation of concerns.
- **Abstraction**: The game abstracts complex SDL operations into simple methods, making the code more readable and maintainable.
- **Inheritance**: While not explicitly used in this example, OOP allows for easy extension of the codebase. Additional features and objects can be inherited from base classes if desired.

## Features

- A paddle that the player can control using the left and right arrow keys.
- A bouncing ball that collides with the paddle.
- Basic game loop for continuous gameplay until the player closes the window.

## Tools Used

- **C++**: The programming language used for game development.
- **SDL2**: The Simple DirectMedia Layer 2 library is used for window management and rendering.
- **Visual Studio**: The integrated development environment (IDE) used for coding, debugging, and building the game.

## How to Play

- Use the left and right arrow keys to move the paddle left and right.
- The objective is to bounce the ball off the paddle to keep it in play.
- Try to prevent the ball from going off the screen.
- The game continues until you close the window.

## OOP Principles

- **Class**: The game is structured using a `Game` class that encapsulates game logic and rendering.
- **Encapsulation**: SDL operations and game state are encapsulated within the `Game` class to provide a clean interface.
- **Abstraction**: SDL functionality is abstracted into simple methods within the `Game` class, making it easier to understand and modify.
- **Constructor and Destructor**: The `Game` class uses a constructor and destructor for initialization and cleanup.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

