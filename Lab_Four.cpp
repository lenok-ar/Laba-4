/***********************************
 * Автор:    Арестова Е.Е.         *
 * Дата:     09.10.2024            *
 * Название: Обработка массивов    *
 * Вариант:  2                     *
 ***********************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	const int N = 5;
	const int M = 4;

	int A[N][M];
	for (int j = 0;j < N; j++){
		for (int i = 0; i < M; i++){
			A[j][i] = rand() % 20 - 10;
		}
	}

	cout << "Выведем матрицу: " << endl;
	for (int j = 0;j < N; j++){
		for (int i = 0;i < M; i++){
			cout << A[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0;
	for (int j = 0;j < N; j++){
		for (int i = 0;i < M; i++){
			if (A[j][i] < 0) {
				sum += A[j][i];
			}
		}
	}
	cout << "Сумма отрицательных элементов = " << sum << endl;

	int  count = 0;
	for (size_t j = 0; j < N; j++) {
		for (size_t i = 0; i < M; i++) {
			if (A[j][i] < 0) {
				count++;
			}
		}
	}
	cout << "Число отрицательных элементов = " << count << endl;
}
