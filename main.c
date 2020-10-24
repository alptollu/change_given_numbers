#include <stdio.h>

int main() {

    int a,b,c;

    printf("Please enter a and b:\n");
    scanf("%d%d",&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("Lets change a and b by our algorithm:\n");
    c=a;
    a=b;
    b=c;
    printf("New a:%d\n",a);
    printf("New b:%d",b);

    return 0;
}
