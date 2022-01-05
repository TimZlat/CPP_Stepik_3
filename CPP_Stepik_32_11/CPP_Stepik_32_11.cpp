// CPP_Stepik_32_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int num, n;
    int s1=0, s2 = 0;
    int i = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите число-> ";
    cin >> num;
    n = num;
    if (n < 100000 || n>999999) 
    {
        cout << "ERROR" << endl;
    }
    else
    {
        while (i<3)
        { 
            s1 = s1 + (n % 10);
            n = n / 10;
            i=i+1;
        }
        i = 0;
        while (i < 3)
        {
            s2 = s2 + (n % 10);
            n = n / 10;
            i=i+1;
        }
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
// Вариант решения без использования циклов
//int main() {
//    //put your code here
//    int x;
//    cin >> x;
//    if (x < 100000 || x>999999) {
//        cout << "ERROR";
//        return 0;
//    }
//    int c1, c2, c3, c4, c5, c6;
//    c6 = x % 10;
//    x /= 10;
//    c5 = x % 10;
//    x /= 10;
//    c4 = x % 10;
//    x /= 10;
//    c3 = x % 10;
//    x /= 10;
//    c2 = x % 10;
//    c1 = x / 10;
//    if (c1 + c2 + c3 == c4 + c5 + c6) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    return 0;