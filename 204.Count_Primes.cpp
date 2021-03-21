class Solution {
public:
    int countPrimes(int n) {
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        int cnt = 0;
        if(n==0||n==1) return 0;
        
        for(int p = 2; p<n; p++)
        {
            if(prime[p]==true)
            {
                cnt++;
                for (int j = 2*p; j < n; j+=p)
                    prime[j] = false;
            }
        }
        

        return cnt;
    }
};



