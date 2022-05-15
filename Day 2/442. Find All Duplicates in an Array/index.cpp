#include<bits/stdc++.h>
using namespace std;


    vector<int> findDuplicates(vector<int>& nums) {
 sort(nums.begin(),nums.end());
        vector<int>vec;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
    // O(n)
     // unordered_map<int,int>mp;
     //    for(int i=0;i<nums.size();i++){
     //        mp[nums[i]]++;
     //    }
     //    vector<int>vec;
     // for(auto it:mp){
     //     if(it.second==2){
     //         vec.push_back(it.first);
     //     }
     // }
     //    return vec;


int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
     for(int i=0;i<n;i++){
        ans.push_back(arr[i]);
    }

    vector<int> nums=findDuplicates(ans);
  for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}