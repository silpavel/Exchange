#pragma once
#ifndef TREE_H
#define TREE_H
//sport table
struct Elem {
	int ownerPoints;//очки хозяина
	int oppPoints;//очки оппонента
	char match[10];//очки команды
	char name[20];//имя команды хозяина
	char opponent[20];//имя противника
	Elem *left, *right, *parent;
};
class Tree {
	Elem *root;
public:
	Tree();
	~Tree();
	void print(Elem* node);
	Elem* search(Elem*, char* key);
	Elem* min(Elem*);
	Elem* max(Elem*);
	Elem* next(Elem*);
	Elem* prev(Elem*);
	void insert(Elem* z);
	void del(Elem* z = 0);
	Elem* getRoot();
};
#endif //!TREE_H
