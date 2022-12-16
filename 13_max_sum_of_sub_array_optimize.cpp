#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_sum_of_sub_array(vector<int> &Arr, int n){
    int sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=Arr[i];
        if(max_sum<sum){
            max_sum = sum;
        }
        if(sum<0){
            sum = 0;
        } 
    }
    return max_sum;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int var = max_sum_of_sub_array(arr,n);

    cout<<var<<endl;
    return 0;
}