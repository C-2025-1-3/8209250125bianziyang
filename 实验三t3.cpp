#include<iostream>
#include<iomanip>
using namespace std;

double celsius_to_fah(double cel)
{
	return cel * 9.0 / 5.0 + 32.0;
}

double fahrenheit_to_cels(double fah)
{
	return (fah - 32.0) * 5.0 / 9.0;
}

int main()
{
	cout << "Celsius"<<'\t'<<"Fahrenheit"<<'\t'<<"| Fahrenheit"<<'\t'<<"Celsius" << endl;
	for (int i = 0; i < 10; i++)
	{
		double cel_left = 40 - i;
		double fah_left = celsius_to_fah(cel_left);
		double fah_right = 120 - i;
		double cel_right = fahrenheit_to_cels(fah_right);

		cout << fixed << setprecision(1);   //左侧温度保留1位小数
		cout << setw(6) << cel_left << setw(12) << fah_left;
		cout << '\t' << "|" << setw(9) << fah_right << setw(10) << setprecision(2) << cel_right << endl;  //右侧温度保留2位小数
	}
	return 0;
}
