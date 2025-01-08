# include<stdio.h>

int main() {
    int weekdays;
    printf("enter weekdays : ");
    scanf("%d", &weekdays);

    switch (weekdays) {
        case 0 : printf("sunday");
                 break;
        case 1 : printf("monday");
                 break;
        case 2 : printf("tuesday");
                 break;
        case 3 : printf("wednesdy");
                 break;
        case 4 : printf("thursday");
                 break;
        case 5 : printf("friday");
                 break;
        case 6 : printf("saturday");
                 break;
        default : printf("not a valid day");
                 break;
        }
        
        return 0;
}