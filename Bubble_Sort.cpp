#include "Bubble_Sort.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

Bubble_Sort::Bubble_Sort()
{
	int i = 0;
	
	cout << "Please enter a positive integer: (How many numbers would you like to sort?) " << endl;
	
	while(!(cin >> temp))
	{
		cout << "Incorrect value.";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cout << '\n' << endl; 
	setA(temp);
	setRandom(temp);
	swap();
	setTemp(bubbleArr.size());

	while(temp != 0)
	{
		cout << bubbleArr[i] << endl;
		i++;
		setTemp(temp - 1);
	}
	
}

Bubble_Sort::~Bubble_Sort()
{
	
}

void Bubble_Sort::setA(int _a)
{
	A = _a;
}

void Bubble_Sort::setTemp(int _temp)
{
	temp = _temp;
}

void Bubble_Sort::setIsSwapped(bool _isSwapped)
{
	isSwapped = _isSwapped;
}

//Swap function iterates through a vector or array
//of integers, and performs a comparison of two consecutive 
//values - if the first value is greater than the second, those
//values are swapped; otherwise the function moves to the next
//position in the array
void Bubble_Sort::swap()
{
	int iter = 0;
	int randNum;	
	setIsSwapped(true);

	cout << "Values sorted:" << endl << endl;

	while (isSwapped)
	{
		setIsSwapped(false);
		iter++; 
		for(int i = 0; i < temp - iter; i++)
		{
			if(bubbleArr[i] > bubbleArr[i + 1])
			{
				randNum = bubbleArr[i];
				bubbleArr[i] = bubbleArr[i + 1];
				bubbleArr[i + 1] = randNum;
				setIsSwapped(true);
			}
		}
	}	
	
}

void Bubble_Sort::setBubbleArr(vector<int> _bubbleArr)
{
	bubbleArr = _bubbleArr;
}

//Function to generate a random set of integers based
//on the amount of integers desired (user input)

void Bubble_Sort::setRandom(int _userInp) 
{	
	
	vector<int> random(_userInp);

	srand(time(0));

	cout << "Values in random order: "<< endl << endl;

	for(int i = 1; i < _userInp; i++)
	{
		random[i] = rand();
		cout << random[i] << endl;
	}

	cout << '\n' << endl;

	setBubbleArr(random);
}