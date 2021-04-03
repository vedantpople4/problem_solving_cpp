class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ones;
        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') ones.push_back(i);
        }
        vector<int> result(boxes.size(), 0);
        
        for (int i=0; i < boxes.size(); i++) {
            for (int n : ones) {
                result[i]+= abs(n-i);
            }
        }
        return result;
    }
};
