/**************************
* Автор: Арестова Е.Е.    *
* Дата: 8.10.2024         *
* Название: Вариант №2     *
***************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    int const N = 6;
    int const M = 6;
    int sum, count;
 
    int A[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            A[i][j] = rand() % 20 - 10;
        }
    }
    
    cout << "Вывод матрицы: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N; ++i) {
        sum = 0;
        for (int j = 0; j < M; ++j) {
            if (A[i][j] < 0) {
                sum += A[i][j];
            }
        }
        cout << "Сумма отрицательных элементов в " << ++A[i] << " строке = " << sum << endl;
    }
    cout << endl;

    for (size_t i = 0; i < N; ++i) {
        count = 0;
        for (size_t j = 0; j < M; ++j) {
            if (A[i][j] < 0) {
                ++count;
            }
        }
        cout << "Число отрицательных элементов в " << ++A[i] << " строке = " << count << endl;
    }
}
