#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> elemenet_occuring(vector<int> &Arr, int n){
    
    map<int,int>m;
    int flag = 0;
    vector<int>vec;
    for(auto &val : Arr){
        m[val] += 1;
    }
    for(auto &val : m){
        if(val.second > n/3){
            vec.push_back(val.first);
            flag = 1;
        }
    }
    if(flag==1){
        return vec;
    }
    else{
        vec.push_back(-1);
    }
    return vec;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> var = elemenet_occuring(arr,n);
    for(auto &val : var){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}