#include <stdio.h>              /* ����Ԥ�������� */
int main(void)                    /* ������ */
{
    int n;                      /* �������� */
    int factorial(int n);         /* �������� */

    scanf("%d", &n);            /* ����һ������ */
    printf("%d\n", factorial(n));  /* ���ú�������׳� */

    return 0;
}

int factorial(int n)       /* ������� n! �ĺ��� */
{
    int i, fact = 1;

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}
