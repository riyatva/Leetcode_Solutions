class MyQueue {
public:


   // 2 Stacks lelo:
   stack<int>s1; // main stack :
   stack<int>s2; //complementarty stack:

    MyQueue() {
        
    }
    
    void push(int x) {
        // Saare elements of main stack transferred to complementary stack :
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
         int x = s1.top();
         s1.pop();
         return x;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */