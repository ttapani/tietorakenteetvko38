#include <stack>
#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    stack<int> integers;

    cout << "Type in integers of increasing size" << endl;
    cout << "Input terminates if the integer doesn't exceed its predecessor" << endl;

    cin >> input;
    integers.push(input);

    do
    {
        cin >> input;
        if(input > integers.top())
        {
            integers.push(input);
        }
        else
        {
            while(!integers.empty())
            {
                cout << integers.top();
                integers.pop();
            }
            cout << endl;
            break;
        }
    }while(true);

}