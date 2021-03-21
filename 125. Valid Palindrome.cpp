#include<stdio.h>
#include<ctype.h>
class Solution {
    
    bool isEqual(int l, int r)
    {
        if(l==r || (isalpha(l) && r==l+32) || (isalpha(r) && l==r+32))
            return true;
        return false;
    }
    
public:
    bool isPalindrome(string s) {
        
        int l = 0;
        int r = s.size();
        
        if(r==0)
            return true;
        
        vector<int> arr;
        int i = 0;
        
        while(i<r){
            if(isalpha(s[i]) || s[i]>='0' && s[i]<='9' )
                   arr.push_back(s[i]);
            i++;
        }
        
        
        int r1 = arr.size();
        while(l<r1)
        {
            if(isEqual(arr[l],arr[r1-1])==false)
                return false;
            l++;
            r1--;
            
            
        }
        return true;
    }
};