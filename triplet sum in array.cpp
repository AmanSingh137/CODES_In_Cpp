bool find3Numbers(int a[], int n, int x)
    {
        if(n<=2) return false;
        if(n==3) {
            if(a[0]+a[1]+a[2]==x) return true;
            else return false;
        }
        sort(a, a+n);
        for(int i =0; i < n-3; i++){
            int k =1;
            int l = i+1, r = n-1;
            while(l<r){
                int s = a[i]+a[l]+a[r];
                if(s==x) return true;
                if(s<x) l++;
                else r--;
            }
        }
        return false;
    }

/*we have to find only 3 numbers from the array. So we need to check all the combos. Before doing that, make sure you sort the array in your own way. Now to do that, we take two pointers, left pointing at i+1 and right pointing at n-1. Now we iterate through the array and keep on adding them and checking that they are equal to x or not. if not then if the sum is more, we reduce right pointer and if it is less, we increase the left pointer. And if the sum is equal to x, we straightaway return true to the main function. I found this at gfg. Make sure you try the problem first and then check this solution. Cos it's all for learning purpose. All hail GFG*/
