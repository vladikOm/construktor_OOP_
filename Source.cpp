#include<iostream>
#include "Window.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	//��������� ��'��� �����

	Window window(1,2,3,5);

	cout << "C������� 1 ����\n ";
   window.Show();
//��� ��� �� ������ ��������� ����������� ���� �� �������� Window window(1,2,3,4);
	//��� ����������� ����������� �� ������������� Window window();

	return 0;
}
