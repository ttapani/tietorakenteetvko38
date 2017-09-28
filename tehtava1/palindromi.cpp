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
   char s[256];
   stack<char> chars;  //  declares and initializes a stack of chars

   cout << " Type in text." << endl
        << " The text will be checked for being a palindrome" << endl;
   cin  >> s;

   int i = 0;
   while(s[i] != '\0')
   {
      chars.push(s[i]);
      i++;
   }

   cout << endl << endl;
   
   i = 0;
   while (!chars.empty()) {
      if(chars.top() != s[i])
      {
         cout << "Error - input is not a palindrome!" << endl;
         return 0;
      }
      else
      {
         
         chars.pop();
         i++;
         continue;
      }
   }
   cout << "Your input is a palindrome!" << endl;
}