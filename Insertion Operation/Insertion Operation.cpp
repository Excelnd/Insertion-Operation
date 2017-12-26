// Insertion Operation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int LA[10] = { 1,3,4,7,8 };
	int item = 10, k = 3, n = 4;
	int i = 0, j = n;

	cout << "The original array elements are : " << endl;

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	n = n + 1;
	
	while (j >= k) 
	{
		LA[j + 1] = LA[j];
		j = j - 1;
	}

	LA[k] = item;
	cout << "The array elements after insertion : " << endl;

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}


    return 0;
}

