#include "paixu.c"
int main()
{      //冒泡排序
       	int arr[N];
       	srand(time(0));
	for(int i=0;i<N;i++)
        arr[i]=rand()%100;
	printf("冒泡排序前:");
	for(int i=0;i<N;i++)
		printf(" %d",arr[i]);
	printf("\n");
	printf("冒泡排序后:");
        BubbleSort(arr,N);
	for(int i=0;i<N;i++)
        printf(" %d",arr[i]);
	printf("\n\n");

	//插入排序
	int brr[N];
        srand(time(0));
        for(int i=0;i<N;i++)
        brr[i]=rand()%100;
	printf("插入排序前:");
	for(int i=0;i<N;i++)
		printf(" %d",brr[i]);
	printf("\n");
	SelectSort(brr,N);
	printf("插入排序后:");
	for(int i=0;i<N;i++)
	printf(" %d",brr[i]);
	printf("\n\n");
        // 选择排序
	 int crr[N];
        srand(time(0));
        for(int i=0;i<N;i++)
        crr[i]=rand()%100;
        printf("选择排序前:");
        for(int i=0;i<N;i++)
        printf(" %d",crr[i]);
        printf("\n");
        SelectSort(crr,N);
        printf("选择排序后:");
        for(int i=0;i<N;i++)
        printf(" %d",crr[i]);

         

	return 0;}

