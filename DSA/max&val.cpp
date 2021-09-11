class Solution
{
    public:
    // Function for finding maximum AND value.
    int check(int val, int arr[], int N) {
        int c = 0;
        for(int i = 0; i < N; i++) {
            if((arr[i]&val)==val) c++;
        }
        return c;
    }
    int maxAND (int arr[], int N)
    {
        // Your code here
        int res = 0, c = 0; 
        for(int bit = 16; bit >= 0; bit--) {
            c = check(res|(1<<bit), arr, N);
            if(c>=2) res = res | (1<<bit);
        }
        return res;
    }
};
