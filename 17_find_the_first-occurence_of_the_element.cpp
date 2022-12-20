#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_occurance_of_the_element(vector<int> &Arr, int n, int find){
    
    for(int i=0; i<n;i++){
        if(Arr[i]==find){
            return i;
            break;
        }
    }
    return -1;
}

int main()
   {
    int n,count=0,element;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>element;
    int var = first_occurance_of_the_element(arr,n,element);
    cout<<var<<endl;

    return 0;
}