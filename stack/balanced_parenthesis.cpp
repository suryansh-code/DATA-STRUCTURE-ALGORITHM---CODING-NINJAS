#include <stack>
#include<iostream>
using namespace std;
#include<string>

bool isBalanced(string exp) 
{
    
    stack <char> s;
    for (int i = 0; exp[i] != '\0'; i++) {
      if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        s.push(exp[i]);
      if (s.empty() && (exp[i] == ']' || exp[i] == ')' || exp[i] == '}'))
        return false;

      if (exp[i] == ']') {
        if (s.top() == '[')
          s.pop();
        else
          return false;
      }

      if (exp[i] == ')') {
        if (s.top() == '(')
          s.pop();
        else
          return false;
      }

      if (exp[i] == '}') {
        if (s.top() == '{')
          s.pop();
        else
          return false;
      }
    }
    if (s.empty())
      return true;
    else
      return false;
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}