#include <iostream>
#include <locale>

using namespace std;

int rows, cols;

void enter_array(int** arr, int rows, int cols);

int main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	do {
		cout << "������� ���������� �����:  " << endl;
		cin >> rows;
	} while (rows <= 0);
	do {
		cout << "������� ���������� ��������:  " << endl;
		cin >> cols;
	} while (cols <= 0);
	int** arr;
	arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	cout << "���� �������:" << endl;
	enter_array(arr, rows, cols);
	return 0;
}

void enter_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		cout << "������� ������ �����:" << "  " << i + 1 << endl;
		for (int j = 0; j < cols; j++)
		{
			cin >> *(*(arr + i) + j);
		}
	}
}