#include <iostream>
#include <cmath>
using namespace std;

class circle{
	private:
		double radius;
		
	public:
		void set_aktina(double r)
		{}
		
		double give_embadon(double radius)
		{
			double embadon;
			embadon = M_PI*radius*radius;
			return embadon;
		}
};

int main()
{	
	circle c1;
	double r;
	
	cout << "Give radius: ";
	cin >> r;
	
	c1.set_aktina(r);
	
	c1.give_embadon(r);
	
	cout << "Embadon is: " << c1.give_embadon(r);
	
	return 0;
}
