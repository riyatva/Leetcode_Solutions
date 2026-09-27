class MyStack {
public:

    queue<int>q1;
    queue<int>q2;

    MyStack() {
        
    }
    
    void push(int x) {
        //pehle saare elements Q1 ke Q2 mein rakh do
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // Now push the latest element in the queue.
        q1.push(x);

        // Phir saare elements of q2 into q1 mein push kar do.
         while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
         } 
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    
    bool empty() {
         if(q1.empty() && q2.empty()){
            return true;
         }
         return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */