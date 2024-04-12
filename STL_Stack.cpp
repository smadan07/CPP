#include <iostream> //Header File
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Start of the main function
    stack<int> my_stack;
    my_stack.push(10);
    my_stack.push(15);
    my_stack.push(5);
    my_stack.push(20);
    while (!my_stack.empty())
    {
        cout << my_stack.top() << endl;
        my_stack.pop();
    }
}
