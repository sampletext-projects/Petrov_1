// .cpp : main project file.
// Программа 
// Автор: 

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, x1, x2, x3, y1, y2, y3, r;
	cout << "Введите радиус окружности: ";
	cin >> r;
	cout << "Введите координату X центра окружности: ";
	cin >> a;
	cout << "Введите координату Y центра окружности: ";
	cin >> b;
	cout << "Введите координату X точки 1: ";
	cin >> x1;
	cout << "Введите координату Y точки 1: ";
	cin >> y1;
	cout << "Введите координату X точки 2: ";
	cin >> x2;
	cout << "Введите координату Y точки 2: ";
	cin >> y2;
	cout << "Введите координату X точки 3: ";
	cin >> x3;
	cout << "Введите координату Y точки 3: ";
	cin >> y3;
	
	if (pow((x1 - a), 2) + pow((y1 - b), 2) == pow(r, 2))
	{
		cout << "\n\nТочка 1 лежит на окружности";
	}
	else if (pow((x1 - a), 2) + pow((y1 - b), 2) < pow(r, 2))
	{
		cout << "\n\nТочка 1 лежит внутри окружности";
	}
	else if (pow((x1 - a), 2) + pow((y1 - b), 2) > pow(r, 2))
	{
		cout << "\n\nТочка 1 лежит снаружи окружности";
	}
	
	if (pow((x2 - a), 2) + pow((y2 - b), 2) == pow(r, 2))
	{
		cout << "\nТочка 2 лежит на окружности";
	}
	else if (pow((x2 - a), 2) + pow((y2 - b), 2) < pow(r, 2))
	{
		cout << "\nТочка 2 лежит внутри окружности";
	}
	else if (pow((x2 - a), 2) + pow((y2 - b), 2) > pow(r, 2))
	{
		cout << "\nТочка 2 лежит снаружи окружности";
	}
	
	if (pow((x3 - a), 2) + pow((y3 - b), 2) == pow(r, 2))
	{
		cout << "\nТочка 3 лежит на окружности\n";
	}
	else if (pow((x3 - a), 2) + pow((y3 - b), 2) < pow(r, 2))
	{
		cout << "\nТочка 3 лежит внутри окружности\n";
	}
	else if (pow((x3 - a), 2) + pow((y3 - b), 2) > pow(r, 2))
	{
		cout << "\nТочка 3 лежит снаружи окружности\n";
	}
	system("pause");
	return 0;
}
