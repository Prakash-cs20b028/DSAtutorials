#include<iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
struct node* root = NULL;

void ItInsert(node* t,int key)   //iteratevely insertion.
{
    struct node* p,*r = NULL;   //r will be used to traversal backside of t.
    if(t == NULL)  //condition for root node if it will be null then we will add first element.
    {
        p = new node();
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;

    }
    while(t != NULL)
    {
        r = t;            //p wil follow pointer t.
        if(key == t->data)
        {
            return ;
        }
        if(key < t->data)
        {
            t = t->lchild;
        }
        else 
        {
            t = t->rchild;
        }
    }
    p = new node();
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(r->data < p->data)
    {
        r->rchild = p;
    }
    else
    {
        r->lchild = p;
    }

}
node* RInsert(struct node* t,int key)
{
    struct node* p;
    if(t == NULL)
    {
        p = new node();
        p ->data = key;
        p->lchild = p->rchild = NULL;
        return p;
    }
    if(key < t->data)
    {
        t->lchild = RInsert(t->lchild,key);
    }
    else if(key > t->data)
    {
        t->rchild = RInsert(t->rchild,key);
    }
    return t;
}
void Inorder(struct node* root)
{
    
    if(root != NULL)
    {
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
}
int main()
{
    ItInsert(root,10);
    ItInsert(root,5);
    ItInsert(root,15);
    ItInsert(root,20);
    ItInsert(root,3);
    ItInsert(root,8);

    Inorder(root);
    cout<<endl;
    
root = RInsert(root,10);
    RInsert(root,5);
    RInsert(root,15);
    RInsert(root,20);
    RInsert(root,3);
    RInsert(root,8);
    RInsert(root,1);

    Inorder(root);
 
}