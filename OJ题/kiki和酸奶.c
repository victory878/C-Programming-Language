#include <stdio.h>
int main()
{
    int n, h, m;
    int residue = 0;
    scanf("%d %d %d", &n, &h, &m);
    if(m%h == 0)
        residue = n-m/h;
    else
        residue = n-m/h-1;
    printf("%d", residue);
    return 0;
}
