// ivan4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
////5. Решить линейное уравнение A•x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).



#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, x, b;
	cout << "Введите коэффициенты a и b " << endl;
	cin >> a >> b;
	if (a != 0)
	{
		x = -b / a;
		cout << "Ответ:" << x << endl;
	}
	else {

		cout << "Пардон, данные некорректны " << endl;
	}
	return 0;
}
