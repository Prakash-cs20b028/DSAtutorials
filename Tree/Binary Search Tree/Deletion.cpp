#include<iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
struct node* root = NULL;
node* Insert(struct node*t , int key)
{
    struct node* p;
    if(t == NULL)
    {
        p = new node();
        p->data = key;
        p->lchild = p->rchild = NULL;
        return p;   // this line leads control to the main function where root is present over there.

    }
    if(key< t->data)
    {
        t->lchild = Insert(t->lchild,key);
    }
    else if (key > t->data)
    {
        t->rchild = Insert(t->rchild , key);
    }
    return t;
}
void Inorder(struct node* root)
{
    if(root)
    {
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
}
node* Predecessor(node* p)
{
    while(p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
}
node* Successor(node* p)
{
    while(p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
}
int height(node* p)
{
    if(p == NULL) return 0;
    int x,y;
    x = height(p->lchild);
    y = height(p->rchild);

    if(x>y)  {return x+1;}
    else {return y+1;}
}
node* Delete(struct node* t,int key)
{
    struct node *q,*temp;
    if(t==NULL)  
    {
        return t;
    }
    else if(t->data > key)
    {
        t->lchild = Delete(t->lchild,key);
    }
    else if(key > t->data)
    {
        t->rchild = Delete(t->rchild,key);
    }
    else
    {
        //case 0; if node doesn't have any node
        if(t->lchild == NULL && t->rchild == NULL)
        {
            if(t == NULL)
            {
                t = NULL;
                delete t;
                return NULL;
            }
           
        }
        //case1: if node's have one child that is right node
        else if(t->rchild != NULL)
        {
            temp = t;
            t = t->rchild;
            delete temp;
            return t;
        }
        else if(t->lchild != NULL)   //we found in left sides.
        {
            temp = t;
            t = t->lchild;
            delete temp;
            return t;
        }
        //case2: a node have two child.
        else
        {
            if(height(t->lchild) > height(t->rchild))
            {
                q = Predecessor(t->lchild);
                t->data = q->data;
                t->rchild = Delete(t->rchild,q->data);
            }
            else
            {
                q = Successor(t->rchild);
                t->data = q->data;
                t->lchild = Delete(t->lchild,q->data);
            }
        }

    }
   return t;      
}
int main()
{
    root = Insert(root,10);
    Insert(root,15);
    Insert(root,5);
    Insert(root,2);
    Insert(root,6);
    Insert(root,20);
    Insert(root,12);

    Inorder(root);
    cout<<'\n';
    Delete(root,10);
    
    Inorder(root);

}