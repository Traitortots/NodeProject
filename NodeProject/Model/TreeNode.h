//
//  TreeNode.hpp
//  NodeProject
//
//  Created by Kerr, Jared on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TREE_NODE_H_
#define TREE_NODE_H_

#include "Node.h"

template <class Type>
class TreeNode: public Node<Type>
{
public:
    TreeNode();
    TreeNode(const Type& value);
    TreeNode(const Type& value, TreeNode<Type>* parent);
    
    TreeNode<Type>* getParent();
    void setParent(TreeNode<Type>* parent);
    TreeNode<Type>* getLeftChild();
    void setLeftChild(TreeNode<Type>* leftChild);
    TreeNode<Type>* getRightChild();    
    void setRightChild(TreeNode<Type>* reftChild);
    
private:
    TreeNode<Type>* parent;
    TreeNode<Type>* leftChild;
    TreeNode<Type>* rightChild;
};

#endif /* TreeNode_hpp */
