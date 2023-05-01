#include "player.h"
#include <iostream>

using namespace std;

player::player(int memory) : _memory(memory)
{
}

void player::Show() { cout << "������� ������⢮ ����� " << _memory << endl; }

Ipod::Ipod(int memory, int button) : player(memory), _button(button)
{
}

void Ipod::Show()
{
    cout << " Ipod, ������⢮ ������: " << _button << " ������� ������⢮ ����� " << _memory << endl;
}

mp3::mp3(int memory, string shape) : player(memory), _shape(shape)
{
}

void mp3::Show()
{
    cout << " mp3, �ଠ ���ன�⢠: " << _shape << " ������� ������⢮ ����� " << _memory << endl;
}