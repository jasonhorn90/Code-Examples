#include "Remove_Duplicates.h"
#include <iostream>
#include <sstream>

using namespace std;

Remove_Duplicates::Remove_Duplicates()
{
	string userInput;
	char inpChar;
	
	cout << "Please enter a string of characters" << endl << endl;	

	getline(cin, userInput);

	cout << endl << endl;
	
	istringstream stream(userInput);
	while (stream >> inpChar)
	{
		s.push_back(inpChar);
	}

	remove(s);	

}
Remove_Duplicates::~Remove_Duplicates()
{

}

void Remove_Duplicates::setS(vector<char> _s)
{
	s = _s;
}

void Remove_Duplicates::setLen(int _len)
{
	len = _len;
}
void Remove_Duplicates::remove(vector<char> _s)
{
	
	int i, j;
	int last;
	vector<char>::iterator it;

	last = 1;
	it = _s.begin();
	
	setLen(_s.size());  
	

	for( i = 1; i < len; i++)
	{
		for( j = 0; j < last; j++)
		{
			if(_s[i] == _s[j])
			{
				break;
				it++;
			}
		}

		if(last == j)
		{
			_s[last++] = _s[i];	
			it++;
		}	
	}
	_s[last] = '\0';
	_s[last++];
	it++;
	while (it != _s.end() -1)
	{
		if(_s[last] != '\0')
		{
			_s[last] = '\0';			
			_s[last++];
			it++;
		}	
		
	}

	display(_s);
}

void Remove_Duplicates::display(vector<char> _s)
{	
	cout << "Duplicates removed: " << endl << endl;
	
	for (int i = 0; i < _s.size(); i++)
	{
		cout << _s[i];
	}
	cout << endl << endl;
}