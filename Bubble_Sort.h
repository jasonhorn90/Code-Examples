#ifndef Bubble_Sort_H
#define Bubble_Sort_H
#include <vector>

using namespace std;

class Bubble_Sort {

public:

	Bubble_Sort();
	~Bubble_Sort();

	void setA(int _a);
	void setTemp(int _temp);
	void setIsSwapped(bool _isSwapped);
	int getA() const;
	int getTemp() const;
	bool getIsSwapped() const;
	void setRandom(int _userInp);
	vector<int> getBubbleArr() const;
	void setBubbleArr(vector<int> _bubbleArr);
	void swap();

private:

	int A;	
	int temp;
	vector<int> bubbleArr;
	bool isSwapped;
};

inline int Bubble_Sort::getA() const
{
	return A;
}

inline int Bubble_Sort::getTemp() const
{
	return temp;
}

inline bool Bubble_Sort::getIsSwapped() const
{

	return isSwapped;
}

inline vector<int> Bubble_Sort::getBubbleArr() const
{
	return bubbleArr;
}


#endif // !Bubble_Sort_H


