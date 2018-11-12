#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>

using namespace std;

int main() {

	int intArray[] = { 5,6,8,3,40,36,98,29,75 };
	vector<int> vecList(9);

	ostream_iterator<int> screen(cout, " ");

	cout << "Line 11: intArray: ";
	copy(intArray, intArray + 9, screen);
	cout << endl;

	copy(intArray, intArray + 9, vecList.begin);

	cout << "Line 15: vecList: ";
	copy(vecList.begin(), vecList.end(), screen);
	cout << endl;

	copy(intArray + 1, intArray + 9, intArray);

	copy(intArray, intArray + 9, screen);
	cout << endl;

	copy(vecList.rbegin() + 2, vecList.rend(), vecList.rbegin());

	copy(vecList.begin(), vecList.end(), screen);
	cout << endl;
	
	deque<int> intDeq;
	ostream_iterator<int> screen(cout, " ");

	intDeq.push_back(13);
	intDeq.push_back(75);
	intDeq.push_back(28);
	intDeq.push_back(35);
	copy(intDeq.begin(), intDeq.end(), screen);
	cout << endl;

	intDeq.push_front(0);
	intDeq.push_back(100);

	copy(intDeq.begin(), intDeq.end(), screen);
	cout << endl;

	intDeq.pop_front();
	intDeq.pop_front();

	copy(intDeq.begin(), intDeq.end(), screen);
	cout << endl;

	intDeq.pop_back();
	intDeq.pop_back();

	copy(intDeq.begin(), intDeq.end(), screen);
	cout << endl;

	deque<int>::iterator deqIt;

	deqIt = intDeq.begin();
	++deqIt;
	intDeq.insert(deqIt, 444);
	copy(intDeq.begin(), intDeq.end(), screen);
	cout << endl;

	vector<int>::iterator intVecIter;
	
	vector<int>::const_iterator intConstVecIt;

	istream_iterator<int> isIdentifier(istream&);

	ostream_iterator<int> osIdentifier(ostream&);

	ostream_iterator<int> osIdnetifier(ostream&, char* deLimit);




}
