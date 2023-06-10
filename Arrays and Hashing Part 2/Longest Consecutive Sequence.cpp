int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, bool> map;

        for( int i = 0; i < n; i++ )
        {
            if( map.find( nums[i] ) == map.end() )
            {
                if( map.find( nums[i]-1 ) == map.end() )
                    map[ nums[i] ] = true;
                else
                    map[ nums[i] ] = false;

                if( map.find( nums[i]+1 ) != map.end() )
                    map[ nums[i]+1 ] = false;
            }
        }

        int ans = 0;
        for( auto x : map )
        {
            if( x.second == true )
            {
                int count = 1;
                while( map.find( x.first + count ) != map.end() )
                    count++;
                
                ans = max( ans, count );
            }
        }
        return ans;
    }
