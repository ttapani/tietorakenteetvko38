#include <stack>
#include <iostream>

using namespace std;

int main()
/*
Pre:   The user supplies an integer n and n decimal numbers.
Post:  The numbers are printed in reverse order.
Uses:  The STL class stack and its methods
*/

{
   char s[16];
   stack<char> chars;  //  declares and initializes a stack of numbers

   cout << " Type in text." << endl
        << " The text will be printed in reverse order." << endl;
   cin  >> s;

   for (int i = 0; i <16; i++) {
      chars.push(s[i]);
   }

   cout << endl << endl;
   while (!chars.empty()) {
      cout << chars.top();
      chars.pop();
   }
   cout << endl;
}