#include <iostream>
using namespace std;
int main()
{
	
	int tal; // kommentar variabeln tal skapas 
	tal = 7; // tal ges värdet 7
	/* Kommentar flera rader
	   Värdet (innehållet) i tal skrivs ut
	 */
	cout << "Värdet är " << tal << endl;
	tal = 4;
	cout << "Värdet är " << tal << endl;
	tal = (tal + 1); // tal tilldelas sitt eget värde + 1
	cout << "Värdet är " << tal << endl;
	return 0;
}
