#include <iostream>
#include <cmath>

using namespace std;

class polygon{
	public:
		int sides;
		double *lengths;
		
		polygon (int x=0);
		~polygon();
		
		void set_lengths (int x)
		{
        	sides = x;
  			lengths = new double[sides]; 
    		cout << "Polygon with " << sides << " sides created" << endl;
    	}
		
		
		void change(int index, double new_length)
		{
        	*(lengths + index) = new_length; // lengths[index]
    	}
		
		double perimeter()
		{
        double perimeter = 0.0;
        for (int i = 0; i < sides; i++) {
            perimeter = perimeter + lengths[i];
        }
        return perimeter;
    }
};

polygon::polygon(int x)
{
	sides = x;
    lengths = new double[sides]; 
    cout << "Polygon with " << sides << " sides created" << endl;
}

polygon::~polygon()
{
        delete[] lengths; 
        cout << "Polygon destroyed" << endl;
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
    
    int newindex;
    double newLength;
    cout << "Which side do you want to change (1 to " << Sides << ")? ";
    cin >> newindex;
    cout << "Enter the new length for side " << newindex << ": ";
    cin >> newLength;
    
    p.change(newindex - 1, newLength);
    
	double Perimeter = p.perimeter();
    cout << "The perimeter of the polygon is: " << Perimeter << endl;
	
	return 0;
}



