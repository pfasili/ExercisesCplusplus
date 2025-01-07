#include <iostream> 
#include <cmath> 	
using namespace std;

class syntetagmenes { 
	public:		
	float a, b, c;
	
	public:
	 void me8odos1 (float x) 
	 {
	 	a = x; 
	 } 
		
	void me8odos2 (float y)
	{
		b = y;
	}	
	
	void me8odos3 (float z)
	{
		c = z;
	}	
	
	void me8odos4(float x, float y, float z)
	{
		a = x;
		b = y;
		c = z;
	}
	float epistrofh_x ()
	{
		return a;
	}
	float epistrofh_y ()
	{ 
	   return b;
	}
	float epistrofh_z ()
	{
		return c;
	}
	void epistrofh4 ()
	{
		cout << "(" << a << "," << b << "," << c << ")" << endl;
	}
	
	void metatopish (char axis, float amount)
	{		
		switch (axis)
		{
			case 'x' : 
			a = a + amount;
			cout << " New amount is: " << a << endl;
			break;
			
			case 'y' : 
			b = b + amount;
			cout << " New amount is: " << b << endl;
			break;
			
			case 'z' : 
			c = c + amount;
			cout << " New amount is: " << c << endl;
			break;
		}
	}  
};


int main ()
{
	float x,y,z; 
	
	syntetagmenes s;
	s.me8odos1(1);
	s.me8odos2(2);
	s.me8odos3(3);
	s.me8odos4(1.1,2.2,3.3);
	
    x = s.epistrofh_x();
    y = s.epistrofh_y();
	z = s.epistrofh_z();

	s.epistrofh4();

	s.metatopish('x', 1.1); 
	s.metatopish('y', 1.2);
	s.metatopish('z', 1.3);
	
	
	return 0;
}
