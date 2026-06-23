class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> mpp;

        for(int i = 0; i<size; i++){
            mpp[nums[i]]++;
        }

        int freq = 0;
        int element;

        for(auto it: mpp){
            if(it.second>freq){
                freq = it.second;
                element = it.first;
            }
        }
    return element;
        
    }
};