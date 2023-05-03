#include <iostream>
#include <string>
using namespace std;

/*
12. Дано слово. Если длина его нечетная, то удалить среднюю букву, в противном
случае - две средние буквы.
 */

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();
    if (length % 2 == 1) {
        // Длина слова нечетная: удаляем среднюю букву
        int middle_index = length / 2;
        word.erase(middle_index, 1);
    } else {
        // Длина слова четная: удаляем две средние буквы
        int middle_index = length / 2;
        word.erase(middle_index - 1, 2);
    }

    cout << "Result: " << word << endl;

    return 0;
}