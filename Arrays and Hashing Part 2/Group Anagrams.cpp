vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector< vector< string > > ans;
        unordered_map< string, vector<string> > map;
        string temp;

        for( int i = 0; i < strs.size(); i++ )
        {
            temp = strs[i];
            sort( temp.begin(), temp.end() );
            map[ temp ].push_back( strs[i] );
        }

        for( auto i : map )
            ans.push_back( i.second );

        return ans;
    }
