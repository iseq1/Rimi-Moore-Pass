#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

/*
13. Дано слово. Удалить из него все повторяющиеся буквы, оставив их первые
вхождения: в слове должны остаться только различные буквы
 */

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // Создаем пустую строку-результат
    string result;

    // Проходимся по каждой букве в слове
    for (int i = 0; i < word.size(); i++) {
        // Проверяем, встречалась ли буква ранее
        bool is_first_occurrence = true;
        for (int j = 0; j < i; j++) {
            if (word[i] == word[j]) {
                is_first_occurrence = false;
                break;
            }
        }

        // Если буква встретилась первый раз, добавляем ее в результат
        if (is_first_occurrence) {
            result += word[i];
        }
    }

    // Выводим результат на экран
    cout << "Result: " << result << endl;

    return 0;
}
