class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> result;
        vector<int> subset;

        backtrack(0, nums, subset, result);
        return result;
    }

private:
    void backtrack(int index, vector<int>& nums,
                   vector<int>& subset,
                   vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(subset);
            return;
        }

        // Include current element
        subset.push_back(nums[index]);
        backtrack(index + 1, nums, subset, result);

        // Exclude current element
        subset.pop_back();
        backtrack(index + 1, nums, subset, result);  
    }
};