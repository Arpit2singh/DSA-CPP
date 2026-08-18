class Solution {
public:
    bool check(int& left, int& right, string& s, int &count) {
        if (left < 0 || right >= s.size())
            return true;
        if (left >= 0 && right < s.size() && s[left] == s[right]) {
            count++ ; 
            left--;
            right++;
            return check(left, right, s , count);
        }
        return true;
    }

    int countSubstrings(string s) {
        int count = 0 ; 

        for (int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;
            check(left, right, s, count) ;
            left = i;
            right = i + 1;
            check(left , right , s , count) ; 
        }
        return count ; 
    }
};