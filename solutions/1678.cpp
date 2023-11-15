class Solution {
public:
    string interpret(string command) {
        string parsedString = "";
       for (int i = 0; i < command.size(); i++){
           if (command[i] == 'G') parsedString.push_back('G');
           else if (command[i] == '(' && command[i+1] == ')') {
               parsedString.push_back('o');
               i++;
           }
           else {
               parsedString.push_back('a');
               parsedString.push_back('l');
               i+= 3;
           } 
        }
        return parsedString;
    }
};