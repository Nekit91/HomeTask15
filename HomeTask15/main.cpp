#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {

    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    int array[10][10];
    int sums[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = rand() % 101;
            sums[i] += array[i][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "����� ���� " << i + 1 << ": " << sums[i] << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = rand() % 101;
        }
    }
        int n;
    std::cout << "������� ����� �� 0 �� 9: ";
    std::cin >> n;
    std::sort(array[n], array[n] + 10);
    for (int i = 0; i < 10; i++) {
        std::cout << array[n][i] << " ";
    }


































    return 0;
}