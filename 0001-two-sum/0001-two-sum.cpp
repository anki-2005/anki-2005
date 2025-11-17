class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i];
                sum+=nums[j];
                vector<int > v;
                if(sum==target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return {};
    }
    

};