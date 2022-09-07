#pragma once
#include<iostream>
#include"Window.h "


void Window::SetX(int newX)
{
    if (newX > 0)
    {
        x= newX;
    }
}

void Window::SetY(int newY)
{
    if (newY > 0)
    {
        y = newY;
    }
}

void Window::SetHeight(int newHeight)
{
    if (newHeight > 0)
    {
        height = newHeight;
    }
}

void Window::SetWidth(int newWidth)
{
    if (newWidth > 0)
    {
        width = newWidth;
    }
}

void Window::Show() 
{
    for (size_t i = 0; i < height; i++)
    {
        for (size_t i = 0; i < width; i++)
        {
            std::cout << " [] ";
        }
        std::cout << "\n";
    }
}
//
Window::Window(int xValue, int yValue, int valueWidth, int valueHeight)
{
    //Реалізація конструктора 
    SetX(xValue);
    SetY(yValue);
    SetHeight(valueWidth);
    SetWidth(valueHeight);
    std::cout << "Конструктор який ми створили\n";
}
Window::Window()
{
    std::cout << "Конструктор за замовчуванням:\n";
}
//

