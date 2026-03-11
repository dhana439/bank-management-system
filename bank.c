#include<stdio.h>
#include<stdlib.h>

struct bank{
    int accno;
    char nameofaccholder[50];
    float balance;
}s;

void deposit();
void withdraw();
void display();

void main()
{
    int ch;

    printf("Enter accno name balance:\n");
    scanf("%d %s %f",&s.accno,s.nameofaccholder,&s.balance);

    printf("Account Details:\n");
    printf("%d %s %f\n",s.accno,s.nameofaccholder,s.balance);

    printf("1.Deposit 2.Withdraw 3.Display\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: deposit();
                break;
        case 2: withdraw();
                break;
        case 3: display();
                break;
        default: printf("Wrong choice");
                 exit(0);
    }
}

void deposit()
{
    int amt;
    printf("Enter amount to deposit: ");
    scanf("%d",&amt);

    if(amt>0)
    {
        s.balance = s.balance + amt;
    }

    printf("Balance = %f\n",s.balance);
}

void withdraw()
{
    int amt;
    printf("Enter amount to withdraw: ");
    scanf("%d",&amt);

    if(s.balance>0 && amt<=s.balance)
    {
        s.balance = s.balance - amt;
    }

    printf("Balance = %f\n",s.balance);
}

void display()
{
    printf("Balance = %f\n",s.balance);
}