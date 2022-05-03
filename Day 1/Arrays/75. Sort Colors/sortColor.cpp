#include<bits/stdc++.h>
using namespace std;
  void sortColors(vector<int>& nums) {
  int start=0;
        int mid=0;
        int end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[start];
                nums[start]=temp;
                mid++;
                start++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int temp=nums[end];
                nums[end]=nums[mid];
                nums[mid]=temp;
                end--;
            }
        }
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
 
   sortColors(nums);
     for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
// Time COmpexity:=O(nlogn)
// Space Complexity= O(1)



