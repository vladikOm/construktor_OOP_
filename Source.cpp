#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
using namespace std;

//   Lab 3 Variant 10
class BaseStrings {
public:
	BaseStrings() { }
	string myStr = "Any String";
	int count_symbols_in_str = myStr.length();
	virtual void get_length()
	{
		cout << "\nCount symbols in class base str: " << count_symbols_in_str << endl; \

	}
	virtual string FirstSymboleMoveToEndStr() {
		string new_str;
		cout << "\nString before: " << myStr << endl;
		char first_sym = myStr[0];
		myStr[0] = ' ';
		myStr.push_back(first_sym);
		cout << "\nString after: " << myStr << endl;
		return new_str;
	}
	virtual void display() {
		cout << "\nYour string: " << myStr << endl;
		cout << "\nCount symbols in your string: " << count_symbols_in_str << endl;
	}
};

class StringDigits : public BaseStrings {
public:
	string str_digits = "0 1 2 3 4 5 6 7 8 9";
	int count_space = 9;
	int count_digits = str_digits.length();
	void push_new_digit_back(int digit) {
		str_digits += " " + to_string(digit);
		cout << endl << digit << " Успешно добавлена в конец строки цифр!\n";
		count_space++;
		count_digits = str_digits.length() - count_space;
		split();
	}
	void  display_digit() {
		split();
		cout << "\nYour string digits: " << str_digits << endl;
		cout << "\nCount digits " << count_digits << endl;
	}
	string LastSymboleMoveToBeginStr() {
		string new_str;
		cout << "\nString before: " << str_digits << endl;
		char last_sym = str_digits[str_digits.length() - 1];
		str_digits.insert(str_digits.cbegin(), ' ');
		str_digits.insert(str_digits.cbegin(), last_sym);
		str_digits[str_digits.length() - 1] = ' ';
		cout << "\nString after: " << str_digits << endl;
		split();
		return new_str;
	}
	void split()
	{
		count_space = 0;
		count_digits = 0;
		std::string s = str_digits;
		std::string delimiter = " ";

		size_t pos = 0;
		std::string token;
		while ((pos = s.find(delimiter)) != std::string::npos) {
			token = s.substr(0, pos);
			s.erase(0, pos + delimiter.length());
			count_digits++;
		}
		count_digits++;
	}
};

class StringSymbols : BaseStrings {
public:
	string Massive_Symbols;
	int count_symbols_in_str = Massive_Symbols.length();
	void get_length()
	{
		cout << "\nCount symbols in class StringSymbols: " << count_symbols_in_str << endl; \

	}
	string FirstSymboleMoveToEndStr() {
		string new_str;
		cout << "\nString before: " << Massive_Symbols << endl;
		char first_sym = Massive_Symbols[0];
		Massive_Symbols[0] = ' ';
		Massive_Symbols.push_back(first_sym);
		cout << "\nString after: " << Massive_Symbols << endl;
		return new_str;
	}
	void display() {
		cout << "\nYour string: " << Massive_Symbols << endl;
		cout << "\nCount symbols in your string: " << count_symbols_in_str << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "ukr");
	srand(time(0));
	BaseStrings s;
	s.myStr = "First String!";
	s.count_symbols_in_str = s.myStr.length();
	s.display();
	s.FirstSymboleMoveToEndStr();
	s.display();

	StringDigits s_digits;
	s_digits.str_digits = "11 22 33 66";
	s_digits.display_digit();
	s_digits.push_new_digit_back(88);
	s_digits.display_digit();
	s_digits.LastSymboleMoveToBeginStr();
	s_digits.display_digit();

	StringSymbols s_symbols;
	s_symbols.Massive_Symbols = { 'a','n', 'f', 'D' };
	s_symbols.count_symbols_in_str = s_symbols.Massive_Symbols.length();
	s_symbols.display();
	s_symbols.FirstSymboleMoveToEndStr();
	s_symbols.display();
	return 0;
}