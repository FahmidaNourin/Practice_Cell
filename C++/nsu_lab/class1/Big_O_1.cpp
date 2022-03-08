#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){

int n; //-O(1)
int sum=0;//-O(1)
cin>>n;//-O(1)
for(int i=1; i<=n;i++){//-O(n)
    sum=sum+i; //O(1)
    cout << "The executed Line number: "<<i<<endl;//-O(1)
}
cout<<"The Sum= "<<sum;//-O(1)

}
