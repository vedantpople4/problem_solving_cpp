class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        if(ans>=0 and ans<letters.size()) return letters[ans];
        else return letters[0];
    }
};

 
