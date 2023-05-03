#include <iostream>
#include <cstring>
using namespace std;

/*
22. Определить, сколько различных букв содержится в заданном слове.
 */

int main()
{
    string word;

    // Вводим слово
    cout << "Enter a word: ";
    cin >> word;

    // Определяем, сколько различных букв содержится в слове
    int count = 0;
    for (char letter = 'a'; letter <= 'z'; letter++) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == letter) {
                count++;
                break;
            }
        }
    }

    // Выводим результат
    cout << "The number of different letters in the word \"" << word << "\" is " << count << endl;

    return 0;
}
