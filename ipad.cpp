#include "ipad.h"

ipad::ipad(int memory, int display) : phone(display), player(memory)
{
}

void ipad::Show()
{
    cout << "ipad ������ ������ " << _memory << " ������ ������� " << _display << endl;
}