class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int ans = 0;
        for (int i = 0; i < answers.size(); i++)
        {
            mp[answers[i]]++;
            if(mp[answers[i]] == 1) ans += answers[i] + 1;
            else if(mp[answers[i]] > answers[i] + 1)
            {
                mp[answers[i]] = 1;
                ans += answers[i] + 1;
            }
        }
        return ans;
    }
};