class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        for (char& letter : s) {
            if (letter != ' ') {
                temp += letter;
                continue;
            }
            reverse(temp.begin(), temp.end());
            ans += temp + " ";
            temp = "";
        }
        reverse(temp.begin(), temp.end());
        return ans + temp;
    }
};
