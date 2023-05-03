#include <iostream>
using namespace std;

/*
2 Создать компьютерную программу, сортирующую массив из вещественных чисел
по возрастанию, используя “пузырьковую” сортировку. Число элементов массива
вводится пользователем перед вводом значений из массива. Исходный и
отсортированный массивы выводятся на экран в 2 строках: один под другим
*/

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    double* arr = new double[n] ;
    cout << "Enter " << n << " numbers: \n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Source array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }


    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
