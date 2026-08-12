class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
    int n = fruits.size();
     map<int,int>mp;
     int i = 0;
     int ans = 1;

     for(int j=0;j<n;j++){
        mp[fruits[j]]++;
        if(mp.size()<=2){
            ans = max(ans,j-i+1);
        }
        while(mp.size()>2){
            mp[fruits[i]]--;
            if(mp[fruits[i]] == 0){

                mp.erase(fruits[i]);

            }
            i++;
        }

     }



    return ans ;
    }
};