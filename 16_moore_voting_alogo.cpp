#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moore_voting_algo(vector<int> &Arr, int n){
    
    int first = INT_MIN, second = INT_MIN, count1=0, count2=0, flag=0;

    for(auto &val : Arr){
        if(val==first){
            count1++;
        }
        else if(val==second){
            count2++;
        }
        else if(count1==0){
            count1++;
            first = val;
        }
        else if(count2==0){
            count2++;
            second = val;
        }
        else{
            count1--;
            count2--;
        }
    }

    count1=0;
    count2=0;
    for(auto &val : Arr){
        if(val==first){
            count1++;
        }
        else if(val==second){
            count2++;
        }
    }
    if(count1>n/3){
        cout<<first<<endl;
        flag = 1;
    }
    if(count2>n/3){
        cout<<second<<endl;
        flag = 1;
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moore_voting_algo(arr,n);

    return 0;
}