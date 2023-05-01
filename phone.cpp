#include "phone.h"


phone::phone(int display) : _display(display)
{
}

void phone::Show()
{
    cout << "Разрешение экрана " << _display << endl;
}


iphone::iphone(int display, string color) : phone(display), _color(color)
{
}

void iphone::Show()
{
    cout << _color << " iphone, размер дисплея " << _display << " дюймов" << endl;
}

samsung::samsung(int display, int camera) : phone(display), _camera(camera)
{
}

void samsung::Show()
{
    cout << " Samsung, качество камер " << _camera << "mp" << " размер дисплея " << _display << " дюймов" << endl;
}