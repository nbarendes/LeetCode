class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    
    int n = nums.size();
    
    vector<int> Left(n,1), Right(n,1), ans;


    for(int i = 0,  j = n - 2; i < n, j >= 0; i++, j--)
    {
        Left[i + 1] = Left[i] * nums[i];
        Right[j] = Right[j+1] * nums[j+1];
        
    }
    
    for(int k = 0; k < n; k++)
    {
        ans.push_back(Right[k]*Left[k]);
    }


    return ans; 
    }
};