#include <iostream>
#include <stack>
using namespace std;
#include "solution.h"
int main() {
    stack<int> input, extra;
    int size;
    cin >> size;
    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }
    reverseStack(input, extra);
    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}
*/

void reverseStack(stack<int> &input, stack<int> &extra)
{
    // Write your code here
    while (!input.empty())
    {
        int n = input.top();
        extra.push(n);
        input.pop();
    }
    input = extra;
}