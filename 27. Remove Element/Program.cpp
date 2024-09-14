class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;  // Index to track the position for placing non-'val' elements

        for (int i = 0; i < nums.size(); ++i) {  // Iterate through the entire array
            if (nums[i] != val) {  // If the current element is not equal to 'val'
                nums[index++] = nums[i];  // Place it at the 'index' position and increment 'index'
            }
        }

        return index;  // The value of 'index' is the new length of the array
    }
};
