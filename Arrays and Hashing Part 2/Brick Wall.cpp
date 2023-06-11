int leastBricks(vector<vector<int>>& wall) {

        unordered_map< int, int > map;
        int maxedges = 0;

        for( int i = 0; i < wall.size(); i++ )
        {
            int edge = 0;
            for( int j = 0; j < wall[i].size()-1; j++ )
            {
                edge += wall[i][j];
                map[ edge ]++;
                maxedges = max( maxedges, map[edge] );
            }
        }
        return wall.size()-maxedges;
    }
