class Solution {
public:
    string multiply(string s1, string s2) {
        int sign = 1;
        if(s1[0] == '-'){
            sign *= -1;
            s1.erase(s1.begin());
        }
        if(s2[0] == '-'){
            sign *= -1;
            s2.erase(s2.begin());
        }
       int vals[s1.length() + s2.length()];
       memset(vals, 0, sizeof(vals));
       for(int i = s1.length() - 1; i >= 0; i--){
           for(int j = s2.length() - 1; j >= 0; j--){
               int mul = (s1[i] - '0') * (s2[j] - '0');
               int sum = vals[i + j + 1] + mul;
               vals[i + j] += sum / 10;
               vals[i + j + 1] = sum % 10;
           }
       }
       string ans = "";
       int i = 0;
       while(i < s1.length() + s2.length() and vals[i] == 0){
           i++;
       }
       for(; i < s1.length() + s2.length(); i++){
           ans += to_string(vals[i]);
       }
       if(sign == -1 and ans != ""){
           ans.insert(0, "-");
       }
       return ans == "" ? "0" : ans;
    }
