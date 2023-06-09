     long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, int> map;
        int n = rectangles.size();

        for( int i = 0; i < n; i++ )
        {
            double ratio = (double)rectangles[i][0]/(double)rectangles[i][1];
            map[ratio]++; 
        }

        long long ans = 0;

        // combinations
        for( auto x : map )
        {
            long long freq = x.second;
            ans += ( freq * ( freq-1 ) )/2.0;
        }

        return ans;
    }
