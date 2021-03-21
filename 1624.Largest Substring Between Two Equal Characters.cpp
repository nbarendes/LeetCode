#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string str) {
    int res = -1;

    unordered_map<char, int> M;
 

    for (int i = 0; str[i]; i++) 
    {

        if (M.find(str[i]) == M.end()) 
        {
            M.insert(make_pair(str[i], i));
        }

        else
        {
            res = max(res, i-M[str[i]]-1);
        }
    }
    
    return res;
    }
};