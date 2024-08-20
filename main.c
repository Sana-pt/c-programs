#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person
{
    char name[50];
    int age;
    char phone[15];
    double initial_amount;
};


void addPerson(struct Person people[],int*count);
void display(struct Person people[],int*count);
void deposit(struct Person people[],int*count);
void withdraw(struct Person people[],int*count);

int main() 
{
    struct Person people[100];  
    int count=0;  
    int choice;
  

    do 
    {
        printf("Menu:\n");
        printf("1. Add a Person\n");
        printf("2. Display\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                addPerson(people,&count);
                break;
            case 2:
                display(people,&count);
                break;
            case 3:
                deposit(people,&count);
                break;
            case 4:
                withdraw(people,&count);
                break;
            case 5:
                printf("Exit\n");
                break;
            default:
                printf("Invalid.Please try again.\n");
        }
    } while(choice!=5);

    return 0;
}
void addPerson(struct Person people[],int*count)
{
    char name[50];
    int exists = 0;
    
    printf("Enter name: ");
    scanf("%s", name);
    for (int i=0;i<*count;i++)
    {
        if (strcmp(people[i].name,name)==0) 
        {
            exists=1;
            break;
        }
    }

    if (exists) 
    {
        printf("Name already exists. Please choose a different name.\n");
        return;
    }
       
    strcpy(people[*count].name,name); 
    printf("Enter age: ");
    scanf("%d", &people[*count].age);
    printf("Enter phone number: ");
    scanf("%s", people[*count].phone);
    printf("Enter initial amount: ");
    scanf("%lf", &people[*count].initial_amount);
    (*count)++;
    printf("Person created successfully.\n");
}
void display(struct Person people[],int*count)
{
      if(*count==0) 
    {
        printf("No people to display.\n");
    }
    else
    {
    for(int i=0;i<*count;i++)
    {
        printf("\nPerson:%d\n",i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Phone: %s\n", people[i].phone);
        printf("Balance: %.2f\n", people[i].initial_amount);
    }
}
}
void deposit(struct Person people[],int*count)
{
    char name[50];
    double amount;
    int temp=0;
    printf("Enter the name of the person to deposit: ");
    scanf("%s",name);
    
    for(int i=0;i<*count;i++)
    {
          if(strcmp(people[i].name,name)==0)
          {
            temp=1;
            printf("Enter amount to deposit: ");
            scanf("%lf",&amount);
            people[i].initial_amount+=amount;
            printf("Deposit successful.New Balance:%.2f\n",people[i].initial_amount);
            break;
          }
    }
    
}
void withdraw(struct Person people[],int*count)
{
    char name[50];
    double amount;
    int temp=0;
    printf("Enter the name of the person to withdraw: ");
    scanf("%s",name);
    
     for(int i=0;i<*count;i++)
    {
          if(strcmp(people[i].name,name)==0)
          {
            temp=1;
            printf("Enter amount to withdraw: ");
            scanf("%lf",&amount);
            if(amount>people[i].initial_amount)
            {
                printf("Invalid amount.\n");
            }
            else
            {
               people[i].initial_amount=people[i].initial_amount-amount;
               printf("Withdraw successful.New Balance:%.2f\n",people[i].initial_amount);
               break;
              
            }
            

}
}
}




