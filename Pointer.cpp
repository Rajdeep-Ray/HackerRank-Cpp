#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    int p1=*a,p2=*b;
    *a=p1+p2;
    *b=abs(p1-p2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}