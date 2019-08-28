// Övning 2.2, sidan 27
#include <iostream>
using namespace std;
int main()
{
	/*
	int a;
	int b;
	int c;
	*/
	int a, b, c;
	/*
	 * Ett tal i taget
	cout << "mata in tal 1 ";
	cin >> a;
	cout << "mata in tal 2 ";
	cin >> b;	
	cout << "mata in tal 3 ";
	cin >> c;
	*/
	cout << "Mata in tre tal ";
	cin >> a >> b >> c; // Mellanslag mellan inmatningarna 
	cout << "Summan blir (1) " << a+b+c << endl;
	int summa = a+b+c;
	cout << "Summan blir (2) " << summa << endl;
		
	return 0;
}











