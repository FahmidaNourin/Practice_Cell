#include<iostream>
using namespace std;
int main()
{
//string sentance;

//cin >> sentance;
string str = "geeksforgeeks a computer science";
    string str1 = " ";

    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;

    // Find next occurrence of "geeks". Note here we pass
    // "geeks" as C style string.
    char arr[] = "geeks";
    found = str.find(arr, found+1);
    if (found != string::npos)
        cout << "Next occurrence is " << found << endl;

    return 0;

}

