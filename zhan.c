#include"zhan.h"
//创建链栈 
LinkStack* InitStack() {
  LinkStack *t = (LinkStack *)malloc(sizeof(LinkStack)); 
  t->next = NULL;
  return t;
}

//判断栈是否为空
int Empty(LinkStack *s) {
  return s->next == NULL;
}

//元素x进栈 
void Push(LinkStack *s, dataType x) {
  LinkStack *t = (LinkStack *)malloc(sizeof(LinkStack)); 
  t->data = x; 
  t->next = s->next; 
  s->next = t; 
}

//出栈 
void Pop(LinkStack *s) {
  if (Empty(s)) exit(1);  
  LinkStack *p = s->next; 
  s->next = p->next; 
  free(p); 
} 

//取栈顶元素的值
dataType GetTop(LinkStack *s) {
  return s->next->data;
}
//将十进制数转换为 2～16 进制数 
char *c = "0123456789ABCDEF";
void Conversion(int n, int d) {
  LinkStack *s = InitStack();  
  while (n) {
    Push(s, n % d);
    n /= d;
  }
  while (!Empty(s)) {
    printf("%c", c[GetTop(s)]);
    Pop(s);
  }
  printf("\n");
}
