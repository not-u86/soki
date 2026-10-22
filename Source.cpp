#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int choice;
    int litr;
    int vibor;

    //fruit
    double apple = 110;
    double orange = 120;
    double abricos = 150;
    double grusha = 140;

    //vegetable
    double tomato = 100;
    double onion = 125;
    double cucumber = 115;

    //tea
    double chesnok = 80;
    double petrush = 90;

    double total = 0;

    while (true)
    {
        cout << "\n СОКИ ДАНИИЛА ===\n";
        cout << "1. Фруктовые\n";
        cout << "2. Овощные\n";
        cout << "3. Чай\n";
        cout << "0. Назад\n";

        cout << "ВЫБЕРИ КАТЕГОРИЮ: ";
        cin >> vibor;

        if (vibor == 0)
        {
            break;
        }

        //fruit
        if (vibor == 1)
        {
            while (true)
            {
                cout << "\n--- Фруктовые ---\n";
                cout << "1. Яблочный\t" << apple << " руб/л\n";
                cout << "2. Апельсиновый\t" << orange << " руб/л\n";
                cout << "3. Абрикосовый\t" << abricos << " руб/л\n";
                cout << "4. Грушевый\t" << grusha << " руб/л\n";
                cout << "0. Назад\n";

                cout << "ВЫБЕРИ КАТЕГОРИЮ: ";
                cin >> choice;

                if (choice == 0)
                {
                    break;
                }

                if (choice < 1 || choice > 4)
                {
                    cout << "Неверный выбор!\n";
                    continue;
                }

                cout << "Литры: ";
                cin >> litr;

                if (litr <= 0)
                {
                    cout << "Количество должно быть больше 0!\n";
                    continue;
                }

                if (choice == 1)
                    total += apple * litr;
                else if (choice == 2)
                    total += orange * litr;
                else if (choice == 3)
                    total += abricos * litr;
                else if (choice == 4)
                    total += grusha * litr;
            }
        }

        //vegetables
        else if (vibor == 2)
        {
            while (true)
            {
                cout << "\n--- Овощные ---\n";
                cout << "1. Томатный\t" << tomato << " руб/л\n";
                cout << "2. Луковый\t" << onion << " руб/л\n";
                cout << "3. Огуречный\t" << cucumber << " руб/л\n";
                cout << "0. Назад\n";

                cout << "ВЫБЕРИ КАТЕГОРИЮ: ";
                cin >> choice;

                if (choice == 0)
                {
                    break;
                }

                if (choice < 1 || choice > 3)
                {
                    cout << "Неверный выбор!\n";
                    continue;
                }

                cout << "Литры: ";
                cin >> litr;

                if (litr <= 0)
                {
                    cout << "Количество должно быть больше 0!\n";
                    continue;
                }

                if (choice == 1)
                    total += tomato * litr;
                else if (choice == 2)
                    total += onion * litr;
                else if (choice == 3)
                    total += cucumber * litr;
            }
        }

        //tea
        else if (vibor == 3)
        {
            while (true)
            {
                cout << "\n--- Чай ---\n";
                cout << "1. Чесночный\t" << chesnok << " руб/л\n";
                cout << "2. Петрушечный\t" << petrush << " руб/л\n";
                cout << "0. Назад\n";

                cout << "ВЫБЕРИ КАТЕГОРИЮ: ";
                cin >> choice;

                if (choice == 0)
                {
                    break;
                }

                if (choice < 1 || choice > 2)
                {
                    cout << "Неверный выбор!\n";
                    continue;
                }

                cout << "Литры: ";
                cin >> litr;

                if (litr <= 0)
                {
                    cout << "должно быть больше 0!\n";
                    continue;
                }

                if (choice == 1)
                    total += chesnok * litr;
                else if (choice == 2)
                    total += petrush * litr;
            }
        }
        else
        {
            cout << "Неверный выбор категории!\n";
        }
    }

    cout << "\ИТОГ\n";
    cout << "К оплате: " << total << " руб.\n";

    return 0;
}