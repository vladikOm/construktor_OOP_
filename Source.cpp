#include<iostream>
#include "Window.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	//Створюємо об'єкт класу

	Window window(1,2,3,5);

	cout << "Cтворили 1 обєкт\n ";
   window.Show();
//ось так ми можемо викликати конструктор який ми написали Window window(1,2,3,4);
	//тут викликається конструктор за замовчуванням Window window();

	return 0;
}
