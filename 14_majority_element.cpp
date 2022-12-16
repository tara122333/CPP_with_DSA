#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &Arr, int n){
    
    map<int,int>m;
    for(auto &val : Arr){
        m[val] += 1;
    }
    for(auto &val : m){
        if(val.second > n/2){
            return val.first;
            break;
        }
    }
    return -1;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int var = majority_element(arr,n);

    cout<<var<<endl;
    return 0;
}