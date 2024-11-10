#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 10

int main ()
{
	int hexadecimal [SIZE] = {0};
	int i=0;
	int value=0;
	int digit=0;
	int remainder=0;
	char AtoF [] = {'A', 'B', 'C', 'D', 'E', 'F'};

	cout << "Give number: ";
	cin >> value;

	
	while (value>0)
	
	{	remainder = value % 16;
        value = value / 16;
        
		if (remainder >= 10)
			{
            	hexadecimal[digit] = remainder; 
            	cout << "Digit " << digit << " , hexadecimal = " << AtoF[remainder - 10] << endl;
			}
			else 
			{	
            	hexadecimal[digit] = remainder;
            	cout << "Digit " << digit << " , hexadecimal = " << hexadecimal[digit] << endl;
        	}
        	digit++;
	}
	
	cout << "Result = ";
    for (i = digit - 1; i >= 0; i--)
    {
        if (hexadecimal[i] >= 10)
        {
            cout << AtoF[hexadecimal[i] - 10];
        }
        else
        {
            cout << hexadecimal[i]; 
        }
    }
    cout << endl;
	
	return 0;
}
