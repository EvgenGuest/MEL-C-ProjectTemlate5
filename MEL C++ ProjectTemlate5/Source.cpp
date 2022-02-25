//������������ ������ ������� �++
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void numType(int num) {
	cout << "INT";
}
void numType(double num) {
	cout << "DOUBLE";
}
int sumAB(int a, int b) {
	if (a == b)
		return a;
	return sumAB(a + 1, b) + a;
}
template <typename T> void rangeSort(T array[], int length) {
	int firstIndex = -1, lastIndex = -1;
	for (int i = 0; i < length; i++)
		if (array[i] < 0){
			firstIndex = i;
			break;
		}
	for (int i = length -1; i >= 0; i--)
		if (array[i] > 0) {
			lastIndex = i;
			break;
		}
	if(firstIndex != -1)
		for (int i = lastIndex; i > firstIndex; i--)
			for (int j = firstIndex; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);		
}
template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]";
}
template <typename T> void moveArray(T array[], int length, int num) {
	for(int j =0; j < num; j++){
		T tmp = array[length - 1];
		for (int i = length - 1; i > 0; i--)
			array[i] = array[i - 1];
		array[0] = tmp;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	//������ 4.
	cout << "������ 4.\n����������� ������:\n";
	int z4[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	showArray(z4, 10);
	cout << "\n�������� ������:\n";
	moveArray(z4, 10, 7);
	showArray(z4, 10);
	cout << "\n\n";


	//������ 3.
	/*cout << "������ 3.\n����������� ������:\n";
	int z3[20];
	for (int i = 0; i < 20; i++)
		z3[i] = rand() % (20 + 1 - (-20)) + (-20);
	showArray(z3, 20);
	rangeSort(z3, 20);
	cout << "\n�������� ������:\n";
	showArray(z3, 20);
	cout << "\n\n";*/


	/*cout << "������ 2.\n������� ������ � ����� ���������: ";
	cin >> n >> m;
	cout << "����� ����� �� " << n << " �� " << m << " = " << sumAB(n, m) << "\n\n";*/

	//������ 1.
	/*cout << "������ 1.\n������� �����:";
	cin >> n;
	cout << "��� ������ ����� " << n << " = ";
	numType(n);
	cout << endl;
	cout << "��� ������ ����� 5.5 = ";
	numType(5.5);
	cout << "\n\n";*/

	//������ 2.



	return 0;
}
