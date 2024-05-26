#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int i = 100;
    int *p = &i;
    printf("%d\n", p);
    int *temp;
    temp = p;
    printf("%d\n", temp);
    p = p + 3;
    printf("%d", p);
    printf("\nPointer subtraction %d - %d = %d", p, temp, p - temp);
    return 0;
}
