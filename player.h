#pragma once
#include "Elka.h"
#include <string>

class player : public Elka
{
public:
    player(int memory);
    void Show() override;

protected:
    int _memory;
};

class Ipod final : public player
{
public:
    Ipod(int memory, int button);
    void Show() override;

private:
    int _button;
};

class mp3 final : public player
{
public:
    mp3(int memory, std::string shape);
    void Show() override;

private:
    std::string _shape;
};