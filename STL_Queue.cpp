#include <iostream> //Header File
#include <bits/stdc++.h> // Contains all the standard libraries
using namespace std;
int main()
{ 
    // Start of the main function

    queue<int> my_queue;
    my_queue.push(10);
    my_queue.push(15);
    my_queue.push(5);
    my_queue.push(20);
    while (!my_queue.empty())
    {
        cout << my_queue.front() << endl;
        my_queue.pop();
    }
}