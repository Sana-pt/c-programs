#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vehicle
{
    char ownerName[50];
    char vehicleName[50];
    char vehicleModel[50];
    int numTyres;
};

void createVehicle(struct Vehicle v[],int*count);
void displayVehicle(struct Vehicle v[],int*count,int tyres);
void displayMenu(struct Vehicle v[],int*count);

int main()
{
    struct Vehicle v[100];
    int count=0;
    int choice;


do
{
    printf("Menu of vehicles:\n");
    printf("1. create Vehicle\n");
    printf("2. display Vehicle\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        createVehicle(v,&count);
        break;
        case 2:
        displayMenu(v,&count);
        break;
        case 3:
        printf("Exit\n");
        break;
        default:
        printf("Invalid.Please try again.\n");
    }
} while(choice!=3);
return 0;
}

void createVehicle(struct Vehicle v[],int*count)
{
    printf("\nEnter Vehicle Owner name: ");
    scanf("%s", v[*count].ownerName);
    printf("Enter Vehicle name: ");
    scanf("%s", v[*count].vehicleName);
    printf("Enter Vehicle model: ");
    scanf("%s", v[*count].vehicleModel);
    //  printf("Enter Number of tyres: ");
    //  scanf("%d", &v[*count].numTyres);
      int tyres;
      printf("Enter Number of tyres: ");
        scanf("%d", &tyres);
    do
    {
        // printf("Enter Number of tyres: ");
        // scanf("%d", &tyres);
        // printf("\n");
        {
        if(tyres==2||tyres==3||tyres==4)
        {
            v[*count].numTyres=tyres;
            break;
        }
        else
        {
            printf("Invalid number of tyres.\n");
        
        printf("Enter Number of tyres 2 or 3 or 4: ");
        scanf("%d", &tyres);
        v[*count].numTyres=tyres;
        }
    }
    }while(1);
     
    (*count)++;
    printf("Vehicle added successfully.\n");
    
    printf("\n");
}
void displayVehicle(struct Vehicle v[],int*count,int tyres)
{
int temp=0;
printf("Vehicles tyre %d\n",tyres);
    for (int i=0;i<*count;i++)
    {
        if (v[i].numTyres==tyres||tyres== 0)
        {
            printf("Owner Name: %s\n", v[i].ownerName);
            printf("Vehicle Name: %s\n", v[i].vehicleName);
            printf("Vehicle Model: %s\n", v[i].vehicleModel);
            printf("Number of Tyres: %d\n", v[i].numTyres);
           temp=1;
        }
    }
    if(!temp)
    {
        printf("No vehicles are there with %d tyres.\n",tyres);
    }
}
void displayMenu(struct Vehicle v[],int*count)
{
    int choice;
    do{
        printf("Vehicle Menu\n");
        printf("1. 2 Tyres\n");
        printf("2. 3 Tyres\n");
        printf("3. 4 Tyres\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                displayVehicle(v,count, 2);
                break;
            case 2:
                displayVehicle(v,count, 3);
                break;
            case 3:
                displayVehicle(v,count, 4);
                break;
            case 4:
                printf("Exit.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice!=4);
    
    printf("\n");
}




















