#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_USERS 100


typedef struct
{
    char name[50];
    char author[50];
    float price;
}Book;

typedef struct
{
    char name[50];
    int age;
    char place[50];
    char username[50];
    char password[50];
}User;


void adminMenu();
void addBook();
void userMenu();
void updateBook();
void deletebook();
void displayBooks();
void registration();
void userLogin();
void displayBooksUser();
void searchBook();

Book books[MAX_BOOKS];
int bookCount=0;

User users[MAX_USERS];
int userCount=0;

int main() 
{
    int choice;
    do
    {
        printf("   Main Menu:\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                adminMenu();
                break;
            case 2:
                userMenu();
                break;
            case 3:
                printf("Exit.\n");
                return 0;
            default:
                printf("Invalid.\n");
        }
    }while(choice!=3);
    return 0;
}

void adminMenu()
{
    char adminUsername[]="aaa";
    char adminPassword[]="ppp";
    char username[50], password[50];

    printf("Enter Admin Username: ");
    scanf("%s",username);
    printf("Enter Admin Password: ");
    scanf("%s",password);

    if(strcmp(username,adminUsername)==0&&strcmp(password,adminPassword)==0)
    {
        int choice;
        do
        {
            printf("\n   Admin Menu:\n");
            printf("1. Add Book\n");
            printf("2. Display Books\n");
            printf("3. Update Book\n");
            printf("4. Delete Book\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);

            switch (choice)
            {
                case 1:
                    addBook();
                    break;
                case 2:
                    displayBooks();
                    break;
                case 3:
                    updateBook();
                    break;
                case 4:
                deletebook();
                    break;
                case 5:
                    return;
                default:
                    printf("Invalid.\n");
            }
        }while (choice!=5);
        
    } 
    else 
    {
        printf("Invalid.\n");
    }
}

// 
void addBook()
{
    
    if(bookCount<MAX_BOOKS) 
    {
        printf("Enter Book Name: \n");
        scanf("%s",books[bookCount].name);
        for(int i=0;i<bookCount;i++)
        {
        if (strcmp(books[i].name,books[bookCount].name)==0)
        {
            printf("Invalid\n");
            return addBook();
        }
        }
        
        
        
        printf("Enter Book Author: \n");
        scanf("%s",books[bookCount].author);
        printf("Enter Book Price: \n");
        scanf("%f",&books[bookCount].price);
        bookCount++;
        printf("Added successfully.\n");
    } 
    else 
    {
        printf("Book full.\n");
    }
}

void displayBooks()
{
    if(bookCount==0)
    {
        printf("No books available.\n");
        return;
    }
    
    for(int i=0;i<bookCount;i++) 
    {
        printf("\nBook %d:\n",i+1);
        printf("Name: %s\n",books[i].name);
        printf("Author: %s\n",books[i].author);
        printf("Price: %.2f\n",books[i].price);
    }
    
}

void updateBook()
{
    char bookName[50];
    int flag=0;

    printf("Enter the name of the book to update: ");
    scanf("%s",bookName);

    for(int i=0;i<bookCount;i++)
    {
        if (strcmp(books[i].name,bookName)==0) 
        {
            printf("Enter new Book Name: ");
            scanf("%s", books[i].name);
            
            printf("Enter new Book Author: ");
            scanf("%s", books[i].author);
            printf("Enter new Book Price: ");
            scanf("%f", &books[i].price);
            printf("New Book updated successfully.\n");
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Book not available.\n");
    }
}

void deletebook()
{
    char bookName[50];
    int flag=0;

    printf("Enter the name of the book to delete: ");
    scanf("%s",bookName);

    for(int i=0;i<bookCount;i++)
    {
     if (strcmp(books[i].name,bookName)==0)
     {
        
       for(int j=i;j<bookCount;j++)
       {
            books[j]=books[j+1];
       }
       bookCount--;
       printf("Deleted\n");
        flag=1;
        break;
     }
    }
     if(flag==0)
     {
         
         printf("Book not found\n");
     }

}

void userMenu() 
{
    int choice;
    do
    {
        printf("\n   User Menu:\n");
        printf("1. Registration\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) 
        {
            case 1:
                registration();
                break;
            case 2:
                userLogin();
                break;
            case 3:
                return;
            default:
                printf("Invalid.\n");
        }
    }while(choice!=3);
   
}

void registration() 
{
    if(userCount<MAX_USERS)
    {
        printf("Enter Name: ");
        scanf("%s",users[userCount].name);
        printf("Enter Age: ");
        scanf("%d",&users[userCount].age);
        printf("Enter Place: ");
        scanf("%s",users[userCount].place);
        printf("Enter Username: ");
        scanf("%s",users[userCount].username);
        //  
         for(int i=0;i<userCount;i++)
        {
        if (strcmp(users[i].username,users[userCount].username)==0)
        {
            printf("Invalid\n");
            return registration();
        }
        }
        
        
        printf("Enter Password: ");
        scanf("%s",users[userCount].password);
        userCount++;
        printf("successfully registered.\n");
    } 
    else 
    {
        printf("list is full.\n");
    }
}

void userLogin()
{
    char username[50],password[50];
    int flag=0;

    printf("Enter Username: ");
    scanf("%s",username);
    printf("Enter Password: ");
    scanf("%s",password);

    for(int i=0;i<userCount;i++)
    {
        if(strcmp(users[i].username,username)==0&&strcmp(users[i].password,password)==0)
        {
            printf("Login successful.\n");
            int choice;
            do 
            {
                printf("\n   User Menu:\n");
                printf("1. Display Books\n");
                printf("2. Search Book\n");
                printf("3. Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);

                switch (choice) 
                {
                    case 1:
                        displayBooksUser();
                        break;
                    case 2:
                        searchBook();
                        break;
                    case 3:
                        return;
                    default:
                        printf("Invalid.\n");
                }
            }while(choice!=3);
            
            flag=1;
            break;
        }
    }

    if (flag==0)
    {
        printf("Invalid\n");
    }
}

void displayBooksUser() 
{
    displayBooks();
}

void searchBook() 
{
    char bookName[50];
    int flag=0;

    printf("Enter book name to search: ");
    scanf("%s",bookName);

    for(int i=0;i<bookCount;i++)
    {
        if(strcmp(books[i].name,bookName)==0)
        {
            printf("Searched book:\n");
            printf("Name: %s\n",books[i].name);
            printf("Author: %s\n",books[i].author);
            printf("Price: %.2f\n",books[i].price);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Book not found.\n");
    }
}