#include <stack>
#include <iostream>

using namespace std;

int main()
{
    char text[256];
    stack<char> chars;

    cout << "Type a line of text, which will be reversed" << endl;
    cin >> text;

    int i = 0;
    while(text[i] != '\0')
    {
        chars.push(text[i]);
        i++;
    }

    cout << endl << endl;

    while(!chars.empty()) 
    {
        cout << chars.top();
        chars.pop();
    }
    cout << endl;
}