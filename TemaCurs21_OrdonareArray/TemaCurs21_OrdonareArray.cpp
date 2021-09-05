// TemaCurs21_OrdonareArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include <algorithm>

//Scrieti un program in C++ pentru a gasi cele mai mari 3 elemente dintr - un array
//+ Bonus: same as above dar pentru cele mai mici



int main()
{
	int array[]{ 1,82,50,41,62,75 };
	int size = sizeof(array) / sizeof(array[0]);
	std::sort(array, array + size);
	elementeMari(array, size);
	std::cout << "Arata-mi cele mai mari 3 numere din Array: " << array[5] << ", " << array[4] << ", " << array[3] << std::endl;
	std::cout << "Arata-mi cele mai mici 3 numere din Array: " << array[0] << ", " << array[1] << ", " << array[2] <<std::endl;
	
}


