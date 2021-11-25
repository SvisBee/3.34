#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        setlocale(0, "");
        int q;
        cout << "Введите число для выбора действия: 1 - рассчитать, 0 - выход" << endl;
        cin >> q;

        if (q == 0)
            break;

        int i, j;
        cout << "Введите i (позиция первого числа): " << endl;
        cin >> i;
        if (i < 1)
        {
            cout << "Позиция первого числа не может быть меньше 1" << endl;
            while (i < 1)
            {
                cout << "Введите i (позиция первого числа): " << endl;
                cin >> i;
            }
        }
        cout << "Введите j (позиция последнего числа): " << endl;
        cin >> j;
        if (j <= i)
        {
            cout << "Позиция последнего числа не может быть меньше или быть равна позиции первого числа" << endl;
            while (j <= i)
            {
                cout << "Введите j (позиция последнего числа): " << endl;
                cin >> j;
            }
        }
      
        int n, k = 0, sum = 0, a;
        cout << "Введите последовательность целых чисел, которая оканчивается 0: " << endl;
        while (cin >> n && n != 0)
        {
            k++;

            if (k >= i && k <= j)
            {
                sum += n;
            }
        }

        if (k < i || k < j)
            cout << "Эментов с i по j либо нет, либо не хватает." << endl;
        else
            cout << "Сумма чисел с i по j = " << sum << endl;
    }
    system("pause");
    return 0;
}