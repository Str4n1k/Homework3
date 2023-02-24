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
	cout << "� ����� ���� ��� ������� ��������� i80486?" << endl;
	cout << "A - 1989�.\n";
	cout << "B - 1990�.\n";
	cout << "C - 1988�.\n";
	cout << "D - 1995�.\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'A' || answer == 'a')
	{
		cout << "����� ������." << endl;
		scope++;
	}
	else
	{
		cout << "����� ��������." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "�� ������ ������ ���� ALU ��������� �������?" << endl;
	cout << "A - x87.\n";
	cout << "B - x64.\n";
	cout << "C - x86.\n";
	cout << "D - x32.\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "����� ������." << endl;
		scope++;
	}
	else
	{
		cout << "����� ��������." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "����� ����������� � ���� ������ ������� � ���������� Pentium?" << endl;
	cout << "A - 32bit.\n";
	cout << "B - 20bit.\n";
	cout << "C - 24bit.\n";
	cout << "D - 64bit.\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'D' || answer == 'd')
	{
		cout << "����� ������." << endl;
		scope++;
	}
	else
	{
		cout << "����� ��������." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "� ����� ���� ����� ���� ���������������� �++?" << endl;
	cout << "A - 1979�.\n";
	cout << "B - 1983�.\n";
	cout << "C - 1982�.\n";
	cout << "D - 1993�.\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'B' || answer == 'b')
	{
		cout << "����� ������." << endl;
		scope++;
	}
	else
	{
		cout << "����� ��������." << endl;
	}
	///////////////////////////////////////////////////////////////
	cout << "������� ������ ����� ������� �������� ������� Float?" << endl;
	cout << "A - 38.\n";
	cout << "B - 7.\n";
	cout << "C - 72.\n";
	cout << "D - 32�.\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'A' || answer == 'a')
	{
		cout << "����� ������." << endl;
		scope++;
	}
	else
	{
		cout << "����� ��������." << endl;
	}

	cout << "�� ������� " << scope << " ������.\n";
#endif // TESTING_PROGRAM

#ifdef CALCULATOR_V1
	double a, b;
	char c;
	setlocale(LC_ALL, "Rus");
	cout << "������� ���������: ";
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
		cout << "������: ���� ��������." << endl;
	}
#endif // CALCULATOR_V1

#ifdef CALCULATOR_V2
	double a, b;
	char c;
	setlocale(LC_ALL, "Rus");
	cout << "������� ���������: ";
	cin >> a >> c >> b;
	cout << a << c << b << endl;
	switch (c)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "������: ���� ��������." << endl;
	}
#endif // CALCULATOR_V2


} 
		