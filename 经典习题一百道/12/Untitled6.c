//��һƪ���£����������֣�ÿ����80���ַ���Ҫ��ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ����Э��ĸ�����֡��ո��Լ������ַ��ĸ�����
#include<stdio.h>
int main()
{
    int bigEng=0;
    int smlEng=0;
    int num=0;
    int spa=0;
    int oth=0;
    char text[3][80];

    int i,j;
    for(i = 0; i < 3; i++)
    {
        printf("��������%d:\n", i+1);
        gets(text[i]);
        for(j = 0;j<80 && text[i][j]!='\0'; j++)
        {
        if(text[i][j]>='A' && text[i][j]<='Z')
            bigEng++;
        else if(text[i][j]>='a' && text[i][j]<='z')
            smlEng++;
        else if(text[i][j]>='0' && text[i][j]<='9')
            num++;
        else if(text[i][j]==' ')
            spa++;
        else
            oth++;
        }
    }
    printf("��д��ĸ:%d\n",bigEng);
    printf("Сд��ĸ:%d\n",smlEng);
    printf("����:%d\n",num);
    printf("�ո�:%d\n",spa);
    printf("����:%d\n",oth);
    return 0;
}
