class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int max_straight_sum = INT_MIN;
        int temp_max_sum = 0;
        
        int array_sum = 0;
        
        int min_straight_sum = INT_MAX;
        int temp_minSum = 0;
        
        for(int i = 0; i < A.size(); i++)
        {
            array_sum += A[i];
            
            temp_max_sum += A[i]; 
            max_straight_sum = max_straight_sum<temp_max_sum? temp_max_sum:max_straight_sum;
            temp_max_sum = temp_max_sum<0?0:temp_max_sum;
            
            temp_minSum += A[i];
            min_straight_sum = min_straight_sum>temp_minSum? temp_minSum:min_straight_sum;
            temp_minSum = temp_minSum>0?0:temp_minSum;
            
            
            
        }
        if(array_sum==min_straight_sum)
            return max_straight_sum;
        return max(max_straight_sum,(array_sum-min_straight_sum));
    }
};