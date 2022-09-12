
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class BST
{
	int data;
	BST *left, *right;
	public :
		BST();
		BST(int);
		BST *Insert(BST*, int);
		void Inorder(BST*);
};
BST ::BST()
	:data(0)
	,left(NULL)
	,right(NULL)
	{
	}
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}
BST* BST :: Insert(BST* root, int value)
{
	if(!root)
	{
		return new BST(value);
	}
	if(value > root->data)
	{
		root->right = Insert(root->right, value);
	}
	else
	{
		root -> left = Insert(root->left,value);
	}
	return root;
}
void BST::Inorder(BST* root)
{
	if(!root)
	{
		return;
	}
	Inorder(root->left);
	cout<< root->data<<endl;
	Inorder(root->right);
}
struct Node{
	int key;
	struct Node *left, *right;
};

Node* newNode(int item){
	Node* temp = new Node;
	temp -> key = item;
	temp->left = temp -> right= NULL;
	return temp; 
}
Node * deleteNode(Node* root, int k)
{
	if(root == NULL){
		return root;
	}
	if(root->key > k)
	{
		root->left = deleteNode(root->left,k);
		return root;
	}
	else if(root->key < k)
	{
		root->right= deleteNode(root->right, k);
		return root;
	}
	if(root->left == NULL)
	{
		Node* temp = root->right;
		delete root;
		return temp;
	}
	    else {
        Node* succParent = root;        
        Node* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
            if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
        root->key = succ->key;
        delete succ;
        return root;
    }
}

int main()
{
	BST b, *root = NULL;
	int x;
	char choice = 'a';
	char running = 't';
	char selection;
	char ch;
	int y;
	
	while(running == 't')
	{
		

	cout<<"Enter operation "<<endl;
	cout<<"Insert"<<endl;
	cout<<"Delete"<<endl;
	cin>>selection;
	if(selection == 'Insert')
	{
	
	while(choice != 'q')
	{
		cout<<"Enter q to stop entering values, a to continue insertion"<<endl;
		cin>>choice;
		if(choice == 'a')
		{
		cout<<"Enter the value to insert";
		cin>>x;
    	root = b.Insert(root, x);
    	continue;
		}
	}
	}
	
	if(selection == 'Delete')
	{
		while(ch != 'q')
	{
		cout<<"Enter q to stop Deleting values, a to continue insertion"<<endl;
		cin>>ch;
		if(ch == 'a')
		{
		cout<<"Enter the value to Delete";
		cin>>y;
    	 root = deleteNode(root, y);
    	continue;
		}
	}
	}
	cout<<"Press h to stop operations, t to continue"<<endl;
	cin>>running;
	if(running =='t' )
	{
		continue;
	}
	else{
	
	b.Inorder(root);
	}
}
    return 0;
}

	

	
