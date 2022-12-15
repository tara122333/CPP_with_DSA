#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int f){
    int fab = 1;
    for(int i=1;i<=f;i++){
        fab = fab * i;
    }
    return fab;
}

int trailing_zeroes(int n){
    int number = factorial(n);
    int counter = 0;
    while(number%10 == 0){
            counter++;
        number = number/10;
    }
    return counter;
}

int main()
   {
    int n;
    cin>>n;
    cout<<trailing_zeroes(n)<<endl;
    return 0;
}