#ifndef BinaryNode_H
#define BinaryNode_H

template<class K, class T>
class BinaryNode
{
private:
	K key;
	T pdata;

	BinaryNode<K, T> *left;
	BinaryNode<K, T> *right;

public:
	BinaryNode();
	BinaryNode(T);
	BinaryNode(K, T);

	void setLeft(BinaryNode<K, T> *);
	void setRight(BinaryNode<K, T> *);
	void setpData(T);
	void setKey(K);

	bool isLeaf() const;
	bool hasLeftChild() const;
	bool hasRightChild() const;

	BinaryNode<K, T>* getRight();
	BinaryNode<K, T>* getLeft();
	T getpdata();
	K getKey();
};
#include "BinaryNode.cpp"
#endif // !BinaryNode_H