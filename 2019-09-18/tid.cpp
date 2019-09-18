// Omvandling av timmar till dygn och timmar
#include <iostream>
using namespace std;
int main()
{
    int timmar = 49;
    int dygn = timmar / 24;
    int rest_timmar = timmar % 24;
    cout << timmar << " timmar motsvaras av "  << dygn << " dygn och " << rest_timmar << " timmar" << endl;
	

	return 0;
}
