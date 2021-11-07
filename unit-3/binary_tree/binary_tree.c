#include <stdlib.h>
#include "binary_tree.h"

// Make binary Tree Node here
BinaryNode *btree_make_node(BinaryEntry data){
    BinaryNode *node = calloc(1,sizeof(BinaryNode));
    node ->data = data;
    node ->right = NULL;
    node->left = NULL;
    return node;
}

// Insert to the left
BinaryNode *btree_insert_left(BinaryNode *tree, BinaryEntry data){
    tree -> left = btree_make_node(data);
    return tree;
}

// Insert to the right
BinaryNode *btree_insert_right(BinaryNode *tree, BinaryEntry data){
    tree->right = btree_make_node(data);
    return tree;
}

// Check tree Is Empty or Not
bool btree_is_empty(BinaryNode *btree){
    return btree == NULL;
}

// Preorder Traverse
 void btree_preorder(BinaryNode *tree, Visitor visitor){
     if(!btree_is_empty(tree)){
         visitor(tree);
         btree_postorder(tree->left, visitor);
         btree_preorder(tree->right, visitor);

     }
 }

//  Post order Traverse
 void btree_postorder(BinaryNode *tree, Visitor visitor){
     if(!btree_is_empty(tree)){
         btree_postorder(tree ->left, visitor);
         btree_postorder(tree->right, visitor);
         visitor(tree);
     }
 }

// Inorder Traverse
 void btree_inorder(BinaryNode *tree, Visitor visitor){
     if(!btree_is_empty(tree)){
         btree_inorder(tree->left, visitor);
         visitor(tree);
         btree_inorder(tree->right, visitor);
     }
 }