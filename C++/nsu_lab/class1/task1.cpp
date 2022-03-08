#include<iostream>
using namespace std;

int main(){
    int x=227;
  cout << "Value of x = " << x << endl;
  cout << "address of x = " << &x << endl;
  cout << endl;
  int* pointer = &x;
  cout << "Pointer : " << endl;
    cout << "value of pointer = " << pointer << endl;
    cout << "address of pointer = " << &pointer << endl;
    cout << "value pointed by pointer = " << *pointer << endl;
    cout << endl;
  cout << "Pointer 2: " << endl;
    int** pointer2 = &pointer;
    cout << "value of pointer2 = " << pointer2 <<endl;
    cout << "address of pointer2 = " << &pointer2 << endl;
    cout << "value pointed by pointer2 = " << *pointer2 << endl;
    cout << "value pointed by *pointer2 = " << **pointer2 << endl;

}
