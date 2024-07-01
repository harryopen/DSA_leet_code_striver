class Solution {
public:
    void insert(vector<int> &nums , int temp){
        // Base condition 
        if(nums.size()==0|| nums[nums.size()-1]<=temp){
            nums.push_back(temp);
            return ;
        }
        int val = nums[nums.size() -1 ];
        nums.pop_back();
        insert(nums,temp);
        nums.push_back(val);


    } 
    void helper(vector<int> &nums){
        // base condition 
        if(nums.size() == 0 ){
            return ; 
        } 
        int temp = nums[nums.size()-1];
        nums.pop_back();
        helper(nums);
        insert(nums,temp);
    }
    vector<int> sortArray(vector<int>& nums) {
        helper(nums);
        return nums; 
         
    }
};