/* https://practice.geeksforgeeks.org/problems/sort-a-stack/1/?track=ppc-stack&batchId=221 */

/* CAN ALSO BE DONE USING RECURSION */

/* SOLUTION : https://youtu.be/nll-b4GeiX4 */


#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   	stack<int> s1;
	s1.push(s.top());
	s.pop();

	while(!s.empty()){

		int temp =  s.top();
		s.pop();
		while(!s1.empty() && temp < s1.top()){  //sorting condition for ascending or descending
			s.push(s1.top());
			s1.pop();
		}
		s1.push(temp);
	}

		while(!s1.empty()){
			cout << s1.top() << " ";
			s1.pop();
		}
	
}
