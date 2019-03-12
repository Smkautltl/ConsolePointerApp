// ConsolePointerApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int Val = 1;
int Val2 = 2;
int* ValPtr = &Val;
int& ValRef = Val;

void PrintVals()
{
	std::cout << "Values:" << std::endl;
	std::cout << "Val:" << Val << " Val2:" << Val2 << " ValPointer:" << *ValPtr << " ValRef:" << ValRef << std::endl;
	std::cout << std::endl;
	std::cout << "Addresses:" << std::endl;
	std::cout << "Val:" << &Val << " Val2:" << &Val2 << " ValPointer:" << ValPtr << " ValRef:" << &ValRef << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

}

int main()
{
	PrintVals();
	ValPtr = &Val2;
	PrintVals();
	*ValPtr = 3;
	PrintVals();
	ValRef = 4;
	PrintVals();

    return 0;
}

