class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto & i:nums){
            mp[i]++;
        }
        int n=nums.size();
        for(auto & i:mp){
            if(i.second>(n/3))v.push_back(i.first);
        }
        return v;
    }
};