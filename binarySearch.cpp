//Binary Search

int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid;

        while(hi - lo > 1){
            mid = (lo + hi)/2;

            if(nums[mid] < target){
                lo = mid +1;
            } else{
                hi = mid;
            }
        }

        if(nums[lo] == target) return lo;
        else if(nums[hi] == target) return hi;
        return -1;
    }
