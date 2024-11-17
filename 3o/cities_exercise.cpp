#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int arr[6][6] = {
		{0, 501, 217, 354, 703, 328},
		{501, 0, 467, 152, 205, 208},
		{217, 467, 0, 337, 670, 314},
		{354, 152, 337, 0, 354, 64},
		{703, 205, 670, 354, 0, 411},
		{328, 208, 314, 34, 411, 0}
	}; // The order of the cities' names are: Athens Thessaloniki, Patra, Larissa, Xanthi, Volos.
	
	cout << "Press 0 for Athens" << endl;
	cout << "Press 1 for Thessaloniki" << endl;
	cout << "Press 2 for Patra" << endl; 
	cout << "Press 3 for Larissa" << endl;
	cout << "Press 4 for Xanthi" << endl;
	cout << "Press 5 for Volos" << endl;
	
	int city1, city2;
	cout << "Enter the number for the first city: ";
	cin >> city1;
	cout << "Enter the number for the second city: ";
	cin >> city2;

	cout << "The distance between city " << city1 << " and city " << city2 << " is " << arr[city1][city2] << endl;
	
	// 
	
	int i, sum=0;
	int city;
	float average;
	
	cout << "Enter the number of the city (0 to 5)" << endl;
	cin >> city;
	
	for (i=0; i<6; i++)
	{
		sum+=arr[city][i]; // sum+= == sum = sum + value 
	}
	average = (float)sum/5;
	cout << "The average is : " << average << endl;
	
	//
	
	int j, w, sum_2=0;
	float average_2;
	
	for (w=0; w<6; w++)
	{
	for (j=0; j<6; j++)
	{
		sum_2+=arr[w][j];
	}
	average_2 = (float)sum_2/5;
	cout << "The average distance from city " << w << " to the other cities is " << average_2 << endl;
	average_2 = 0;
	sum_2 = 0;
    }
    
    //
    
    float distance;
    cout << "Give distance (in kilometers): " << endl;
    cin >> distance; 
    
  	int z, x;
	
	for (z=0; z<6; z++)
	{
	for (x=0; x<=z; x++)
	{
		if (distance < arr[z][x])
		{
			cout << "The distances bigger than that are: " << arr[z][x] << " ,which is equal to row: " << z+1 << " and column: " << x+1 << endl; 
		}
	}
   	}
    
		
	return 0;
}
