// Exempel 2.5, sidan 32
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	/*
	double tal = 5.0/3;
	cout << "tal: " << tal << endl;
	cout << "tal med tio värdesiffror: " << setprecision(10) << tal << endl;
	cout << "tal med tre värdesiffror: " << setprecision(3) << tal << endl;
	cout << "tal med en värdesiffra: " << setprecision(1) << tal << endl;
    cout << "tal med tre decimaler: " << fixed << setprecision(3) << tal;
    */
    
    // Om division med heltal
    // (plus, minus och gånger fungerar som man tror att det ska göra.)
    int a=8, b=5;
    cout << b << " går " << a/b << " hela gånger i " << a << endl;
    cout << "resten blir " << a % b << endl;
    int sekunder = 77;
 cout << sekunder << " sekunder " << " motsvarar " << sekunder/60<< " minuter och "
 << sekunder%60<< " sekunder" << endl;
    
    
    
    
    
    
    
    
    
    
	

	return 0;
}
