#include<iostream>
using namespace std;
struct node
{
int data,lth,rth;
struct node *left,*right;
};

class bst
{
public:
void insert(node*,node*);
void inorder(node*);
void preorder(node*);
void postorder(node*);
};

void bst::insert(struct node *root,struct node *nn)
{
struct node *temp =root;
int flag=0;
do{
if(temp->data < nn->data && temp->rth==1)
{
nn->left=temp;
nn->right=temp->right;
temp->right=nn;
temp->rth=0;
flag=1;
}
else if(temp->data < nn->data && temp->rth==0)
{
temp=temp->right;
}

else if(temp->data > nn->data && temp->rth==1)
{
nn->right=temp;
nn->left=temp->left;
temp->left=nn;
temp->lth=0;
flag=1;
}
else if(temp->data > nn->data && temp->lth==0)
{
temp=temp->left;
}
}
while(flag==0);
}

void bst::inorder(struct node *root)
{
int flag=0;
struct node *trav=root;
while(trav!=NULL)
{
while(trav->lth==0 && flag==0)
trav =trav->left;
cout<<trav->data<<" ";
if(trav->rth==0)
{
trav=trav->right;
flag=0;
}
else
{
trav=trav->right;
flag=1;
}
}
}

void bst ::preorder(struct node *root)
{
int flag=0;
struct node *trav=root;
while(trav!=NULL)
{
while(trav->lth==0 && flag==0)
{
cout<<trav->data<<" ";
trav=trav->left;
}
if(trav->lth==1)
cout<<trav->data<<" ";
if(trav->rth==0)
flag==0;
else
flag=1;
trav=trav->right;
}
}

int main()
{
struct node *root =NULL,*nn;
bst tree;
int key,choice;
do
{
cout<<"\n 1. insert key \n 2. inorder \n 3. preorder \n 4. exit\n";
cin>>choice;
switch(choice)
{

case 1:
cout<<"\nenter key:";
cin>>key;
nn=new struct node ;
nn->data=key;
nn->left=nn->right=NULL;
nn->lth=nn->rth=1;
if(root==NULL)
root=nn;
else
tree.insert(root,nn);
break;

case 2:
cout<<"\ninorder is:";
tree.inorder(root);
break;

case 3:
cout<<"\npreorder is:";
tree.preorder(root);
break;

case 4:
break;

default:
cout<<"\n wrong choice....";
break;
}

}while(choice!=4);
return 0;
}
