#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define TESTING_PROGRAM
//#define CALCULATOR_V1
//#define CALCULATOR_V2
void main()
{
	setlocale(LC_ALL, "");
#ifdef TESTING_PROGRAM
	char answer;
	int scope = 0;
	setlocale(LC_ALL, "Rus");

	///////////////////////////////////////////////////////////////
	cout << "В каком году был выпущен процессор i80486?" << endl;
	cout << "A - 1989г.\n";
	cout << "B - 1990г.\n";
	cout << "C - 1988г.\n";
	cout << "D - 1995г.\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'A' || answer == 'a')
	{
		cout << "Ответ верный." << endl;
		scope++;
	}
	else
	{
		cout << "Ответ неверный." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "Из какого набора блок ALU выполняет команды?" << endl;
	cout << "A - x87.\n";
	cout << "B - x64.\n";
	cout << "C - x86.\n";
	cout << "D - x32.\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "Ответ верный." << endl;
		scope++;
	}
	else
	{
		cout << "Ответ неверный." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "Какая разрядность у шины данных начиная с процессора Pentium?" << endl;
	cout << "A - 32bit.\n";
	cout << "B - 20bit.\n";
	cout << "C - 24bit.\n";
	cout << "D - 64bit.\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'D' || answer == 'd')
	{
		cout << "Ответ верный." << endl;
		scope++;
	}
	else
	{
		cout << "Ответ неверный." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "В каком году вышел язык программирования с++?" << endl;
	cout << "A - 1979г.\n";
	cout << "B - 1983г.\n";
	cout << "C - 1982г.\n";
	cout << "D - 1993г.\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'B' || answer == 'b')
	{
		cout << "Ответ верный." << endl;
		scope++;
	}
	else
	{
		cout << "Ответ неверный." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "Сколько знаков после запятой способен хранить Float?" << endl;
	cout << "A - 38.\n";
	cout << "B - 7.\n";
	cout << "C - 72.\n";
	cout << "D - 32г.\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'A' || answer == 'a')
	{
		cout << "Ответ верный." << endl;
		scope++;
	}
	else
	{
		cout << "Ответ неверный." << endl;
	}

	cout << "Вы набрали " << scope << " Баллов.\n";
#endif // TESTING_PROGRAM

#ifdef CALCULATOR_V1
	double a, b;
	char c;
	setlocale(LC_ALL, "Rus");
	cout << "Введите выражение: ";
	cin >> a >> c >> b;
	cout << a << c << b << endl;
	if (c == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (c == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (c == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (c == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Ошибка: Нету операции." << endl;
	}
#endif // CALCULATOR_V1

#ifdef CALCULATOR_V2
	double a, b;
	char c;
	setlocale(LC_ALL, "Rus");
	cout << "Введите выражение: ";
	cin >> a >> c >> b;
	cout << a << c << b << endl;
	switch (c)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Ошибка: Нету операции." << endl;
	}
#endif // CALCULATOR_V2


} 
		