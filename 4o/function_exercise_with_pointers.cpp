#include <iostream>
#include <cmath>
using namespace std;

int sub_1 (int *x);
int add (int *x);
int sub_2 (int *x);
int multi (int *x);
double div (int *x);
double sum (void);

int main ()
{	
	sum ();	
	return 0;
}

int sub_1 (int *x)
{	
	return *x - 1; // for faster calculations
}

int add (int *x)
{
	return *x + 3;
}

int sub_2 (int *x)
{
	return *x - 5;
}

int multi (int *x)
{
	int a = sub_1(x);
	int b = add(x);
	return a * b;
}

double div (int *x)
{
	int a = multi(x);
	int b = sub_2(x);
	return (double)a / b;
}

double sum (void)
{
	double ADD=0.0, sum_total=0.0;
	int x=6;
	
	while (1)
	{
		ADD = div(&x); // result of div is variable and div (*(&x)) which is variable.
		sum_total += ADD;
		if (sum_total > 500)
		{
			break;
		} 
		cout << "For i = " << x <<", sum is "<< sum_total << endl;
		x++;
	}
	
	cout <<  "For i = " << x <<", sum is "<< sum_total << " ,bigger that 500 so it's rejected." <<endl;
	
	return sum_total;
}				


