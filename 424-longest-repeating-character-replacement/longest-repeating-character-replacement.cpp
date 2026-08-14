class Solution {
public:
    int characterReplacement(string s, int k) {
          int n = s.size();
          int ans = -1e9;
          int i  = 0;
          map<char,int>mp;
          int max_freq = -1e9;

          for(int j=0;j<n;j++){
            mp[s[j]]++;
            max_freq = max(max_freq,mp[s[j]]);
            int window_length = j-i+1;
            int replacements = window_length - max_freq;

            while(replacements > k){
               mp[s[i]]--;
               if(mp[s[i]] == 0){
                 mp.erase(s[i]);
               }
               i++;
               window_length = j-i+1;
               replacements = window_length - max_freq;     
            }

             ans  = max(ans , window_length);
          }

          return ans ;

    }
};