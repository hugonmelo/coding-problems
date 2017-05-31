class Solution {
public:
    string reverseString(string s) {
        int i = s.length()-1;
        string reverse = "";
        while(i >= 0)
        {
            reverse += s[i];
            --i;
        }
        return reverse;
    }
};