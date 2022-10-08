#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int adress_len;
	cout << "Введите размер адреса в битах: "; cin >> adress_len; cout << endl;
	double mem_size = pow(2, adress_len);
	cout.width(10); cout << mem_size / pow(2, 0) << '\t' << " Байт" << endl;
	cout.width(10); cout << mem_size / pow(2, 10) << '\t' << " КБайт / 10^3 / 2^10" << endl;
	cout.width(10); cout << mem_size / pow(2, 20) << '\t' << " МБайт / 10^6 / 2^20" << endl;
	cout.width(10); cout << mem_size / pow(2, 30) << '\t' << " ГБайт / 10^9 / 2^30" << endl;
	cout.width(10); cout << mem_size / pow(2, 40) << '\t' << " ТБайт / 10^12 / 2^40" << endl;
	cout.width(10); cout << mem_size / pow(2, 50) << '\t' << " ПБайт / 10^15 / 2^50" << endl;
	cout.width(10); cout << mem_size / pow(2, 60) << '\t' << " ЭБайт / 10^18 / 2^60";
}