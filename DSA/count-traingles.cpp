int findNumberOfTriangles(int a[], int n)
{
        // code here
        sort(a, a+n);
        int c = 0;
        for(int i = 0; i < n-2; i++){
            int k = i+2; //we check across the other half of array so as to confirm that such set can be made where the condition a+b>c satisfies
            for(int j = i+1; j < n; j++) {
                while( k < n and a[j]+a[i] > a[k]) k++; //checking for the condition a+b>c and increment for every true evaluation
                
                if(k>j) c += k-j-1; // k will always evaluate to be greater than k. You can check it with other testcases too. and there is one more condition a[i]+a[k]>a[k]. 
                                    // this means a+c > c. so to avoid this extra evaluation, we do -1 from count. 
            }
        }
        return c; // return the answer. you can find this question on gfg. 
}

/*This is a problem where you are given an array say 3, 5, 4. so 1 triangle could be formed out of this array. Hence, we have to code and find how many triangles could be found out from this array */
