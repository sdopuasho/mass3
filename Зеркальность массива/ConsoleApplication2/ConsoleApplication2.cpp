// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int c;
	cout << "Введите размерность массива" << endl;
	cin >> c;
	const int n = c;
	int s = 0, i, j, a[100][100], b = 0, p, k[200], pl[200], z, kr = 0;
	bool zerkalo;
	cout << "Введите элемент массива" << endl;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	z = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (p = 1; p < n; p++) {
				if (j == i + p) {
					k[z] = a[i][j];
					z++;
					kr++;
				}
			}
		}
	}
	z = 0;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			for (p = 1; p < n; p++) {
				if (i == j + p) {
					pl[z] = a[i][j];
					z++;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < kr; i++) {
		cout << k[i];
	}
	cout << endl;
	for (i = 0; i < kr; i++) {
		cout << pl[i];
	}
	cout << endl;
	for (i = 0; i < kr; i++)
		if (pl[i] != k[i]) {
			i = 200;
			
			zerkalo = false;
		}
		else
		{
			zerkalo = true;
		}
	if (zerkalo == false) {
		cout << "массив не зеркален" << endl;
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i == j) {
					a[i][j] = 0;
				}
				else {
					a[i][j] = 1;
				}
			}
		}
	}
	else {
		cout << "массив зеркален" << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i == j) {
					a[i][j] = 1;
				}
				else {
					a[i][j] = 0;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

