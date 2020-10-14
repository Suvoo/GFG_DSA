/* https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1/?track=ppc-stack&batchId=221 */

/* REFERENCE : https://youtu.be/QMlDCR9xyd8 

with void methods, same concept ALSO check O(n) space soln much easier*/

#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if (s.empty()) 
			//cout << "Stack is empty\n"; 
			return -1;
			

		// variable minEle stores the minimum element 
		// in the stack. 
		else
			return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if (s.empty()) 
		{ 
			return -1; 
		} 
		int p;

		//cout << "Top Most Element Removed: "; 
		int t = s.top(); 
		s.pop(); 

		// Minimum will change as the minimum element 
		// of the stack is being removed. 
		if (t < minEle) 
		{ 
			//cout << minEle << "\n"; 
			//return minEle;
			p = minEle;
			minEle = 2*minEle - t; 
		} 

		else
			//cout << t << "\n"; 
			p=t;
			
		return p;
		
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   // Insert new number into the stack 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			//cout << "Number Inserted: " << x << "\n"; 
			return; 
		} 

		// If new number is less than minEle 
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 

		else
		s.push(x); 

		//cout << "Number Inserted: " << x << "\n"; 
}


 
 
