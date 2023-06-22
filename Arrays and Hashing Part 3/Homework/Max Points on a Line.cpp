int maxPoints(vector<vector<int>>& points) {

        if( points.size() < 2 ) return 1;
        int ans = 0;

        for( int i = 0; i < points.size(); i++ )
        {
            unordered_map< double, int > map;

            for( int j = i+1; j < points.size(); j++ )
            {
                double num = points[j][1] - points[i][1]; 
                double den = points[j][0] - points[i][0];
                double slope;
                if( den == 0 ) map[ INT_MAX ]++;
                else {
                    slope = num/den;
                    map[slope]++;
                }
            }
            
            for( auto x: map )
            {
                ans = max( ans, 1+x.second );
            }
        }
        return ans;
    }
