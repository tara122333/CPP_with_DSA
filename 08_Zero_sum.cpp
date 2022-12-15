// Given an array A[] find if there is subarray with 0 sum
// A[] = [3,-2,1,-4,2,7,6]
// output  true

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSumZero(vector<int>&Arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=Arr[j];
            // cout<<Arr[j]<<" ";
            if(sum == 0){
                return true;
            }
        }
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