#include <iostream>
#include <cmath>
using namespace std;

#define SIZE 8

int main ()
{
	int decimal [SIZE] = {0};	
	int i=0;
	int value = 0;
	
	for (i=SIZE-1; i>=0; i--)
	{
		cout << "Give the value for the " << i << " digit :";
		cin >> decimal [i];
		if (decimal [i] > 8)
		{
			cout << "Give other value to i for this digit, restart process" << endl;	
		}
	}
	
	for (i=0; i<SIZE; i++)
	{ 
		value = value + decimal[i]*pow((double) 8, (double) i);	
	}
	 cout << "Result = " << value << endl;
	
	return 0;
}

