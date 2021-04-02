#include <stdio.h>
int main()
{
    char *k[3] = {"abc", "de", "fgh"};
    char *p1 = k[0], *p2 = k[1], *p3 = k[2];
    printf("p1 : %p, p2 : %p, p3 : %p\n", p1, p2, p3);
    printf("%s\n", p1);
    puts(p2);
    while(*p3 != 0)
        putchar(*p3++);
    return 0;
}
