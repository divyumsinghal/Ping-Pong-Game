#include "Game.hpp"

Game::Game(SDL_Renderer* renderer) {
    this->renderer = renderer;

    // Initialize paddle
    paddle = { 400, 550, 100, 10 };
    paddleSpeed = 1;

    // Initialize ball
    ball = { 400, 300, 10, 10 };
    ballSpeedX = 1;
    ballSpeedY = 1;
}

Game::~Game() {
    // Cleanup if needed
}

void Game::Update() {
    // Update paddle position
    const Uint8* keyState = SDL_GetKeyboardState(NULL);
    if (keyState[SDL_SCANCODE_LEFT] && paddle.x > 0) {
        paddle.x -= paddleSpeed;
    }
    if (keyState[SDL_SCANCODE_RIGHT] && paddle.x + paddle.w < 800) {
        paddle.x += paddleSpeed;
    }

    // Update ball position
    ball.x += ballSpeedX;
    ball.y += ballSpeedY;

    // Ball collision with walls
    if (ball.x < 0 || ball.x + ball.w > 800) {
        ballSpeedX = -ballSpeedX;
    }
    if (ball.y < 0 || ball.y + ball.h > 600) {
        ballSpeedY = -ballSpeedY;
    }

    // Ball collision with paddle
    if (SDL_HasIntersection(&ball, &paddle)) {
        ballSpeedY = -ballSpeedY;
    }
}

void Game::Render() {
    // Clear the screen
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Draw paddle
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &paddle);

    // Draw ball
    SDL_RenderFillRect(renderer, &ball);

    // Present the renderer
    SDL_RenderPresent(renderer);
}

