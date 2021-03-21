class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        for(char c : str){
            if ((int)c >= 65 && (int)c <= 90){
              cout << int(c);
              s += char(c+32);
            }else{
                s += c;
            }
        }
        return s;
    }
};
