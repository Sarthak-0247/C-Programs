// Print the numbers from 0 to n, if n is given by user.
// n=4

#include<stdio.h>

int main(){
    int n, i=0;
    printf("enter number: ");
    scanf("%d", &n);

    // while(i <= n) {
    //     printf("%d\n", i);
    //     i++;
    // }

    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
