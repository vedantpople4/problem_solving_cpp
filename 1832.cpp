class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> set;
        for(char& c:sentence)
            set.insert(c);
        return set.size()==26;
    }
};
