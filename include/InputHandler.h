#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "Command.h"


class InputHandler{ 
    public:
    void handleInput(SDL_Event t_events);

    private:
    Command* m_buttonX = new CreateBrickCommand();
    Command* m_buttonY = new CreateStoneCommand();
    Command* m_buttonA = new CreateConcreteCommand();
    Command* m_buttonB = new CreateWoodCommand();
};


void InputHandler::handleInput(SDL_Event t_events){
    //Add the executes here. 
    printf("BABAJAGEAR");
    if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_LEFT)
    {
        m_buttonX->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_UP)
    {
        m_buttonY->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_DOWN)
    {
        m_buttonA->execute();
    }else if(t_events.type == SDL_KEYDOWN && t_events.key.keysym.sym == SDLK_RIGHT)
    {
        m_buttonB->execute();
    }
    

};
