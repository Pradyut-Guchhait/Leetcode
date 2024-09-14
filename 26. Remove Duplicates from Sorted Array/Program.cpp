class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int ind = 1;  // This index will track the position to place the next unique element

        for (int i = 1; i < nums.size(); i++) {  // Start from the second element
            if (nums[i] == nums[i - 1])
                continue;  // Skip this element if it's the same as the previous one
            else {
                nums[ind] = nums[i];  // Place the current element in the next unique position
                ind++;  // Move the index forward
            }
        }

        // Remove the redundant elements beyond the unique elements
        nums.erase(nums.begin() + ind, nums.end());

        return nums.size();  // Return the new size of the array with unique elements
    }
};
