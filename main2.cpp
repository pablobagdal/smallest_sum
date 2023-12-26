#include <iostream>
#include <vector>

using namespace std;

int countSteps(const int arr[], int size, int addIndex);

int main()
{
    // Дан массив целых чисел длины N и целое число K. Разрешена операция удаления первого
    // элемента массива с записью в его конец K-го элемента. Какое минимальное число шагов
    // потребуется для того, чтобы сделать все элементы массива одинаковыми? -1, если это
    // невозможно.

    const int x[] {412,20,111,5,23,23,982,234,2,123,444,98};
    const int N {sizeof(x) / sizeof(x[0])}; // для простоты привяз к готовому массиву
    int K {N-1}; // мб разное

    cout << "Result: " << countSteps(x, N, K) << endl;

    return 0;
}

int countSteps(const int originalArr[], int size, int addIndex) {
    if(addIndex == size - 1) {
        return size - 1;
    } 
    return -1;

    // int count {};

    // vector<int> arr;
    // for(int i = 0; i < size; ++i) {
    //     arr.push_back(originalArr[i]);
    // }

    // for(int i = 0; i < size-1; i++) {
    //     int temp = arr[addIndex];

    //     arr.erase(arr.begin());
    //     arr.push_back(temp);
    //     ++count;
    // }

    // for(int num : arr) {
    //     cout << num << ' ';
    // }
    // cout << endl;

    // return count;
}