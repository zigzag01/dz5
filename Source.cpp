//Белоушко Елизавета П43021
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	/*1. Составьте программу, выводящую на экран квадраты чисел от 10 до 20 включительно.
	int a = 10;
	while (a <= 20)
	{
		cout << a * a << " ";
		a++;
	}
	return 0;*/



	/*2. Даны натуральные числа от 35 до 87. Вывести на консоль те из них, которые при делении на 7 дают остаток 1, 2 или 5.
	int a = 35;
	while (a <= 87)
	{
		if (a % 7 == 1 || a % 7 == 2 || a % 7 == 5) cout << a << " ";
		a++;
	}
	return 0;*/



	/*3. Найдите сумму 1+2+3+...+n, где n вводится пользователем с клавиатуры.
	int n, sum = 0, i = 0;
	cin >> n;
	while (i < n)
	{
		i++;
		sum += i;
	}
	cout << sum << endl;
	return 0;*/



	/*4. Введите в консоль все трехзначные числа, сумма цифр которых равна 15.
	int a = 100, p1, p2, p3;
	while (a <= 999)
	{
		p3 = a % 10;
		p2 = a % 100 / 10;
		p1 = a / 100;
		if (p1 + p2 + p3 == 15) cout << a << " ";
		a++;
	}
	return 0;*/
}