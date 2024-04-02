#include <iostream>
#include <locale>
#include "Multiplicity.h"
using namespace std;

int main ( void )
{
	setlocale ( LC_ALL, "RU" );
	char stroka [ ] = { "AaaAaaAaaaAa" };
	IsKPeriodic ( stroka );

	return 0;
}