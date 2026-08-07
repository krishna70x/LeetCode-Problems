class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       int n=nums.size();
       for(int i=0; i<n; i++) {
        mp[nums[i]]++;
       } 
       int max_count=0;
       int ans_element=-1;
       for(auto x: mp) {
        int element=x.first;
        int count=x.second;
        if(count>max_count) {
            max_count=count;
            ans_element=element;
        }
       } return ans_element;
    }
};