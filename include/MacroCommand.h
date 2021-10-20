#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "Command.h"
#include <list>
#include <vector>

class MacroCommand
{
private:
    std::vector<Command*> commands;
public:
    MacroCommand();
    virtual ~MacroCommand();
    virtual void add(Command* t_command);
    virtual void remove(Command* t_command);
    virtual void execute();
};


void MacroCommand::execute(){

    for (int i = 0; i < commands.size(); i++)
          commands[i]->execute();
};

void MacroCommand::add(Command* t_command){

    // make a previous step
    commands.push_back(t_command);
};

void MacroCommand::remove(Command* t_command){

    commands.push_back(t_command);
};
