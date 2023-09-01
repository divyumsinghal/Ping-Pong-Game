#pragma once

#include <SDL.h>

class Game {
public:
    Game(SDL_Renderer* renderer);
    ~Game();

    void Update();
    void Render();

private:
    SDL_Renderer* renderer;
    SDL_Rect paddle;
    int paddleSpeed;
    SDL_Rect ball;
    int ballSpeedX;
    int ballSpeedY;
};

