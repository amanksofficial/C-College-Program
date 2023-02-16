// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //By Aman__ks_official.
int a,b,c, large;
    printf("enter the three no :->");
    scanf ("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        large=a;
    }
    if (b>a && b>c){
        large=b;
    }
    if (c>a && c>b){
        large=c;
    }
    printf(" %d largest no.", large);

    return 0;
}
