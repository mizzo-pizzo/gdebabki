#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	//������� 1
	//1 ����� ������ A, ���������� 10 ����� ��������� ����� �� 0 �� 20. ����� ������������ ��������� ����� �������.
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
	//2 ����� ������, ������� �������� 8 ��������� ����� ����� �� -10 �� 10. ����� ����� ������������� ��������� �������.
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
	//3 ����� ������, ������� �������� 16 ��������� ����� ����� �� 0 �� 20. ����� ���������� ��������� �������, ������� ������� �� 3 � �� 5.
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

	//4 ����� ������ �� 9 ����� �����  �� -10 �� 10. ����� ����� ��������� �������, ������� �������� ������� �������.
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