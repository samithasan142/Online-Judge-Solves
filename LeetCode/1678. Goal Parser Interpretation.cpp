class Solution {
public:
    string interpret(string command) {
        string new_command;
        int i = 0;
        while(i < command.length()){
            if(command[i] == 'G'){
                new_command += 'G';
                i++;
            }   
            else if(command[i]=='(' && command[i+1] == ')'){
                new_command += 'o';
                i+=2;
            }
            else if(command[i]=='(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                new_command += "al";
                i+=4;
            }
            else i++;
        }
        return new_command;
    }
};