#include<stdio.h>
int main()
{
    int choice;
    float balance,amount;
    printf("enter current balance:");
    scanf("%f",&balance);
    printf("1.balance inquiry");
    printf("\n2 cash withdrawal");
    printf("\n3 cash deposit");
    printf("\n enter your choice");
    scanf("%d,&choice");
    switch (choice)
    {
    case 1:
        printf("\n current balance:%.2f",balance);
        break;
    case 2:
        printf("\n enter withdraw amount:");
        scanf("%f",&amount);
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            printf("\n transaction successful");
            printf("\n remaining balance:%.2f",balance);
        } else
        {
            printf("\n insufficient balance");
            break;
        case 3:
            printf("enter deposit amount:");
            scanf("%f",amount);
            if(amount>0) {
                balance +=amount;
                printf("deposit successful\n");
                printf("update balance:%2f\n",balance);
            } else {
                printf("invalid deposit amount\n");
            }
            break;
        default:
            printf("invalid iption\n");
        }
    }
    return 0;
}    









