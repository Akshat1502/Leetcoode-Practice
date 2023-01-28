class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int size=nums.size();
        unordered_map<int,int> m;
        int diff;
        int i;
        for(i=0;i<size;i++){
            diff=target-nums[i];
            if(m.find(diff)!= m.end() && m.find(diff)->second !=i){
                 a.push_back(m.find(diff)->second);
                a.push_back(i);
                return a;
            }
            m[nums[i]]= i;
        }
        return a;
        
    }
};
