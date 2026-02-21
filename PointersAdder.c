#include <stdio.h>


void addNumbers(int a, int b, int *ans){
    
    *ans = a +b;
}


int main() {

    int a = 0;
    int b = 0;
    int ans = 0;
    int *pans = &ans;

    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    addNumbers(a, b, pans);
    printf("Direct 'ans' value; %d", ans);
    printf("\n");
    printf("Using dereference value of 'ans': %d", *pans);


    return 0;
}