#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

class Command
{
private:

public:
    virtual void execute() = 0;
    virtual void add() = 0;
    virtual void remove() = 0;

protected:
}; 

class CreateBrickCommand : public Command
{
    private:
    int m_brickCounter{0};
    public:
    virtual void execute(){std::cout << "Bricks: " + m_brickCounter << std::endl;}
    virtual void add(){m_brickCounter++; std::cout << "Bricks: " + m_brickCounter << std::endl; };
    virtual void remove(){m_brickCounter--;std::cout << "Brick Removed: " + m_brickCounter << std::endl;};
};

class CreateStoneCommand : public Command
{
    private:
    int m_stoneCounter{};
    public:
    virtual void execute(){m_stoneCounter++; std::cout << "Stone: " + m_stoneCounter << std::endl;}
    virtual void add(){m_stoneCounter++; std::cout << "Bricks: " + m_stoneCounter << std::endl; };
    virtual void remove(){m_stoneCounter--;std::cout << "Brick Removed: " + m_stoneCounter << std::endl;};
};

class CreateConcreteCommand : public Command
{
    private:
    int m_concreteCounter{};
    public:
    virtual void execute(){m_concreteCounter++; std::cout << "Concrete: " + m_concreteCounter << std::endl;}
    virtual void add(){m_concreteCounter++; std::cout << "Bricks: " + m_concreteCounter << std::endl; };
    virtual void remove(){m_concreteCounter--;std::cout << "Brick Removed: " + m_concreteCounter << std::endl;};
};

class CreateWoodCommand : public Command
{
    private:
    int m_woodCounter{};
    public:
    virtual void execute(){m_woodCounter++; std::cout << "Wood: " + m_woodCounter << std::endl;}
    virtual void add(){m_woodCounter++; std::cout << "Bricks: " + m_woodCounter << std::endl; };
    virtual void remove(){m_woodCounter--;std::cout << "Brick Removed: " + m_woodCounter << std::endl;};
};
