//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
#include<stdio.h>

int main()
{
    printf("Please input some charaters to do analysis:");

    int eng = 0;    //ͳ��Ӣ����ĸ
    int space = 0;  //ͳ�ƿո�
    int num = 0;    //ͳ������
    int other = 0;  //ͳ�������ַ�
    char c;

    while((c = getchar()) != '\n')
    {
      	if(c >= 'a' &&c <= 'z' || c >= 'A' && c<='Z')
			eng++;
		else if(c == ' ')
			space++;
		else if(c >= '0' && c <= '9')
			num++;
		else
			other++;
    }
    printf("��ĸ�ĸ����ǣ�%d\n", eng);
    printf("���ֵĸ����ǣ�%d\n", num);
    printf("�ո�ĸ����ǣ�%d\n", space);
    printf("�����ַ��ĸ����ǣ�%d\n", other);
    return 0;
}

