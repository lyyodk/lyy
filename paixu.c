#include "paixu.h"
//冒泡排序
void BubbleSort(int arr[], int n)
{
  //从小到大排序 相邻来两个数比较，将大的数字往后放
  for (int i = 0; i < n - 1; i++)      //n-1是因为数组下标最大为n-1 要进行10轮比较
  {
    //n-1是因为数组下标最大为n-1 要进行10次比较，再减i是因为每最后的i个元素已经有序不需要继续排序
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])      //两两比较，将小的数据放前面
      {
        swap(arr, j + 1, j);        //交换arr数组arr[j+1]和arr[j]的值
      }
    }
  }
}
void swap(int arr[], int x, int y)
{
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}
//插入排序
void InsertSort(int arr[], int n)
{
  int tempVal;
  for (int i = 1, j; i < n; i++)
  {
    tempVal = arr[i];  //保存要插入的值
    for (j = i - 1; tempVal < arr[j] && j >= 0; --j)  //数据往后移动，给要插入的值腾位
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = tempVal;  //插入数据
  }
}
//选择排序
void SelectSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        swap(arr, i, j);  //交换arr数组arr[i]和arr[j]的值
      }
    }
  }
}

