#ifndef _ZHAN_H_
#define _ZHAN_H_
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef int dataType;
typedef struct node{
  dataType data;
  struct node *next;
} LinkStack;
LinkStack* InitStack();
int Empty(LinkStack* s);
void Push(LinkStack *s,dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);
#endif
