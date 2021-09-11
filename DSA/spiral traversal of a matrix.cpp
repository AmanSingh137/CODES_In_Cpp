vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        int k = 0, m = r-1; 
        int l = 0, t = c-1;
        vector<int> v;
        while(k <= m and l <= t) {
            for(int i = l; i <= t; i++) {
                v.push_back(matrix[k][i]);
            }
            k++;
            if(v.size()==r*c) break;
            for(int i = k; i <= m; i++) {
                v.push_back(matrix[i][t]);
            }
            t--;
            if(v.size()==r*c) break;
            for(int i = t; i >= l; i--) {
                v.push_back(matrix[m][i]);
            }
            m--;
            if(v.size()==r*c) break;
            for(int i = m; i >= k; i--) {
                v.push_back(matrix[i][l]);
            }
            l++;
            if(v.size()==r*c) break;
        }
        
        return v;
    }
