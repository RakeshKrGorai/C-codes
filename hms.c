#include<stdio.h>

int main()
{
    int choice;
    printf("Enter The Number For The Which Room You Want to book\n 1. Deluxe - 5000 \n 2. Supreme - 4000 \n 3.Normal - 3000 \n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 : printf("Thanks For Choosing Our Deluxe Room. Enjoy Your Stay");
        case 2 : printf("Thanks For Choosing Our Supreme Room. Enjoy Your Stay");
        case 3 : printf("Thanks For Choosing Our Normal Room. Enjoy Your Stay");
    }
    return 0;
}