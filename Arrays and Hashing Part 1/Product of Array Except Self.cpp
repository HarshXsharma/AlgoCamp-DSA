// SC = O(n)
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n), suffix(n);

        ans[0] = 1;
        for( int i = 1; i < n; i++ )
            ans[i] = nums[i-1] * ans[i-1];
        
        suffix[n-1] = 1;
        for( int i = n-2; i >= 0; i-- )
            suffix[i] = nums[i+1] * suffix[i+1];

        for( int i = 0; i < n; i++ )
            ans[i] = ans[i] * suffix[i];

        return ans;
    }

// SC = O(1)
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        ans[0] = 1;
        for( int i = 1; i < n; i++ )
            ans[i] = nums[i-1] * ans[i-1];
        
        int suffix = 1;
        for( int i = n-1; i >= 0; i-- )
        {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
