#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

int main() {
	vector<int> vecList;

	vector<int> vecList(vecList);

	vector<int> vecList(size);

	vector<int> vecList(n, elem);

	vector<int> vecList(begin, end);

	vecList.at(index);

	vecList[index];

	vecList.front();
	vecList.back();

	vector<int> intList(5);

	for (int j = 0; j < 5; j++)
	{
		intList[j] = j;
	}

	vecList.clear();
	vecList.erase(position);
	vecList.erase(beg, end);
	vecList.insert(position, elem);
	vecList.insert(position, n, elem);
	vecList.push_back(elem);
	vecList.pop_back();
	vecList.resize(num);
	vecList.resize(num, elem);

	intVecIter = intList.begin();

	for (intVecIter = intList.begin(); intVecIter != intList.end();
		intVecList)
		cout << *intVecIter << " ";

	int intArray[7] = { 1,3,5,7,9,11,13 };
	vector<int> vecList(intArray, intArray + 7);
	vector<int>::iterator intVecIter;

	intVecIter = vecList.begin();
	++intVecIter;
	vecList.insert(intVecIte, 22);



}
