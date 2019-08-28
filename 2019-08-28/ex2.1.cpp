// Exempel 2.1, sidan 25																
#include <iostream>
using namespace std;
int main()
{
	/* Numeriska operatorer + (plus), - (minus), / (delat med), * (gånger) */
	/* 
	 int a;
	 a = 8;
	*/
	int a=8;
	int b = 13-a; // 13-8 vilket är lika med 5
	b = b - a;
	a = a * a; // 8 * 8 är lika med 64
	cout << "a=" << a << ", b=" << b << endl;

	return 0;
}
