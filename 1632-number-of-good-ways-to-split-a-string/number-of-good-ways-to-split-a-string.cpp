class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        unordered_map<char,int>suffix;
        for(int i=0;i<n;i++){
            suffix[s[i]]++;
        }
        unordered_map<char,int>prefix;
        int cnt = 0;
        for(int j=0;j<n-1;j++){
           prefix[s[j]]++;
           suffix[s[j]]--;
           if(suffix[s[j]] == 0){
             suffix.erase(s[j]);
           }
           if(prefix.size() == suffix.size()){
             cnt++;
           }
        }
        return cnt; 
    }
};