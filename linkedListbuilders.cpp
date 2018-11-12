#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>

using namespace std;

struct nodeType
{
	int info;
	nodeType *link;
};

nodeType* buildListForward()
{
	nodeType *first, *newNode, *last;
	int num;

	cout << "Enter a list of integers ending with -999,"
		<< endl;

	cin >> num;
	first = NULL;

	while (num != -999)
	{
		newNode = new nodeType;
		newNode->info = num;
		newNode->link = NULL;

		if (first == NULL)
		{
			first = newNode;
			last = newNode;

		}
		else
		{
			last->link = newNode;
			last = newNode;
		}
		cin >> num;
	}
}

nodeType* buildListBackward()
{
	nodeType *first, *newNode;
	int num;

	cout << "ENter a list of integers ending with -999,"
		<< endl;
	cin >> num;
	first = NULL;

	while (num != -999)
	{
		newNode = new nodeType;
		newNode->info = num;
		newNode->link = first;

		first = newNode;

		cin >> num;
	}

	return first;
}

int main() {

	nodeType *head;
	nodeType *current;
	nodeType *newNode;
	nodeType *p;

	current = head;

	while (current != NULL)
	{
		cout << current->info << " ";
		current = current->link;
	}

	newNode = new nodeType;
	newNode->info = 50;
	newNode->link = p->link;
	p->link = newNode;
	



	return 0;
}
