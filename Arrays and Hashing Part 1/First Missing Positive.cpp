int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        int contains1 = 0;

        for( int i = 0; i < n; i++ )
        {
            if( nums[i] == 1 ){
                contains1++;
                break;
            }
        }

        if( contains1 == 0 )
        return 1;

        //data cleanup
        for( int i = 0; i < n; i++ )
        {
            if( nums[i] <= 0 || nums[i] > n )
                nums[i] = 1;
        }

        for( int i = 0; i < n; i++ )
        {
            int idx = abs( nums[i] );
            
            //hashing in array itself
            if( idx == n )
            nums[0] = - abs( nums[0] );
            else
            nums[idx] = - abs( nums[idx] );
        }

        for( int i = 1; i < n; i++ )
        {
            if( nums[i] > 0 )
            return i;
        }

        if( nums[0] > 0 ) return n;

        return n+1;

    }
