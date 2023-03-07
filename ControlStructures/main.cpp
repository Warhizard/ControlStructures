#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
#define TARGET

void main()
{
	setlocale(LC_ALL, "");

#if defined TEMPERATURE
	int temperature;
	cout << "Введите температуру в градусах: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улицу тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif
#ifdef TARGET
	int n;
	cout << "Введите число: " << endl;
	cin >> n;
	if (0 < n && n < 10)
	{
		cout << "Цель поражена" << endl;
	}

	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif
}