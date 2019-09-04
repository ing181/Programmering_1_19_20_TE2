// Boken sidan 28, 2.4 Variabeltyper
#include <iostream>
using namespace std;
int main()
{
	/* Se tabell 2.2, sidan 29 */
	/* Här ser du hur stora tal du kan använda
	cout << "Max storlek på datatypen char " << sizeof(char) << endl;
	cout << "Max storlek på datatypen short " << sizeof(short) << endl;
	cout << "Max storlek på datatypen int " << sizeof(int) << endl;
	cout << "Max storlek på datatypen long " << sizeof(long) << endl;
	cout << "Utryckt i byte (1 byte = 8 bitar)" << endl;
	*/
	
	short kort = 32767;
	kort = kort + 1; // Får inte plats
	cout << "short " << kort << endl;
	
	unsigned short kort2 = 32767;
	kort2 = kort2 + 1; // Får plats
	cout << "short " << kort2 << endl;
	
	
	
	
	
	return 0;
}
