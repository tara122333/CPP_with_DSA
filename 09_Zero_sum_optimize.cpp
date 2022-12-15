// Given an array A[] find if there is subarray with 0 sum
// A[] = [3,-2,1,-4,2,7,6]
// output  true

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSumZero(vector<int>&Arr,int n){
    int sum = 0;
    set<int>s;
    for(int i=0;i<n;i++){
        sum+=Arr[i];
        if(sum!=0){
            s.insert(sum);
        }
    }
    if(s.size()!=n){
        return true;
    }
    return false;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool var = isSumZero(arr,n);

    cout<<var<<endl;

    return 0;
}