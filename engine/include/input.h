/*
 * Classe que representa o input a ser utilizado pelo usuário.
 *
 * Autor: Carlos Oliveira
 * Data: 17/04/2015
 * Licença: LGPL. Sem copyright.
 */
#ifndef INPUT_H
#define INPUT_H

#include <SDL2/SDL.h>

class Input
{
public:
    static Input* Instance();
    void quitGame();
    void handle(SDL_Event &event);
    bool hasQuit();

private:
    Input(){};
    Input(Input const&){};
    Input& operator=(Input const&){};
    ~Input(){};

    void onKeyDown(SDL_Event &event);
    void onKeyUp(SDL_Event &event);
    bool m_done = false;

    static Input * instance;
};

#endif
