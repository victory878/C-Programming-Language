/*3、用指针方法查找数组中是否存在值为key的元素，并删除数组中的指定元素，设计如下函数实现其功能：

函数功能：查找数组a中是否存在值为key的元素

参数说明：数组首地址a， 数组长度n, 待查找元素key

返回值：若查找成功则返回值为第一个key值元素下标, 否则返回－1
*/
/* 函数功能：删除数组a中下标为k的元素
   参数说明：数组首地址a， 数组长度n, 待删除元素下标k
   返回值：  若成功删除a[k]则返回1，若k>=n不能删除则返回0
*/

#include<stdio.h>

int find( int* a, int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(*(a+i) == key)
            return i;
    }
    return -1;
}

int delete1( int* a, int n, int k)
{
    int i;
    if(k >= n)
        return 0;
    else
    {
        for(i = k; i < n; i++)
            *(a+i) = *(a+i+1);
        return 1;
    }

}

void main()
{
    int arr[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int res = find(arr, 10, 4);
    printf("%d\n", res);
    if(res != -1)
        delete1(arr, 10, res);


}
