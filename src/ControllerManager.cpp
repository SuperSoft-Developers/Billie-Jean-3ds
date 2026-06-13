#include "ControllerManager.h"

ControllerManager::ControllerManager()
    : controller(nullptr) {}

ControllerManager::~ControllerManager() {
    if (controller)
        SDL_GameControllerClose(controller);
}

bool ControllerManager::Initialize() {
    if (SDL_NumJoysticks() > 0) {
        controller = SDL_GameControllerOpen(0);
    }

    return controller != nullptr;
}

void ControllerManager::Update() {
    SDL_PumpEvents();
}

bool ControllerManager::IsButtonPressed(SDL_GameControllerButton button) {
    if (!controller) return false;
    return SDL_GameControllerGetButton(controller, button);
}
