class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";
        for(int i=0; i<s.length(); i++){
            if(isalnum(s[i])){
            str += tolower(s[i]);
            }
        }
        string temp = str;

        int i=0;
        int j = str.length()-1;
        while(i<j){
            swap(str[i], str[j]);
                i++;
                j--;   
            
        }
        if(str != temp){
            return false;
        }
        return true;
    }
};
