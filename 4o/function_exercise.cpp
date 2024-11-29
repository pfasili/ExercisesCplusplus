#include <iostream>
#include <cmath>
using namespace std;

int sub_1 (int x);
int add (int x);
int sub_2 (int x);
int multi (int x);
double div (int x);
double sum (void);

int main ()
{	
	sum ();	
	return 0;
}

int sub_1 (int x)
{
	int x_new;
	x_new = x - 1;
	return x_new;
}

int add (int x)
{
	int x_new;
	x_new = x + 3;
	return x_new;
}

int sub_2 (int x)
{
	int x_new;
	x_new = x - 5;
	return x_new;
}

int multi (int x)
{
	int multi_new;
	multi_new = (sub_1 (x)) * (add(x));
	return multi_new;
}

double div (int x)
{
	double div_new;
	div_new = (double)(multi (x)) / (double)(sub_2 (x));
	return div_new;
}

double sum (void)
{
	double ADD=0, sum_total=0;
	int x=6;
	
	while (1)
	{
		ADD = div(x);
		sum_total += ADD;
		if (sum_total > 500)
		{ 
			break;
		}
		cout << "For i = " << x <<", sum is "<< sum_total << endl;
		x++;
		
	}
	
	cout <<  "For i = " << x <<", sum is "<< sum_total << ", bigger that 500 so it's rejected." <<endl;
	
	return sum_total;
}				


