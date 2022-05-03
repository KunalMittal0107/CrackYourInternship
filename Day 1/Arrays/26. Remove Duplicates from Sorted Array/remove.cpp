// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int j = 0;
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] != nums[j]) {
//                 j++;
//                 nums[j] = nums[i];
//             }
//         }
//         return j+1;
//     }
// };



// approach2
// int removeDuplicates(vector<int>& nums){
// 	nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
// 	return nums.size() ;
// }