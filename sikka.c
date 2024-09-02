
#include<stdio.h>

int main()
{
    int change ;

    printf("Change owned: ");

    scanf("%d", &change);

    int numberof25c, numberof10c , numberof5c , numberof1c ;


    numberof25c = change / 25;
    change = change % 25;

    numberof10c = change / 10;
    change = change % 10;

    numberof5c = change / 5;
    change = change % 5;

    numberof1c = change;


    printf("Number of 25c coins: %d \nNumber of 10c coins: %d \nNumber of 5c coins: %d \nNumber of 1c coins: %d \n ", numberof25c, numberof10c, numberof5c, numberof1c);


    return 0;
}
