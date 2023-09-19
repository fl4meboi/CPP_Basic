#include "Auto.h"

#include <iostream>

using namespace std;

Auto::Auto() : Vehicle(_Year, _Price)
{
	cout << "Auto Defalult Constructor" << endl;
}

Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price)
{
	cout << "Auto Parameter Constructor" << endl;
}