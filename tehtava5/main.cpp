#include "Extended_stack.h"

using namespace std;


int main()
{
    Extended_stack numbers;
    numbers.push(1.5f);
	numbers.push(2.0f);
	cout << "Numbers in stack "  << numbers.size() << endl;
	cout << "Is stack full? " << numbers.full() << endl;
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
	numbers.push(2.0f);
    cout << "Numbers in stack " << numbers.size() << endl;
	cout << "Is stack full? " << numbers.full() << endl;
	numbers.clear();
	cout << "Numbers in stack " << numbers.size() << endl;
	cout << "Is stack full? " << numbers.full() << endl;
    return 0;
}