// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a, b, c, median;
    
    
    printf("Press Input Number1: ");
    scanf("%d", &a);
    
    printf("Press Input Number2: ");
    scanf("%d", &b);
    
    printf("Press Input Number3: ");
    scanf("%d", &c);
    
    //ascending
    if(a>b){
        int tamp = a;
        a = b;
        b = tamp;
    }
    
    if(b>c){
        int tamp = b;
        b = c;
        c = tamp;
    }
    
    if(a>b){
        int tamp = a;
        a = b;
        b = tamp;
    }
    
    //median
    if(a<=b && b<=c){
        median = b;
    }
    else if(b<=a && a<=c){
        median = a;
    }
    else{
        median = c;
    }
    
    printf("median: %d", median);
    
    return 0;
}
