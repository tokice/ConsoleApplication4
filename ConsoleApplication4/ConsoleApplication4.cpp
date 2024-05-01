#include <Windows.h>
#include <iostream>
using namespace std;

class MultiplicationTable {
public:
    // Метод для вывода таблицы умножения до заданного числа
    void printTable(int number) const {
        // Вывод заголовка таблицы
        cout << "Таблица умножения до " << number << ":" << endl;

        // Вывод самой таблицы
        for (int i = 1; i <= number; i++) {
            for (int j = 1; j <= number; j++) {
                // Вывод результата умножения i на j с выравниванием
                cout << i * j;

                // Добавление табуляции после числа (если это не последний столбец)
                if (j < number) {
                    cout << "\t"; //Нашел эот метод в интернете, так таблица выглядит красивее.
                }
            }
            // Переход на новую строку после завершения строки таблицы
            cout << endl;
        }
    }
};

int main()
{
    SetConsoleOutputCP(1251); // Установка кодировки Windows-1251
    SetConsoleCP(1251);   // эти строчки кода нужны мне для верного вывода кириллицы

    int number;
    cout << "Введите число для вывода таблицы умножения: ";
    cin >> number;

    if (number >= 1) {

        // Создание объекта класса MultiplicationTable
        MultiplicationTable table;

        // Вызов метода для вывода таблицы умножения
        table.printTable(number);
    } else cout << "Введите число большее или равное единице";
}
//таблица умножения не совсем такая как в вашем примере, нет графы умножения единицы на самой себя

