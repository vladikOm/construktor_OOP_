#pragma once


class Window
{
private:
	//�������� �� ������������� �� ���� �� ����� �������� ��������� �=20;y=25;,height=5;width=15; 
	// ���� ��������;
	//���� ���� �� ��� ����� ������� main() �� ������ �� �������, ���� ������ Show() 
	// �� � ��� ���� �� �������� �� �����
		//��� ��� �� �������� ������ � �� �������������  �������� �� ������������ �� ������ 
		// ����������� �����������,����� ��� �������� ��'����
		//� ��� ����������� ����������� ����� ���� ��� ���������)

	int x=1;
	int y=1;
	int height=1;
	int width=1;
public:
	Window(  int xValue = 5,  int yValue = 5,  int valueWidth = 25,  int valueHeight = 25);//�������� ������������
	Window();
	//������ ������ ���������� �������� ����� ����
	int GetX() const { return x; }
	int GetY() const { return y; }
	int GetHeight() const { return height; }
	int GetWidth() const { return width; }

	//������ ������ ������������ �������� ����� ����

	void SetX(int newX);
	void SetY(int newY);
	void SetHeight(int newHeight);
	void SetWidth(int newWidth);

	void Show() ;// ����� ���� �������� �� ����� �����������
	

};
