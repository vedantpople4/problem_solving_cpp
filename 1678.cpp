class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0; i<command.size(); ++i) {
            if(command[i]=='(') {
                if(command[++i]==')') s+='o';
                else { s+="al"; i+=2; }
            }
            else s+=command[i];
        }
        return s;
    }
};
