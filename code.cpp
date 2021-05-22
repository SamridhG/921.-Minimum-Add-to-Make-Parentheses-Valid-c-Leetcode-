class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>A;
        if(s.empty()) return 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                A.push(s[i]);
            }
            else
            {
                if(!A.empty() && A.top()=='(' && s[i]==')')
                {
                    A.pop();
                }
                else
                {
                    A.push(s[i]);
                }
            }
        }
        return A.size();
    }
};
