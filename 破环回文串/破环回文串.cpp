class Solution{
    public:
    string breakPalindrome(string palindrome){
        unordered_map<char,int>hash;
        if(palindrome.size()==1)
        return "";

        for(auto ch:palindrome){
            hash[ch]++;
        }
        if(hash['a']==palindrome.length())
        {
            palindrome.back()='b';
            return palindrome;
        }

        for(auto ch:palindrome){
            if(ch!='a'){
                ch='b';
                return palindrome;
            }
        }
        return palindrome;
    }
};
