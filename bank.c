#include<stdio.h>
struct bank{
    int accno;
    char nameofaccholder[50];
    float balance;
}s;
void main()
{
    int ch;
printf("enter acc,name,balance");
scanf("%d %s %f",&s.accno,&s.nameofaccholder,&s.balance);
printf("%d %s %f",s.accno,s.nameofaccholder,s.balance);
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
    case 1:deposit();
            break;
    case 2:withdraw();
           break;
    case 3:display();
           break;
    default:printf("wrong choice");
            exit;
}
}
void deposit()
{
    int amt;
    printf("enter amount to deposit");
    scanf("%d",&amt);
    if(amt>0)
    {
        balance=balance+amt;
    }
        printf("%d",s.balance);
}
void withdraw()
{
    int amt;
    printf("enter amt to withdraw");
    scanf("%d",&amt);
    if(balance>0 && amt<=balance)
    {
        balance=balance-amt;
    }
    printf("%d",s.balance);
}
void display()
{
    printf("%d",s.balance);
}