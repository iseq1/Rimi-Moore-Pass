#include <iostream>
using namespace std;

/*
1.Создать компьютерную программу, выводящую на экран минимальное и
максимальное значения массива, состоящего из 5 целых знаковых чисел. Значения
массива вводятся с клавиатуры. После ввода введенные значения из массива
распечатываются на экране в одну строку
*/

int main() {

    int len = 5;
    int a;
    int* mas = new int[5];

    cout<<"Enter an array of 5 elements: ";
    for(int i =0; i <len; i++){
        cin>>a;
        mas[i] = a;
    }

    int maxElem = mas[0], minElem = mas[0] ;

    for(int i =0; i <len; i++){
        if(mas[i]<minElem){
            minElem = mas[i];
        }
        if(mas[i]>maxElem){
            maxElem = mas[i];
        }
    }

    cout<<"Maximum element: "<<maxElem<<"\n Minimum element:"<<minElem;
    return 0;
}
