#include <stdio.h>
void swap1(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    return;
}
int main(){
    int x = 1, y = 2;
    swap1(x, y);
    printf("%d %d\n", x, y);
    return 0;
}
