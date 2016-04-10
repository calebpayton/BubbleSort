/*==============================|
|	Author: Caleb A. Payton		|
|	Bubble sorting algorithm	|
|==============================*/

#include<iostream>
#include<algorithm>
#include<time.h>

using namespace std;



int main()
{
	int array[100];
	
	srand(time(NULL));
	int i;	
	for (i = 0; i < 100; i++) {
		array[i] = (rand()%100) + 1; 
	}//assigns a random integer between 1 and 100 to elements in array
	
	cout << "Unsorted integers:" << endl;
//using a set of for loops to print the array
//each line prints 20 values	
	int x;
	for(x = 0; x < 20; x++)
	{
		cout << array[x] << " ";
	} cout << endl;	
	for(x = 20; x < 40; x++)
	{
		cout << array[x] << " ";
	} cout << endl;
	for(x = 40; x < 60; x++)
	{
		cout << array[x] << " ";
	} cout << endl;
	for(x = 60; x < 80; x++)
	{
		cout << array[x] << " ";
	} cout << endl;
	for(x = 80; x < 100; x++)
	{
		cout << array[x] << " ";
	} cout << endl;
//done printing unsorted array
	
//begin sorting elements in array
/*==============================================================|
|	NOTE: this is technically a bubble sorting algorithm.		|
|	However, it is the same as shell sort if shell sort were	|
|	to only use a gap of 1 (i.e. gap = 1).						|
|==============================================================*/
	bool swapped;
	int j;		
	do
	{
		swapped = false;
		for(j = 1; j < 100; j++)
		{
			if(array[j] < array[j-1])
			{
				swap(array[j-1], array[j]);
				swapped = true;				
			}
		}
	} while(swapped); //end do-while once all elements are swapped
	
	cout << "\n\nSorted integers:" << endl;
//again, using a set of for loops to print array once sorted	
	int y;
	for(y = 0; y < 20; y++)
	{
		cout << array[y] << " ";
	} cout << endl;
	for(y = 20; y < 40; y++)
	{
		cout << array[y] << " ";
	} cout << endl;
	for(y = 40; y < 60; y++)
	{
		cout << array[y] << " ";
	} cout << endl;
	for(y = 60; y < 80; y++)
	{
		cout << array[y] << " ";
	} cout << endl;
	for(y = 80; y < 100; y++)
	{
		cout << array[y] << " ";
	} cout << endl;
//done printing sorted array	
}//end main
