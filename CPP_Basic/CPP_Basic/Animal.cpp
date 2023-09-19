#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()
{
	Finger = 10;
	Limb = 10;
}

void Animal::PrintFinger()
{
	cout << Limb << endl;
}

void Animal::PrintLimb()
{
	cout << Finger << endl;
}