#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct node{
    int key;
    struct node *left;
    struct node *right;
} node;

node* search(node *ptr, int key){
    if(ptr == NULL) return(NULL);
    if(key < ptr->key) return(search(ptr->left, key));
    else if(key == ptr->key) return(ptr);
    else  return(search(ptr->right, key));
}

node* insert(node *root, int key){
    node *newnode, *ptr;
    // if((newnode = malloc(sizeof(node))) == NULL) exit(1);
    newnode->key = key;
    newnode->left = newnode->right = NULL;
    if(root == NULL) return(newnode);
    ptr = root;
    while(ptr != NULL){
        if(key < ptr->key){
            if(ptr->left == NULL){
                ptr->left = newnode; break;
            }
            ptr = ptr->left;
        }
        else {
            if(ptr->right == NULL){
                ptr->right = newnode; break;
            }
            ptr = ptr->right;
        }
    }
    return(root);
}
int main(void){
    node *root;
    root = insert(NULL, 3);
    root = insert(root, 5);
    root = insert(root, 2);
    printf("");
    return 0;
}