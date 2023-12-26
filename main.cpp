#include <iostream>

using namespace std;

void findSmallestPair(int arr[], int size, int* num1, int* num2);

int main()
{
    // Найти 2 целых числа в заданном массиве с наименьшей суммой.
    int x[] {412,20,111,5,23,23,982,234,2,123,444,98};

    int num1, num2;

    findSmallestPair(x, sizeof(x) / sizeof(x[0]), &num1, &num2);

    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

    return 0;
}

void findSmallestPair(int arr[], int size, int* out1, int* out2) {
    // отбрасываем рассмотрение частных случаев, считаем, что элементов 2 и более 

    // как вариант решения
    // возьмём первый элемент в сумме со всеми остальными
    // наименьшая из сумм соответствует найденному наименьшемому второму слагаемому
    // теперь взяв это наименьшее слагаемое также перебираем все элементы
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[1];

    int minSum = *ptr1 + *ptr2;

    for (size_t i = 0; i < size; i++)
    {
        if(*ptr1 + arr[i] < minSum && ptr1 != &arr[i]) {
            ptr2 = &arr[i];
            minSum = *ptr1 + *ptr2;
        }
    }

    for (size_t i = 1; i < size; i++)
    {
        if(*ptr2 + arr[i] < minSum  && &arr[i] != ptr2) {
            ptr1 = &arr[i];
            minSum = *ptr1 + *ptr2;
        }
    }
    // O(n) - сложность алгоритма линейная

    *out1 = *ptr1;
    *out2 = *ptr2;
}