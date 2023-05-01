#include "phone.h"
#include <iostream>

using namespace std;


phone::phone(int display) : _display(display)
{
}

void phone::Show()
{
    cout << "����襭�� ��࠭� " << _display << endl;
}


iphone::iphone(int display, string color) : phone(display), _color(color)
{
}

void iphone::Show()
{
    cout << _color << " iphone, ࠧ��� ��ᯫ�� " << _display << " ���" << endl;
}

samsung::samsung(int display, int camera) : phone(display), _camera(camera)
{
}

void samsung::Show()
{
    cout << " Samsung, ����⢮ ����� " << _camera << "mp" << " ࠧ��� ��ᯫ�� " << _display << " ���" << endl;
}