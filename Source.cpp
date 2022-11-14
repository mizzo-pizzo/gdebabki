#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	//вариант 1
	//1 Задан массив A, содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.
	/*const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	int proizv = 1;
	int i;
	for (i = 0; i < n; i++)

	{
		if (arr[i] < 0)
		{
			arr[i] = 10;
			proizv = arr[i] * arr[i + 1];

		}
	}
	cout << "proizvedenie = " << proizv << endl;*/
	//2 Задан массив, который содержит 8 случайных целых чисел от -10 до 10. Найти сумму положительных элементов массива.
	/*const int n = 8;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 - 5;
		cout << arr[i] << " ";
	}
	double sum = 0;
	for (int i = 0 ; i < n; i++) {
		if (arr[i] > 0)
		sum += arr[i];
	}
	cout << "suma polojitelnix elementov = " << sum;*/
	//3 Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 и на 5.
	/*const int n = 16;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	double k = 0;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
			sum += arr[i];
		k++;
	}
	cout << "kolvo =" << sum;*/

	//4 Задан массив из 9 целых чисел  от -10 до 10. Найти сумму элементов массива, которые являются четными числами.
	/*const int n = 9;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 - 5;
		cout << arr[i] << " ";
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 )
			sum += arr[i];
	}
	cout << "suma chetnix chisel = " << sum;*/
}