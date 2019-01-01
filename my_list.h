#ifndef MY_LIST_H_INCLUDE
#define MYLIST_H_INCLUDE

#include<stdio.h>

typedef struct my_node{
	void * data;
	struct my_node *next;
}
