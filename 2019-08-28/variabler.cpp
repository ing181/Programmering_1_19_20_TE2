#include <iostream>
using namespace std;
int main()
{
	/*
	 * Regel: en variabel måste
	 * alltid skapas (deklareras)
	 * innan den kan användas
	 */
	 int tal; // Deklarerad! Går att använda
	 tal = -8;  // Du får en varning "tal" inte används
	 /*
	  * Du kan bara ha EN variabel med
	  * samma namn
	  */
	  
	  int x = 9;
	  cout << x << endl;
	  // FEl! redan deklarerad
	  // int x = 6;
	  
	

	return 0;
}

