/* Code Help : https://youtu.be/9sw8RRsBw6s */
/* Methods : 2 given in video, Github Gist */

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}
// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/
Node *BasicTree (Node *root,int element){

    if(root == NULL)
        root = new Node(element);
        
    if(root->data > element)
        root->left = BasicTree(root->left,element);
    if(root->data < element)
        root->right = BasicTree(root->right,element);
    
    return root;
}

Node *constructTree (int post[], int size)
{
    //code here
    
    Node *root = NULL;
    for(int i = size-1 ;i >= 0; i--)
        root = BasicTree(root,post[i]);
    
    return root;

    
    
}
