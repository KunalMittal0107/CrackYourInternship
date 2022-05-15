#include<iostream>
#include<vector>
#include<algorithm>
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
// Time COmpexity:=O(nlogn)
// Space Complexity= O(1)
//1. Sort the array .
//2. then compare the adjacent numbers.


// Approach 2:
// Using set


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//      unordered_set<int>ans;
//         for(auto &num:nums){
//             if(ans.count(num)){
//                 return num;
//             }
//             ans.insert(num);
//         }
//         return 0;
//     }
// };