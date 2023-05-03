#include <iostream>
using namespace std;

/*
17. Известны даты рождения двух человек (год, номер месяца и число) и текущая дата.
Определить, кто из них моложе
 */

// Определяем структуру для хранения даты
struct Date {
    int year, month, day;
};

int main()
{
    // Создаем переменные структуры Date для двух дней рождения и текущей даты
    Date person1, person2, current_date;

    // Вводим данные о датах рождения
    cout << "Enter the year of the first person: ";
    cin >> person1.year;
    cout << "Enter the month number of the first person: ";
    cin >> person1.month;
    cout << "Enter the day of the first person: ";
    cin >> person1.day;

    cout << "Enter the year of the second person: ";
    cin >> person2.year;
    cout << "Enter the month number of the second person: ";
    cin >> person2.month;
    cout << "Enter the day of the second person: ";
    cin >> person2.day;

    // Вводим данные о текущей дате
    cout << "Enter current year: ";
    cin >> current_date.year;
    cout << "Enter current month number: ";
    cin >> current_date.month;
    cout << "Enter the current date of the day: ";
    cin >> current_date.day;

    // Вычисляем возраст каждого человека
    int age1 = current_date.year - person1.year;
    if (current_date.month < person1.month || (current_date.month == person1.month && current_date.day < person1.day)) {
        age1--;
    }

    int age2 = current_date.year - person2.year;
    if (current_date.month < person2.month || (current_date.month == person2.month && current_date.day < person2.day)) {
        age2--;
    }

    cout << "The first person is "<< age1 <<" years old and the second person is "<< age2 <<" years old." << endl;
    // Сравниваем возрасты
    if (age1 < age2) {
        cout << "The first person is younger than the second." << endl;
    } else if (age2 < age1) {
        cout << "The second person is younger than the first." << endl;
    } else {
        cout << "Both people are the same age." << endl;
    }

    return 0;
}
