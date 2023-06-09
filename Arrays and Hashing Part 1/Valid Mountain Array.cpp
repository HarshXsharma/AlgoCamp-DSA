bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        if( n < 3 ) return false;

        int i = 1;
        for( ; i < n; i++ )
        {
            if( arr[i] == arr[i-1] )
            return false;

            if( arr[i] < arr[i-1] )
            break;
        }
        //peak element i-1
        i--;
        
        if( i == 0 || i == n-1 ) return false;
        
        for( ; i < n-1; i++ )
        {
            if( arr[i] <= arr[i+1] ) return false;
        }

        return true;
    }
