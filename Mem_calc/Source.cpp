#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int adress_len;
	cout << "������� ������ ������ � �����: "; cin >> adress_len; cout << endl;
	double mem_size = pow(2, adress_len);
	cout.width(10); cout << mem_size / pow(2, 0) << '\t' << " ����" << endl;
	cout.width(10); cout << mem_size / pow(2, 10) << '\t' << " ����� / 10^3 / 2^10" << endl;
	cout.width(10); cout << mem_size / pow(2, 20) << '\t' << " ����� / 10^6 / 2^20" << endl;
	cout.width(10); cout << mem_size / pow(2, 30) << '\t' << " ����� / 10^9 / 2^30" << endl;
	cout.width(10); cout << mem_size / pow(2, 40) << '\t' << " ����� / 10^12 / 2^40" << endl;
	cout.width(10); cout << mem_size / pow(2, 50) << '\t' << " ����� / 10^15 / 2^50" << endl;
	cout.width(10); cout << mem_size / pow(2, 60) << '\t' << " ����� / 10^18 / 2^60";
}