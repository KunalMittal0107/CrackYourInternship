#include<bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=0;
        int j=1;
        int ans=0;
        while(j<n){
            if(prices[i]<prices[j]){
                ans=max(ans,prices[j]-prices[i]);
            }else{
                i=j;
            }
                j++;
            
        }
        return ans;
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
        cout<<maxProfit(nums); 
    }
