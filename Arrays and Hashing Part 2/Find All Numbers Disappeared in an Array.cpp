// SC O(n)
vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map< int, int > map;

        for( int i = 0; i < nums.size(); i++ )
        map[ nums[i] ]++;

        for( int i = 1; i <= nums.size(); i++ )
        {
            if( map.find( i ) == map.end() )
            ans.push_back( i );
        }

        return ans;
    }
//SC O(1)
vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        for( int i = 0; i < n; i++ )
        {
            int idx = abs( nums[i] ) - 1;
            nums[idx] = abs( nums[idx] ) * -1;
        }

        for( int i = 0; i < n; i++ )
        {
            if( nums[i] > 0 )
            ans.push_back( i+1 );
        }
        return ans;
    }
