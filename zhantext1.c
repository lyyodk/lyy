#include"zhan.c"
int main() {
  int n;
  printf("输入十进制数：\n");
  scanf("%d", &n);
    printf("%d的二进制数为：", n);
    Conversion(n, 2);
    printf("%d的八进制数为：", n);
    Conversion(n, 8);
    printf("%d的十六进制数为：", n);
    Conversion(n, 16);
  
}
