vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        unordered_map< int, int > map;
        ans.push_back( {} );
        ans.push_back( {} );

        for( int i = 0; i < matches.size(); i++ )
        {
            map[ matches[i][1] ]++;
            
            if( map.find( matches[i][0] ) == map.end() )
                map[ matches[i][0] ] = 0;
        }

        for( auto x : map )
        {
            if( x.second == 0 )
            ans[0].push_back( x.first );

            if( x.second == 1 )
            ans[1].push_back( x.first );    
        }

        sort( ans[0].begin(), ans[0].end() );
        sort( ans[1].begin(), ans[1].end() );
        return ans;
    }
