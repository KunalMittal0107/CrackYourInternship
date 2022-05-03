#include<bits/stdc++.h>
using namespace std;
   int findDuplicate(vector<int>& nums) {
    int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return 0;
    }
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nums;
    for(int i=0;i<n;i++){
        nums.push_back(arr[i]);
    }
 
    cout<<findDuplicate(nums);
}