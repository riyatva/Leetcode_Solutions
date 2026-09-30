class StockSpanner {
public:
    // Declare Data Members over here :
     stack<pair<int,int>>st ; // Declare stack 
     int day = 0 ; // this day represent current index . 

     // Constructor 
    StockSpanner() {
         st.push({-1,-1}); // (element , index) 
    }
    
    int next(int price) {
            int ans ;
            while(st.top().first !=-1 && st.top().first <= price){
                st.pop();
            }
            if(st.top().first == -1){
                if (day == 0){
                    day =1;
                }
                ans = day ;
            }
            else{
              ans = day - st.top().second;  // Number mil jaaygaa ;
            } 
            st.push({price,day});
            day++;
            return ans;
        }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */