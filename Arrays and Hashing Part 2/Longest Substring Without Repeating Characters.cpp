int lengthOfLongestSubstring(string s) {
        unordered_map< char, int > map;
        int i = 0, j = 0;
        int ans = 0;

        while( j < s.length() )
        {
            if( map.find( s[j] ) == map.end() )
            map[ s[j] ] = j;
            else
            {
                i = max( i, map[ s[j] ] + 1 );
                map[ s[j] ] = j;
            }

            ans = max( ans, j-i+1 );
            j++;
        }

        return ans;
    }
