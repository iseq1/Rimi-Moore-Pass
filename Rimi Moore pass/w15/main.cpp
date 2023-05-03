#include <iostream>
using namespace std;

/*
15. Известен год, номер месяца и число дней рождения человека, а также текущая
дата: год, месяц и число. Определить возраст человека
 */

// Определяем структуру для хранения даты
struct Date {
    int year, month, day;
};

int main()
{
    // Создаем переменные структуры Date для даты рождения и текущей даты
    Date birth_date, current_date;

    // Вводим данные о дате рождения и текущей дате
    cout << "Enter year of birth: ";
    cin >> birth_date.year;
    cout << "Enter the number of the month of birth: ";
    cin >> birth_date.month;
    cout << "Enter your birthday: ";
    cin >> birth_date.day;

    cout << "Enter current year: ";
    cin >> current_date.year;
    cout << "Enter current month number: ";
    cin >> current_date.month;
    cout << "Enter the current date of the day: ";
    cin >> current_date.day;

    // Вычисляем возраст человека
    int age = current_date.year - birth_date.year;
    if (current_date.month < birth_date.month || (current_date.month == birth_date.month && current_date.day < birth_date.day)) {
        // Если текущий месяц меньше месяца рождения или текущий месяц равен месяцу рождения, но текущий день меньше дня рождения,
        // то вычитаем год из возраста
        age--;
    }

    // Выводим возраст на экран
    cout << "Age: " << age << " years" << endl;

    return 0;
}
