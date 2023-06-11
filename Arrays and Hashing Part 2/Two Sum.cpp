vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map< int, int > map;
        vector<int> ans;
        for( int i = 0; i < nums.size(); i++ )
        {
            int temp = target - nums[i];
            if( map.find( temp ) != map.end() && map[temp] != i )
            {
                ans.push_back( i );
                ans.push_back( map[temp] );
                return ans;
            }
            map[ nums[i] ] = i;
        }
        return ans;
    }
