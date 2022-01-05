// CPP_Stepik_33_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int d;
    cin >> d;
	switch (d)
	{
	case 1:
		cout << "Monday" << endl; break;
	case 2:
		cout << "Tuesday" << endl; break;
	case 3:
		cout << "Wednesday" << endl; break;
	case 4:
		cout << "Thursday" << endl; break;
	case 5:
		cout << "Friday" << endl; break;
	case 6:
		cout << "Saturday" << endl; break;
	case 7:
		cout << "Sunday" << endl; break;
	default:
		cout << "Error" << endl; break;
	}
	system("pause");

	// можно было записать короче
	//switch (n) {
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5: cout << "Working day\n"; break;
	//case 6: cout << "Saturday\n"; break;
	//case 7: cout << "Sunday\n"; break;
	//default: cout << "Error\n";
	//}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
