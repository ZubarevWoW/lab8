#include <iostream>
using namespace std;
void function() {
	cout << "Введите пятизначное число" << endl;
	char a[4]; // определяет символьный тип данных a 
	cin >> a; // ввод числа
	cout << "1 - " << a[0] << endl; //вывод каждого символа (до 5ти)
	cout << "2 - " << a[1] << endl;
	cout << "3 - " << a[2] << endl;
	cout << "4 - " << a[3] << endl;
	cout << "5 - " << a[4] << endl;
	system("pause");
}
void function1()
{
	cout << "Введите маленькую букОвку\n";
	char a; // определяем символьный тип данных a
	cin >> a;
	cout << "Вывод большой букОвоки\n" << (char)toupper(a) << endl;;// при помощи функции toupper позволяет преобразовывать буквы нижнего регистра в верхний
}
void function2()
{
	int n, a = 0, b = 0;
	float sr; // определение для дальнейшеого ввода среднего 
	cout << "Ввод размерности массива:\n" << endl;
	cin >> n;
	float* arr = new float[n]; // выделение памяти для массива
	cout << "Ввод элементов:\n" << endl;
	for (int i = 0; i < n; i++) // цикл до размерности массива
		cin >> arr[i];
	cout << "Полученный массив" << endl;
	for (int i = 0; i < n; i++) // цикл до получения массива где в дальнейшем будет складываться все элементы массивы и делится на кол-во элементов
	{
		b++; // добавление к операнду
		a += arr[i]; //складываем и присваиваем 
		cout << arr[i] << "" << endl;
	}
	sr = a / b; //деление суммы элементов на кол-во элементов
	cout << "Среднее арифметическое массива = " << sr << endl; // вывод среднего арифметического 
	delete[] arr; // удаление из памяти
};




int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Задача 2" << endl;
	function1();
	cout << endl;
	cout << "Задача 3" << endl;
	function2();
	cout << endl;
	cout << "Задача 1" << endl;
	function(); // вызов функций
	cout << endl;
	system("pause");
	return 0;
}
