class Solution {
public:
    int firstUniqChar(string s) {
        //( Use a map to store character and its frequency : ) 
        map<char,int>mp;
         
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        } 
        for(auto it : mp){
            cout<< it.first << " " <<it.second <<endl; 
        }
        // Ek baar aur travel kar ke dekh lete hai ki kaunsa character kaunse index pe hai .
        int ans = -1 ;
        for(int i=0 ;i<s.size();i++){
             // (Jiski frequency 1 hogi wo print kara dengein bas) 
           if(mp[s[i]] == 1 ){
             ans = i;
             return ans; ;
           }
        }
       return ans;
    }

};