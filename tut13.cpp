#include <iostream>
using namespace std;

int main()
{
    // Array Example

    int marks[] = {100, 25, 33, 40};
    // Or
    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 58;
    mathMarks[2] = 38;
    mathMarks[3] = 45;

    cout << "\nThese are Math Marks\n"
         << endl;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "\nThese are Overall Marks\n"
         << endl;

    cout << marks[0] << endl;
    // We can change the value of an array
    marks[1] = 90;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of Marks " << i << " is : " << marks[i] << endl;
    }

    // Quick Quiz : do the same using while and do-while loops

    // int i = 0;          <=====/ Here using while loop
    // while (i < 4)
    // {
    //     cout << "The value of Marks " << i << " is : " << marks[i] << endl;
    //     i++;
    // }

    // int i = 0;          <=====/ Here using do-while loop
    // do
    // {
    //     cout << "The value of Marks " << i << " is : " << marks[i] << endl;
    //     i++;
    // } while (i < 4);
    cout << "\n";
    // Pointers and arrays
    int *p = marks;
    cout << *(p++) << endl;
    cout << *p << endl;

    // cout << "The value of marks[0] is : " << *p << endl;
    // cout << "The value of marks[0] is : " << *(p + 1) << endl;
    // cout << "The value of marks[0] is : " << *(p + 2) << endl;
    // cout << "The value of marks[0] is : " << *(p + 3) << endl;

    return 0;
}