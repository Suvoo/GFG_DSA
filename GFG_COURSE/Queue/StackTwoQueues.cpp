/* https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1/?track=pcc-queue&batchId=221 */
/* REFERENCE : https://youtu.be/ww5Ac232WEU */
/* TWO METHODs : used pushing costly here, can check pop costly in comments n video */


#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
         q2.push(x); 
  
        // Push all the remaining 
        // elements in q1 to q2. 
        while (!q1.empty()) { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // swap the names of two queues 
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        // if no elements are there in q1 
        if (q1.empty()) 
            return -1; 
        else{
            int ans = q1.front();
            q1.pop();
            return ans;
        }
}
