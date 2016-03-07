#ifndef Remove_Duplicates_H
#define Remove_Duplicates_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Remove_Duplicates
{
	public:
		Remove_Duplicates();
		~Remove_Duplicates();
		vector<char> getS() const;
		void setS(vector<char> _s);		
		int getLen() const;
		void setLen(int _len);		
		void remove(vector<char> _s);
		void display(vector<char> _s);

	private:

		vector<char> s;		
		int len;
	
};

inline vector<char> Remove_Duplicates::getS() const
{
	return s;
}
inline int Remove_Duplicates::getLen() const
{
	return len;
}
#endif