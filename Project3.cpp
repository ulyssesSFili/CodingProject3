#include <iostream>

using namespace std;

int main()
{
	int *firstInt = new int;
	int *secondInt = new int;
	int *thirdInt = new int;

	cout<< "Enter the first integer:" << endl;
	cin >> *firstInt;

	cout<< "Enter the second integer:" << endl;
	cin >> *secondInt;

	cout<< "Enter the third integer:" << endl;
	cin >> *thirdInt;

	cout<< "First integer: " << *firstInt << endl;
	cout<< "First integer address: " << firstInt << endl;

	cout<< "Second integer: " << *secondInt << endl;
	cout<< "Second integer address: " << secondInt << endl;


	cout<< "Third integer: " << *thirdInt << endl;
	cout<< "Third integer address: " << thirdInt << endl;

	delete firstInt;
	delete secondInt;
	delete thirdInt;

return 0;
}
