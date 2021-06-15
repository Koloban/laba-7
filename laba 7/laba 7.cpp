#include <iostream>
#include <algorithm>

using namespace std;

double garm(double a, double b) { return 2 / (1 / a + 1 / b); }
// Формула взята из интернета
void vtoroye(double* a, double* b, double* c) {
	double mas[3];
	mas[0] = *a;	mas[1] = *b;	mas[2] = *c;

	sort(mas, mas + 3);
	// Из библиотеки алгоритм используем функцию sort, так как это не запрещено 
	*a = mas[0];	*b = mas[1];	*c = mas[2];
}

int main()
{
	//Pervoye
	cout << "Garmon(2.5, 7.4):" << garm(2.5, 7.4);
	// Проверяем функцию garm 
	//Vtoroye
	double* per, * vtor, * tret;
	per = new double;	vtor = new double;	tret = new double;
	*per = 2.2;			*vtor = 3.3;		*tret = 1.1;
	// Задал число сам, т.к. в задании не сказано вводить с клавиатуры
	vtoroye(per, vtor, tret);

	cout << "\nper:" << *per << "\nvtor:" << *vtor << "\ntret" << *tret;

}