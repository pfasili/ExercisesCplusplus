#include <iostream>
#include <cmath>

using namespace std;

#define SIZE_1 5
#define SIZE_2 5

//1D Matrix

int main()
{
	int arr_1[SIZE_1];
	int arr_2[SIZE_2];
	int i, j, z;
	int Result[SIZE_1];

	
	cout << "Enter " << SIZE_1 << " elements for the arr_1" << endl;
	for (i=0; i<SIZE_1; i++)
	{
		cout << "Element " << i << ": ";
		cin >> arr_1[i];
	}
	
	cout << "Enter " << SIZE_2 << " elements for the arr_2" << endl;
	for (j=0; j<SIZE_2; j++)
	{
		cout << "Element " << j << ": ";
		cin >> arr_2[j];
	}
	
	for (z=0; z<SIZE_1; z++)
	{
		Result[z] = arr_1[z] + arr_2[z];
		cout << "The result of the arrays addition is: " << Result[z] << endl;
	}	
	
//2D Matrix	
	
	int rows, col, a, b, c, d, e, f;
		
	cout << "Give the number of rows" << endl;
	cin >> rows;
	
	cout << "Give the number of columns" << endl;
	cin >> col;
	
	int arr_3 [rows][col];
	
	cout << "Enter " << rows*col << " elements for the arr_3" << endl;
	for (a=0; a<rows; a++)
	{
		for (b=0; b<col; b++)
		{
		cout << "Give element for row " << a << " and  column " << b << endl;
		cin >> arr_3[a][b];
		}
	}
	
	// arrays have to have the same dimensions
	
	int arr_4 [rows][col];
	
	cout << "Enter " << rows*col << " elements for the arr_4" << endl;
	for (c=0; c<rows; c++)
	{
		for (d=0; d<col; d++)
		{
		cout << "Give element for row " << c << " and  column " << d << endl;
		cin >> arr_4[c][d];
		}
	}
	
	int NewResult [rows][col];
	
	for (e=0; e<(rows); e++)
	{
		for (f=0; f<(col); f++)
		{
		NewResult[e][f] = arr_3[e][f] + arr_4[e][f];
		cout << "The result of the arrays addition is: " << NewResult[e][f] << endl;
		}
	}	
	
	return 0;
}
