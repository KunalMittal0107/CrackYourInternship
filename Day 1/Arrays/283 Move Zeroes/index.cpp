// used simple two pointer approach 
// take i and j and place i intialize at 0 and j at 1
// then if i==0
// swap(i,j) and move both ++
// else if i!=0 move both else move j

#include<bits/stdc++.h>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
int i=0;
       int j=1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }else{
                if(nums[i]!=0){
                    i++;
                    j++;
                }else
                j++;
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
   vector<int>nums;
   for(int i=0;i<n;i++){
       nums.push_back(arr[i]);
   }
    moveZeroes( nums);
     for(int i=0;i<n;i++){
       cout<<nums[i]<<" ";
   }
}

