/*3����ָ�뷽�������������Ƿ����ֵΪkey��Ԫ�أ���ɾ�������е�ָ��Ԫ�أ�������º���ʵ���书�ܣ�

�������ܣ���������a���Ƿ����ֵΪkey��Ԫ��

����˵���������׵�ַa�� ���鳤��n, ������Ԫ��key

����ֵ�������ҳɹ��򷵻�ֵΪ��һ��keyֵԪ���±�, ���򷵻أ�1
*/
/* �������ܣ�ɾ������a���±�Ϊk��Ԫ��
   ����˵���������׵�ַa�� ���鳤��n, ��ɾ��Ԫ���±�k
   ����ֵ��  ���ɹ�ɾ��a[k]�򷵻�1����k>=n����ɾ���򷵻�0
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
