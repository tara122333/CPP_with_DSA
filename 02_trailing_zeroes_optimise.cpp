#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
   {
    int n;
    cin>>n;

    int counter=0,q=0;

    while(n>0){
        q = n/5;
        counter+=q;
        n/=5;
    }
    cout<<counter<<endl;
    return 0;
}