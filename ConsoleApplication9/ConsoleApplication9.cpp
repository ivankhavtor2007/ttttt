
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo, chislo1;
	int chifra1, chifra2, chifra3, chifra4;

	cout << "Введите четырёхзначное число";
	cin >> chislo;

	if (chislo > 999 && chislo < 10000) {
		chifra1 = chislo / 1000;
		chifra2 = chislo % 1000 / 100;
		chifra3 = chislo / 10 % 10;
		chifra4 = chislo % 10;
		chislo1 = chifra2 * 1000 + chifra1 * 100 + chifra4 * 10 + chifra3;
		cout << "Вот новое число=" << chislo1;
	}
	else {
		cout << "Ошибка";
	}
}


