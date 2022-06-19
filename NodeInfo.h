#ifndef NODEINFO_H
#define NODEINFO_H
#include "string"
struct Data{
	int id;
	std::string data;
};
struct Node{
	Data data;
	Node* next;
	Node* prev;
};
#endif
