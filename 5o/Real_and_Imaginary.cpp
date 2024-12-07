#include <iostream>
#include <cmath>

using namespace std;

struct num
{
	float real;
	float im;
};

void give (num *x);
void calc (num *x, num *y);

int main()
{
	int i;
	num p1[2];
	
	for (i=0;i<2;i++)
	{
		give(&p1[i]);
	}
	
	calc(&p1[0],&p1[1]);
	
	return 0;
}

void give (num *x)
{
	cout << "Give real part: ";
	cin >> (*x).real;
	cout << "Give imaginary part: ";
	cin >> (*x).im;
}

void calc (num *x, num *y)
{
	float complex_real_1, complex_im_1;
	complex_real_1 = (*x).real + (*y).real;
	complex_im_1 = (*x).im + (*y).im;
	cout << "The addition of the real part is: " << complex_real_1 << " and the imaginary part is: " << complex_im_1 << endl;
	
	float complex_real_2, complex_im_2;
	complex_real_2 = (*x).real - (*y).real;
	complex_im_2 = (*x).im - (*y).im;
	cout << "The subtraction of the real part is: " << complex_real_2 << " and the imaginary part is: " << complex_im_2 << endl;
}

