class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

      unordered_map<char,int> s_count; 
      unordered_map<char,int> t_count; 

      for(char c : s)
        s_count[c]++;
      for(char c : t)
        t_count[c]++;

        for(int c = 0 ; c < s_count.size(); c++)
            if(s_count[c] != t_count[c])
                return false;
        return true;
    }
};
