#include <iostream>
#include "SortedList.h"

using namespace std;
int main() {

SortedList<int> list;


while(true){
int input = 0;
cin >> input;
if(input==-1)
break;
list.InsertItem(input);
}

int out = 0;

while(list.GetNextItem(out)){
cout << out << " ";
}

list.DeleteItem(12);

cout<<endl;

list.ResetList();
while(list.GetNextItem(out)){
cout << out << " ";
}

return 0;
}
