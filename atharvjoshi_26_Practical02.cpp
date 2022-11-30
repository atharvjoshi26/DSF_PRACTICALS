#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *left, *right;
} root;

class tree
{
    root *nw;
    int key;

    public:
    void insert(root*, root *);
    void inorder(root*);
    void preorder(root*);
    void postorder(root*);
	
}; 
void tree :: insert(root *root1, root *nw1)
{
    if (nw1->data>root1->data)
    {
        if (root1->right==NULL)
        {
            root1->right=nw1;
        }
        else
        {
            insert(root1->right,nw1);
        }
    }
    else
    {
        if (root1->left==NULL)
        {
            root1->left=nw1;
        }
        else
        {
            insert(root1->left,nw1);
        }
    }
    
}

void tree :: inorder(root *root1)
{
	if(root1 !=NULL)
	{
	inorder(root1->left);
	cout<<"\t"<<root1->data;
	inorder(root1->right);
	}
}
void tree :: preorder(root *root1)
{
	if(root1 !=NULL)
	{

	cout<<"\t"<<root1->data;
	preorder(root1->left);
	preorder(root1->right);
	}
}
void tree :: postorder(root *root1)
{
	if(root1 !=NULL)
	{
        postorder(root1->left);
	postorder(root1->right);
	cout<<"\t"<<root1->data;
	}
}
int main()
{
    root *nw1,*root1=NULL,*nw;
    tree t;
    int data1,key,c,choice,c1;
    do
    {
        cout<<"\n1.Insert data \n2. inorder \n3. Preorder \n4.Postorder";
        cout<<"\nEnter your choice :"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            do
            {
                nw1=new root();
                cout<<"\nEnter the data :";
                cin>>data1;
                nw1->data=data1;
                nw1->right=NULL;
                nw1->left=NULL;
                if (root1==NULL)
                {
                    root1=nw1;
                }
                else
                {
                    t.insert(root1,nw1);
                }
                cout<<"\nAdd more Data ?,If then Press 1 :"<<endl;
                cin>>c;
            } while (c==1);
            break;
            case 2:
                t.inorder(root1);
		break;
	    case 3:
                t.preorder(root1);
                break;
            case 4:
                t.postorder(root1);
                break;       
	}
        cout<<"\nDo you want to continue if yes then press 1";
        cin>>c1;    
    }while(c1==1);
    return 0;
}
