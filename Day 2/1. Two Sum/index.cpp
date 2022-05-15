// the intitution behind this is very easy
// create a map
// then we transversing in all map
// to find target-nums[i] all
#include<bits/stdc++.h>
using namespace std;

   vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            //if complement is found return indices
            if(mp.find(target-nums[i]) != mp.end()){
                return {
                    mp[target-nums[i]],i
                    };
            }
            mp[nums[i]] = i;
        }
        return {};
    }
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums;
    for(int i=0;i<n;i++){
        nums.push_back(arr[i]);
    }
    vector<int>ans=twoSum(nums,target);
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
 
