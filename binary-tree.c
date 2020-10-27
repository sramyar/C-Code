#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node{struct node* left; struct node* right; struct node* parent; int data;} node;

typedef struct tree{node* root;} tree;

tree* create_tree(int d)
{
    node* r = malloc(sizeof(node));
    tree* t = malloc(sizeof(tree));
    r -> left = NULL;
    r -> right = NULL;
    r -> parent = NULL;
    r -> data = d;
    t -> root = r;
    return t;
}

node* create_node(int d)
{
    node* n = malloc(sizeof(node));
    n -> data = d;
    n -> parent = NULL;
    n -> right = NULL;
    n -> left = NULL;
    return n;
}


node* find_element(int d, tree* t)
{
    node* curr = t->root;
    while(curr != NULL)
    {
        if (d > curr->data && curr->right != NULL) curr = curr->right;
        else if(d < curr->data && curr->left != NULL) curr = curr->left;
        else return curr;
    }
    return curr;
}

tree* add(int d, tree* t)
{
    node* leaf = find_element(d,t);
    if (leaf->data == d) return t;
    if (d > leaf->data) {node* child = create_node(d); child -> parent = leaf; leaf -> right = child;}
    else {node* child = create_node(d); child->parent = leaf; leaf -> left = child;}
    return t;
}

void print_tree1(tree* t)
{
    node* r = t-> root;
    node *next, *curr, *prev;
    curr = r;
    prev = NULL;
    while(curr != NULL){
        if (prev == curr->parent){
            if (curr->left != NULL) next = curr->left;
            else if (curr->right != NULL) next = curr->right;
            else next = curr->parent;
        }
        else if (prev == curr->left){
            if (curr->right != NULL) next = curr->right;
            else next = curr->parent;
        }
        else next = curr->parent;
        printf("%d\t",curr->data);
        prev = curr;
        curr = next;
    }
    printf("\n");
}

int is_leaf(node* n)
{
    return(n->right == NULL && n->left == NULL);
}

void print_tree2(node* r)
{
    if (r != NULL){
        print_tree2(r->left);
        printf("%d\t",r->data);
        print_tree2(r->right);
    }
    printf("\n");
}

int main(void)
{
    tree* t = create_tree(4);
    t = add(5,t);
    t = add(6,t);
    t = add(0,t);
    t = add(10,t);
    t = add(-1,t);
    print_tree1(t);
    node* n = t->root;
    print_tree2(n);
    

}