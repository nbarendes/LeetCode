class Solution {
public:
    int minOperations(int n) {
        
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]= (2* i) +1;
    }
    
    
    int equalNumber = n/2;
    int moit = (arr[0] + arr[n-1])/2;
    

    int cnt = 0;
    for (int i = 0; i < equalNumber; i++)
    {
        cnt += (moit - arr[i]);
    }
    return cnt;
    }
};