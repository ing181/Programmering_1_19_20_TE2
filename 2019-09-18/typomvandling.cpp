// Konstanter
#include <iostream>
using namespace std;
int main()
{
    // Konstant
    const float PI = 3.141592654;
    
    // Kompilatorn ger ett felmeddelande. Det går inte
    // att ändra värdet på en konstant.
    // Deklareras med "const" före datatypen
    // PI = 5.1;
    
    const int tal = 0; // Går inte att ändra
    
    cout << PI << endl;
	

	return 0;
}
