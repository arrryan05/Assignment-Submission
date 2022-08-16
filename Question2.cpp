#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
// Implement a queue using two stacks
class Queue
{
    stack<int> s1, s2;
 
public:
    void enqueue(int data){
        // Move all elements from the first stack to the second stack
        while (!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        // Move all elements back to the first stack from the second stack
        while (!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue(){
        // if the first stack is empty
        if (s1.empty()){
            cout << "Underflow!!";
            exit(0);
        }
        // return the top item from the first stack
        int top = s1.top();
        s1.pop();
        return top;
    }
};
 
int main()
{
    int keys[] = { 1, 2, 3, 4, 5 };
    Queue q;
    for (int i=0;i<5;i++) {
        q.enqueue(keys[i]);
    }
    cout << q.dequeue() << endl;    
    cout << q.dequeue() << endl;  
    return 0;
}


/*
Complexity Analysis: 

->Time Complexity: 
 1. Push operation: O(N). 
    In the worst case we have empty whole of stack 1 into stack 2.
 2. Pop operation: O(1). 
    Same as pop operation in stack.
->Auxiliary Space: O(N). 
  Use of stack for storing values.
*/
