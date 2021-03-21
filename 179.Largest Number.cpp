bool comparator(string a, string b)
{
    string l = a + b;
    string r = b + a;
    return l>r;
}


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> arr;
        
        for (int x:nums)
        {
            arr.push_back(to_string(x));
        }
        
        sort(arr.begin(), arr.end(),comparator);
        
        string ans = "";
        for(string s: arr)
        {
            ans += s;
        }
        
        return ans[0] == '0'?"0":ans;
    }
};