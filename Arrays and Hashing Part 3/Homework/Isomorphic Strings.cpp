bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> smap;
        unordered_map<char, bool> tmap;

        for( int i = 0; i < s.length(); i++ )
        {
            if( smap.find( s[i] ) == smap.end() )
            {
                if( tmap.find( t[i] ) == tmap.end() )
                {
                    tmap[ t[i] ] = true;
                    smap[ s[i] ] = t[i];
                }
                else return false;
            }
            else
            {
                if( smap[ s[i] ] != t[i] )
                return false;
            }
        }
        return true;
    }
