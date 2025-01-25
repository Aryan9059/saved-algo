//Pattern 1 : Longest Subarray with target.

int longestSubarrayWithSum(vector<int> &a, int k) {
    int l = 0, r = 0;
    int sum = 0;

    int count = 1;

    while (r < n)
    {
        sum += a[r];
        while (sum > k)
        {
            sum -= a[l];
            l++;
        }

        if(sum <= k) count = max(r-l+1, count);

        r++;
         
    }
    
    return count;
}
