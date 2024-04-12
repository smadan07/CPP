#include <iostream>
#include <map>
using namespace std;

// Map is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["Vasu"] = 99.69;
    marksMap["Harry"] = 89.69;
    marksMap["Rohan"] = 69.69;

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}
