#include <iostream>
#include <cmath>

using namespace std;

class polygon{
	public:
		int sides;
		double *lengths;
		
		polygon ();
		~polygon();
		
		void set_lengths (int a)
		{
        	sides = a;
  			lengths = new double[a]; 
    	}
		
		
		void change(int i, double new_length)
		{
        	*(lengths + i) = new_length; 
    	}
		
		double perimeter()
		{
        double perimeter = 0;
        int i = 0;
        for (i = 0; i < sides; i++) {
            perimeter = perimeter + *(lengths + i);
        }
        return perimeter;
    }
};

polygon::polygon()
{
	sides = 0;
    lengths = NULL;
}

polygon::~polygon()
{
        delete[] lengths; 
}

int main()
{
	polygon p;
	
	int Sides;
    cout << "Enter the number of sides for the polygon: ";
    cin >> Sides;
    
    p.set_lengths(Sides);
    
    for (int i = 0; i < Sides; i++) {
        double length;
        cout << "Enter length for side " << i + 1 << ": ";
        cin >> length;
        p.change(i, length);
    }
    
	double Perimeter = p.perimeter();
    cout << "The perimeter of the polygon is: " << Perimeter << endl;
	
	return 0;
}




