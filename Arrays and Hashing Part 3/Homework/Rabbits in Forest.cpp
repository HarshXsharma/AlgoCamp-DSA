int numRabbits(vector<int>& answers) {
        int ans = 0;
        unordered_map< int, double > map;
        for( int i = 0; i < answers.size(); i++ )
            map[ answers[i] ]++;

        for( auto x: map )
        {
            double groupsize = x.first + 1;
            int howmanygroupsreq = ceil( x.second/groupsize );
            ans += groupsize * howmanygroupsreq;
        }
        return ans;
    }
