//
//  traversalBT.h
//  travelsalBT2
//
//  Created by Sujeong Oh on 2022/12/21.
//

#ifndef traversalBT_h
//#define traversalBT_h
#include <stdio.h>
#pragma once

typedef char element;

typedef struct treeNode {
    element data;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode);
void preorder1(treeNode* root);
void inorder(treeNode* root);
void postorder1(treeNode* root);

#endif /* traversalBT_h */
