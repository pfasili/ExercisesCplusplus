#include <iostream>
using namespace std;

int main()
{
    float x,z;
    cout << "Give real number from range [0,10) with 2 decimal points: ";
	cin >> x;
    int y = x * 100;
    int w = x * 10;
    if (x<10 && x>=0)
    {       
        if (x * 100 == y)
           { cout << "The number has exactly two decimal points.\n";
           
           if (x * 10 - w < 0.5)
           {
               z = (float)w/10; 
               cout << "The result is " << z << endl;
           }
           else { z = ((float)w+1)/10;
               cout << "The result is " << z << endl;
           }
        }
        else { cout << "Give other number.\n";
            }
    }
    return 0;
}
