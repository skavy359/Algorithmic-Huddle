class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                ans.push_back(command[i]);
            }
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    ans.push_back('o');
                }
                else if(command[i+1]=='a'){
                    ans.push_back(command[i+1]);
                    ans.push_back(command[i+2]);
                }
            }
        }
        return ans;
    }
};
