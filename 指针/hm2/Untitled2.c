//2��Ѱ��n��Ԫ�ص��������������Ԫ�ص�λ��

#include<stdio.h>

 //�������Ԫ�صĵ�ַ
int* max( int *a , int n)
{
    int max = *a;
    int i;
    for(i = 1; i < n; i++)
    {
        if(*(a+i) > max)
            max = *(a+i);
    }
    for(i = 0; i < n; i++)
    {
        if(*(a+i) == max)
            return a+i;
    }
}

void main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 10};
    int res = max(arr, 10);
    printf("���ֵ�������е�λ���ǣ�%p", res);
}
