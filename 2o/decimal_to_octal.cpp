#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 10 

int main ()
{
	int octal [SIZE] = {0};	
	int i=0;
	int value=0;
	int digit=0;
	cout << "Give number: ";
	cin >> value;
	
	while (1)
	{
		if (value>0)
		{
			octal[digit] = value % 8;
			value = (float)value / 8; 
			cout << "digit: "<< digit << " , decimal = " << octal[digit] << endl; 
			digit++;
			if (value == 0)
			{
				break;
			}
		}
	}
	cout << "Result = ";
	for (i= digit-1; i>=0; i--)
	{
		cout << octal[i];
	}
	cout << endl;
	
	
	return 0;
}
