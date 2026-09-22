class Solution {
public:

    bool isOpen(char ch){
        if(ch == '{' || ch == '(' || ch == '['){
            return true;
        }
        return false;
    }
    bool isValid(string s) {

       int n = s.size();   
       stack<char>st;
       st.push(-1);

       for(int i=0;i<n;i++){
        if(isOpen(s[i]) == true){
            st.push(s[i]);
         }
         else{
             if(st.top()!=-1){

             if( ( s[i] == ')' && st.top() == '(' ) || ( s[i] == '}' && st.top() == '{' ) || ( s[i] == ']' && st.top() == '[' ) ){
                    st.pop();   
               }
              else{
                  return false;
              }

             }
             else{
                return false;
             }
         }
       }
       
       if(st.top()!=-1){
         return false; 
       }

       return true;
    }
};