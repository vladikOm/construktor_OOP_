#pragma once


class Window
{
private:
	//Значення за замовчуванням це коли ми зараз присвоює наприклад х=20;y=25;,height=5;width=15; 
	// якісь значення;
	//тому якщо ми при визові функції main() всі методи не визвемо, окрім метода Show() 
	// то в нас буть ці значення на екрані
		//Або щоб не визивати методи і не встановлювати  значення за замовчування ми можемо 
		// використати КОНСТРУКТОР,тобто при створенні об'єкту
		//в нас автоматично викличеться метод який все заповнить)

	int x=1;
	int y=1;
	int height=1;
	int width=1;
public:
	Window(  int xValue = 5,  int yValue = 5,  int valueWidth = 25,  int valueHeight = 25);//прототип конструктора
	Window();
	//Методи гетери повертають значення наших полів
	int GetX() const { return x; }
	int GetY() const { return y; }
	int GetHeight() const { return height; }
	int GetWidth() const { return width; }

	//Методи сетери встановлюють значення наших полів

	void SetX(int newX);
	void SetY(int newY);
	void SetHeight(int newHeight);
	void SetWidth(int newWidth);

	void Show() ;// метод який виводить на екран прямокутник
	

};
