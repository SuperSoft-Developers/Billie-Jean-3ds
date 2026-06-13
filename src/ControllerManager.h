#pragma once

#include <SDL2/SDL.h>

class ControllerManager {
public:
    ControllerManager();
    ~ControllerManager();

    bool Initialize();
    void Update();

    bool IsButtonPressed(SDL_GameControllerButton button);

private:
    SDL_GameController* controller;
};
