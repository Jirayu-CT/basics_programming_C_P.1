#include <stdio.h>

int main() {
    
    int a, b, c, d, temp;
    
    printf("Press Input A: ");
    scanf("%d", &a);
    
    printf("Press Input B: ");
    scanf("%d", &b);
    
    printf("Press Input C: ");
    scanf("%d", &c);
    
    printf("Press Input D: ");
    scanf("%d", &d);
    
    if (a>b){
        temp = a;
        a = b;
        b = temp;
        if(d>=a){
            if(c>d){
                c -= a;
                b = a+c+d;
                printf("%d %d %d %d", a, b, c, d);
            }
            else{
                b = a+c+d;
                printf("%d %d %d %d", a, b, c, d);
            }
        }
        else{
            c += a;
            b = a+c+d;
            printf("%d %d %d %d", a, b, c, d);
        }
    }
    
    else{
        if(c>a>=b){
            d += a;
            if(d>a){
                b += 2;
                printf("%d %d %d %d", a, b, c, d);
            }
        }
        else if(d>c){
            b += 2;
            printf("%d %d %d %d", a, b, c, d);
        }
        else{
            b = 2*b;
            printf("%d %d %d %d", a, b, c, d);
        }
    }

    return 0;
}
