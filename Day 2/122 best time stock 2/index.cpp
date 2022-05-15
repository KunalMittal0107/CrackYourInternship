// same as part 1

#include<bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int ans=0;
     for(int i=1;i<n;i++){
         ans+=max(0,prices[i]-prices[i-1]);
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
    vector<int>ans;
     for(int i=0;i<n;i++){
        ans.push_back(arr[i]);
    }
    cout<<maxProfit(ans);
}