class Solution {
public:
    bool isAnagram(string s, string t) {
        int vf1[1000]={0},vf2[1000]={0};
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
            vf1[s[i]]++;
        for(int j=0;j<t.size();j++)
            vf2[t[j]]++;
        for(int j=0;j<s.size();j++)
            if(vf1[s[j]]!=vf2[s[j]])
                return false;
        return true;
    }
};
