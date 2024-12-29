#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};




struct node* createnode(int data){
    struct node* n= (struct node*)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main(){
    struct node* p = createnode(2);
    struct node* p1 = createnode(1);
    struct node* p2 = createnode(2);

    p ->left=p1;
    p->right = p2; 
    return 0;
}