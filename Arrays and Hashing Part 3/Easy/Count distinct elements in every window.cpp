vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        vector<int> ans;
        
        unordered_map<int, int> map;
        
        for( int j = 0; j < k; j++ )
        {   
            map[ A[j] ]++;
        }
        ans.push_back( map.size() );
        
        
        for( int j = k; j < n; j++ )
        {
            if( map[ A[j-k] ]  == 1 ){
                
                map.erase( A[j-k] );
            }
            else map[ A[j-k] ]--;
            
            map[ A[j] ]++;
            
            ans.push_back( map.size() );
        }
        return ans;
    }
