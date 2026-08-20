class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

       int n = nums.size();
       // Ek map bana lo to look to the frequency of (sum-k)  at every index okay 
       map<int,int>freq;
       // Jahan calaculate karte karte sum = k aa gaya tab .
       freq[0] = 1;
       int sum = 0; 
       int answ = 0 ;
       for(int i=0;i<n;i++){
        sum+=nums[i];
        int ques = sum-k;
        // Agar kabhi pehle sum-k aaya hota toa cnt++ kar sakte hain .
        if(freq.find(ques)!=freq.end()){
             answ+=freq[ques];
          }
        //storing the current calculated sum .
        freq[sum]++;

       }
        return answ;           
    }
};


// Since n = 10^4 na so 10^8 operations are allowed.
