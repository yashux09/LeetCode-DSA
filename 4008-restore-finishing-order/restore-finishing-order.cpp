class Solution {
public:

    bool binarysearch(vector<int>nums,int target){
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (target == nums[mid]) {
                return true;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    }


    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(int i=0;i<order.size();i++){
            if(binarysearch(friends,order[i])){
                ans.push_back(order[i]);
            }
        }
        return ans ;
        
    }
};