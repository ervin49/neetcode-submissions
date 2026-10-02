class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

      unordered_map<char,int> s_count; 
      unordered_map<char,int> t_count; 

        for(int i = 0 ; i < s.size(); i++){
            s_count[s[i]]++;
            t_count[t[i]]++;

        }

        for(int c = 0 ; c < s_count.size(); c++)
            if(s_count[c] != t_count[c])
                return false;
        return true;
    }
};
