class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
//Core Idea : Magazine mein Jitne Letters hain unki frequency should match with ransomNote ki    Frequency :

  map<char,int>mag;
  for(int i=0;i<magazine.size();i++){
    mag[magazine[i]]++;
  }

  map<char,int>rans;
  for(int j=0;j<ransomNote.size();j++){
     rans[ransomNote[j]]++;
  }
 

  // Then we will iterate over ransome Note and one by one compare the frequency of ransomNote characters and magazine characters :

  for(int i=0 ; i<ransomNote.size() ; i++){
           char ch = ransomNote[i];
           //(Comparing the frequency of every character there in  ransomNote with the frequency there in magazine)
           // If the frequency of a character in rans > mag[ch] , then certainly we cannot form characters from that .
          if(!mag.contains(ch) || rans[ch] > mag[ch]) {
                return false ;
          }
          else{
            mag[ch]--;
            if(mag[ch] == 0){
                mag.erase(ch);
            }
            rans[ch]--;
          }
  }


      //(return true if the entire ransomNote is properly traversed :)

      
     return true ;          
   }
};