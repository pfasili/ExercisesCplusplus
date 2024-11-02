#include <iostream>
using namespace std;

int main()
{
    float x,z;
    cout << "Give real number from range [0,10) with 2 decimal points: ";
	cin >> x;
	int y = x * 100;
	int w = x * 10;
    
    switch (x<10 && x>=0){
        case 1: switch (x * 100 == y) {
            case 1:
              cout << "The number has exactly two decimal points.\n";
              switch (x * 10 - w < 0.5){
                  case 1:  z = (float)w/10; 
                  cout << "The result is " << z << endl;
                  break;
                  
                  default: z = ((float)w+1)/10;
                  cout << "The result is " << z << endl;
              }
              break;
              
            default: cout << "The number does not have 2 decimal points.\n"; 
        } 
        break;
        
       default: cout << "Give other number.\n"; 
    }
    
    
    return 0;
}
