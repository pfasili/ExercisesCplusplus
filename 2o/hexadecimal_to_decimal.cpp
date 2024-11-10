#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 10

int main()
{
	int decimal [SIZE]={0};
	int i=0;
	int value = 0;
	char AtoF [] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char input;
	
	
	for (i=SIZE-1; i>=0; i--)
	{
		cout << "Give the value for the " << i << " digit :";
		cin >> input;
		
		if (input<'0' || input>'15')
		{
			cout << "Give other value to i for this digit, restart process" << endl;	
		}
		
		if (input>='A' && input<='F')
		{
			decimal[i]= input - 'A' + 10; // Kanw ta grammata ari8mo gia na mporei na eisagei o xrhsths A...F.
			cout << "Digit equals to = " << decimal[i] << endl;
		}
		else 
		{	
			decimal[i] = input - '0';
			cout << "Digit equals to = " << decimal[i] << endl;
		}
		
	}
	
	for (i=0; i<SIZE; i++)
	{ 
		value = value + decimal[i]*pow((double) 16, (double) i);	
	}
	 cout << "Result = " << value << endl;
	
	return 0;
}
