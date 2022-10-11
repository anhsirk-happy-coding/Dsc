class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int size=str.length();
        sort(str.begin(),str.end());
        int maxsize=0,count=0;
        char maxword=str[0];
        for(int i=0;i<size-1;i++){
            if(str[i]==str[i+1])
            count++;
            else{
                if(maxsize<count){
                    maxword=str[i];
                    maxsize=count;
                }
                count=0;
            }
        }
        if(maxsize<count){
            maxword=str[size-1];
            maxsize=count;
        }
        return maxword;
        
    }

};
