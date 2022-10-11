class Solution {
public:
    string removeDuplicates(string s) {
        s+=" ";
        for(int i=0;i<s.length()-1;){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i!=0)i--;                
            }
            else
                i++;
        }
        s.erase(s.size()-1);
        return s;
    }
};
