// Given an array A[] find if there is subarray with 0 sum
// A[] = [3,-2,1,-4,2,7,6]
// output  true

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int equilibriumIndex(vector<int>&Arr,int n){
    int left_sum = 0;
    int right_sum = 0;
    for(int i=0;i<n-2;i++){
        left_sum += Arr[i];
        right_sum = 0;
        for(int j=n-1;j>i+1;j--){
            right_sum += Arr[j];
        }
        // cout<<left_sum<<" "<<right_sum<<endl;
        if(left_sum == right_sum){
            return i+1;
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
    int var = equilibriumIndex(arr,n);

    cout<<var<<endl;

    return 0;
}