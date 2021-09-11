 int max_path_sum(int a[], int b[], int l, int m)
    {
    
        //Your code here
        int i = 0, j = 0; 
        int s1 = 0, s2 = 0, res = 0; 
        while(i < l and j < m){
            if(a[i]<b[j]) {
                s1 += a[i++];
                //continue;
            }
            if(b[j]<a[i]){
                s2 += b[j++];
               // continue;
            }
            if(b[j]==a[i]){
                res += max(s1, s2);
                s1 = 0, s2 = 0;
                while(i < l && j < m && a[i]==b[j]) {
                    res += a[i++];
                    j++;
                }
            }
        }
        while(i<l) {
            s1 += a[i++];
        }
        while(j<m){
            s2 += b[j++];
        }
        res += max(s1, s2);
        return res;
    }
