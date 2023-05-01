#pragma once
#include "Elka.h"
#include <string>

using namespace std;

class phone : virtual public Elka
{
public:
    phone(int display);

    void Show() override;
protected:
    int _display;
};

class iphone final : public phone
{
public:
    iphone(int display, std::string color);
    void Show() override;
private:
    std::string _color;
};

class samsung final : public phone
{
public:
    samsung(int display, int camera);

    void Show() override;
private:
    int _camera;
};