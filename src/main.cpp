#include <SDL2/SDL.h>
#include <iostream>

int main() {
    if (SDL_Init(SDL_INIT_GAMECONTROLLER) < 0) {
        std::cout << "Erro SDL\n";
        return 1;
    }

    std::cout << "Billie Jean Mac iniciado\n";

    while (true) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_CONTROLLERBUTTONDOWN) {
                std::cout << "Botao pressionado\n";
            }
        }
        SDL_Delay(16);
    }

    SDL_Quit();
    return 0;
}
