#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int count = 0;

typedef struct
{
    char item_code[11];
    char item_name[50];
    int item_quantity;
    double item_price;
} stockDescription;

void new_item();
void code_verification();
void show_items();
void update_info();
void delete_item();
void search_item();

int main()
{
    int main_option;
    int another_record;

    char username[20];
    char passcode[9];
    int i = 0;

    /*This is the user log-in section*/
    do
    {
        system("cls");
        printf("\n\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
        printf("\t\t                                     Programmed by: Neil Dojeta :)                                 \n\n");
        printf("\t\t     Please log-in first to access the system                                                      \n\n\n");
        printf("\t\t                                ---------------------------------------                              \n");
        printf("\t\t                                Enter the username: ");
        scanf("%s", username);
        printf("\t\t                                Enter the passcode: ");

        for (int i = 0; i < 8; i++)
        {
            passcode[i] = getch();
            printf("*");
        }
        count++;

        if (strcmp(username, "neilDojeta") == 0)
        {
            if (strcmp(passcode, "01232003") == 0)
            {
                printf("\n\n\t\t                                Log-in Successful!");
                break;
            }
            else
            {
                printf("\n\n\t\t                                Incorrect passcode. Please try again.");
            }
        }
        else
        {
            printf("\n\n\t\t                                Incorrect username. Please try again.");
        }

        printf("\n\t\t                                ---------------------------------------                              \n");
        printf("\n\t\t                                      Press any key to continue");
        getch();

    } while (count < 3);
    if (count == 3)
    {
        printf("\n\n\t\t                                Attemps have already reached the limit.");
        printf("\n\t\t                                      The program will now close.");
        printf("\n\t\t                                   Restart the program and try again.");
        printf("\n\t\t                                ---------------------------------------                              \n");
        printf("\n\t\t                                    Press any key to continue.....");
        getch();
        return 0;
    }

    /*This is the Main Menu of the Program*/
    while (main_option != 0)
    {
        system("cls");
        printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
        printf("\t\t                                     Programmed by: Neil Dojeta :)                                 \n\n");
        printf("\t\t                                ---------------------------------------                              \n");
        printf("\t\t                                     [1] Add New Item                                              \n");
        printf("\t\t                                     [2] Show All Saved Items                                      \n");
        printf("\t\t                                     [3] Update Item Information                                   \n");
        printf("\t\t                                     [4] Delete An Item                                            \n");
        printf("\t\t                                     [5] Search For An Item                                        \n");
        printf("\t\t                                     [6] Exit                                                      \n");
        printf("\t\t                                ---------------------------------------                              \n");

        printf("\n\n\t\t                                  Enter your option: ");
        scanf("%d", &main_option);

        switch (main_option)
        {
        case 1: //Menu for adding items
            do
            {
                new_item();

            AGAIN1:
                printf("\n\t\t                               Do you want to add another item?\n");
                printf("\t\t                                    [1] Yes          [2] No \n");
                printf("\t\t                               Enter your option: ");
                scanf("%d", &another_record);
                if (another_record != 1 && another_record != 2)
                {
                    printf("\n\t\t                                  Invalid Input. Please try again.\n");
                    printf("\n\t\t                            Press any key to continue.....");
                    getch();
                    goto AGAIN1;
                }

            } while (another_record == 1);
            if (another_record == 2)
            {
                printf("\n\t\t                            Press any key to continue.....");
                getch();
            }
            break;

        case 2: //Menu for showing all saved items.
            show_items();
            break;

        case 3: //Menu for updating information of items.
            do
            {
                update_info();

            AGAIN3:
                printf("\n\t\t                               Do you want to update another item?\n");
                printf("\t\t                                     [1] Yes          [2] No \n");
                printf("\t\t                               Enter your option: ");
                scanf("%d", &another_record);
                if (another_record != 1 && another_record != 2)
                {
                    printf("\n\t\t                                  Invalid Input. Please try again.\n");
                    printf("\n\t\t                            Press any key to continue.....");
                    getch();
                    goto AGAIN3;
                }

            } while (another_record == 1);
            if (another_record == 2)
            {
                printf("\n\t\t                            Press any key to continue.....");
                getch();
            }
            break;

        case 4: //Menu for deleting an item.
            do
            {
                delete_item();

            AGAIN4:
                printf("\n\t\t                               Do you want to delete another item?\n");
                printf("\t\t                                     [1] Yes          [2] No \n");
                printf("\t\t                               Enter your option: ");
                scanf("%d", &another_record);
                if (another_record != 1 && another_record != 2)
                {
                    printf("\n\t\t                                  Invalid Input. Please try again.\n");
                    printf("\n\t\t                            Press any key to continue.....");
                    getch();
                    goto AGAIN4;
                }

            } while (another_record == 1);
            if (another_record == 2)
            {
                printf("\n\t\t                            Press any key to continue.....");
                getch();
            }
            break;

        case 5: //Menu for searching an item and it's data.
            do
            {
                search_item();

            AGAIN5:
                printf("\n\t\t                               Do you want to search another item?\n");
                printf("\t\t                                     [1] Yes          [2] No \n");
                printf("\t\t                               Enter your option: ");
                scanf("%d", &another_record);
                if (another_record != 1 && another_record != 2)
                {
                    printf("\n\t\t                                  Invalid Input. Please try again.\n");
                    printf("\n\t\t                            Press any key to continue.....");
                    getch();
                    goto AGAIN5;
                }

            } while (another_record == 1);
            if (another_record == 2)
            {
                printf("\n\t\t                            Press any key to continue.....");
                getch();
            }
            break;

        case 6: //Menu for exit.
            printf("\n\t\t                         Thank you for using the program!!! - Neil Dojeta :)\n");
            printf("\t\t                                    The program is now closing...");
            printf("\n\t\t                                Press any key to exit.....");
            getch();
            return 0;
            break;

        default: //Prints if a different data was inputted.
            printf("\n\t\t                                  Invalid Input. Please try again.\n");
            printf("\n\t\t                                  Press any key to continue.....");
            getch();
            break;
        }
    }
}

/*Adds new item to the system*/
void new_item()
{
    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "ab+");
    if (p_menuFile == NULL)
    {
        printf("The file cannot be found.");
    }

    stockDescription itemDescription;

    code_verification(); //Checks if a code already exist in the system.

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t                  ========================># Add New Item #<=========================\n\n\n");
    printf("\t\t                            -----------------------------------------------                              \n");
    printf("\t\t                            Re-enter the code of the item: ");
    scanf("%s", itemDescription.item_code);
    printf("\t\t                            Enter the name of the item: ");
    getchar();
    gets(itemDescription.item_name);
    printf("\t\t                            Enter the quantity of the item: ");
    scanf("%d", &itemDescription.item_quantity);
    printf("\t\t                            Enter the price for each item: ");
    scanf("%lf", &itemDescription.item_price);
    printf("\t\t                            -----------------------------------------------                              \n");

    fwrite(&itemDescription, sizeof(itemDescription), 1, p_menuFile);

    printf("\n\t\t                            The data have been stored successfully!");

    fclose(p_menuFile);
}

/*Displays all of the saved items in the system*/
void show_items()
{
    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "rb");

    if (p_menuFile == NULL)
    {
        printf("The file cannot be found.");
    }

    stockDescription itemDescription;

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t              ========================># Show All  Saved Items #<=========================\n\n\n");

    printf("\t\t  ---------------------------------------------------------------------------------------------------  \n");
    printf("\t\t  %-20s%-50s%-15s%-20s\n", "Item Code", "Item Name", "Quantity", "Price(Php)");
    printf("\t\t  ---------------------------------------------------------------------------------------------------  \n");

    while (fread(&itemDescription, sizeof(itemDescription), 1, p_menuFile) == 1)
    {
        printf("\t\t  %-20s%-50s%-15d%-.2f\n", itemDescription.item_code, itemDescription.item_name, itemDescription.item_quantity, itemDescription.item_price);
    }
    printf("\t\t  ---------------------------------------------------------------------------------------------------  \n");

    printf("\n\t\t                          Press any key to continue.....");
    getch();

    fclose(p_menuFile);
}

/*Modifies the data in the system*/
void update_info()
{
    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "rb");
    FILE *p_tempFile;
    p_tempFile = fopen("temporary_stocks.txt", "wb");

    stockDescription itemDescription;
    stockDescription temp_itemDescription;

    int choice;
    int indicator = 0;

    if (p_menuFile == NULL || p_tempFile == NULL)
    {
        printf("Error. The file cannot be found.\n");
    }

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t              ========================># Update Item Information #<=========================\n\n\n");
    printf("\t\t                            -----------------------------------------------                              \n");
    printf("\t\t                            Enter the code of the item: ");
    getchar();
    gets(temp_itemDescription.item_code);
    printf("\t\t                            -----------------------------------------------                              \n\n\n");

    while (fread(&itemDescription, sizeof(itemDescription), 1, p_menuFile) == 1)
    {
        if (strcmp(itemDescription.item_code, temp_itemDescription.item_code) == 0)
        {
            indicator++;
            printf("\t\t\t                     ---------------># Pick an Option #<---------------\n");
            printf("\t\t\t                                 [1] Update Item Name\n");
            printf("\t\t\t                                 [2] Update Item Quantity\n");
            printf("\t\t\t                                 [3] Update Item Price\n\n");
            printf("\t\t\t                                     Enter you choice: ");
            scanf("%d", &choice);
            printf("\t\t\t                     --------------------------------------------------\n\n");

            if (choice == 1)
            {
                printf("\n\t\t\t                         Enter the NEW item NAME: ");
                getchar();
                gets(temp_itemDescription.item_name);
                strcpy(itemDescription.item_name, temp_itemDescription.item_name);

                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
                printf("\n\t\t\t                         Item name was updated successfully!\n\n");
            }
            else if (choice == 2)
            {
                printf("\n\t\t\t                         Enter the NEW item QUANTITY: ");
                scanf("%d", &temp_itemDescription.item_quantity);
                itemDescription.item_quantity = temp_itemDescription.item_quantity;

                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
                printf("\n\t\t\t                         Item quantity was updated successfully!\n\n");
            }
            else if (choice == 3)
            {
                printf("\n\t\t\t                         Enter the NEW item PRICE: ");
                getchar();
                scanf("%lf", &temp_itemDescription.item_price);
                itemDescription.item_price = temp_itemDescription.item_price;

                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
                printf("\n\t\t\t                         Item price was updated successfully!\n\n");
            }
            else
            {
                printf("\n\t\t\t                    Error. Invalid Input.");
                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
            }
        }
        else
        {
            fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
        }
    }
    fclose(p_menuFile);
    fclose(p_tempFile);

    remove("stocks.txt");
    rename("temporary_stocks.txt", "stocks.txt");

    if (indicator == 0)
    {
        printf("\n\t\t                            Item code was not found. Please try again.");
    }

    printf("\n\t\t                            Press any key to continue.....");
    getch();
}

/*Deletes a data in the system*/
void delete_item()
{
    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "rb");
    FILE *p_tempFile;
    p_tempFile = fopen("temporary_stocks.txt", "wb");

    stockDescription itemDescription;
    stockDescription temp_itemDescription;

    int choice;
    int indicator = 0;

    if (p_menuFile == NULL || p_tempFile == NULL)
    {
        printf("Error. The file cannot be found.\n");
    }

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t                  ========================># Delete An Item #<=========================\n\n\n");
    printf("\t\t                            -----------------------------------------------                              \n");
    printf("\t\t                            Enter the code of the item: ");
    getchar();
    gets(temp_itemDescription.item_code);
    printf("\t\t                            -----------------------------------------------                              \n\n\n");

    while (fread(&itemDescription, sizeof(itemDescription), 1, p_menuFile) == 1)
    {
        if (strcmp(itemDescription.item_code, temp_itemDescription.item_code) == 0)
        {
            indicator++;
            printf("\t\t                            -----------------------------------------------                              \n\n\n");
            printf("\t\t                               Are you sure you want to delete the data: \n");
            printf("\t\t                                          Item (%s)\n", itemDescription.item_code);
            printf("\t\t                                        [1] Yes          [2] No \n");
            printf("\t\t                               Enter your option: ");
            scanf("%d", &choice);
            printf("\t\t                            -----------------------------------------------                              \n\n\n");

            if (choice == 1)
            {
                printf("\t\t                            The data was successfully deleted! \n");
            }
            else if (choice == 2)
            {
                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
            }
            else
            {
                printf("\t\t                           Error. Invalid Option. \n");
                fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
            }
        }
        else
        {
            fwrite(&itemDescription, sizeof(itemDescription), 1, p_tempFile);
        }
    }
    fclose(p_menuFile);
    fclose(p_tempFile);

    remove("stocks.txt");
    rename("temporary_stocks.txt", "stocks.txt");

    if (indicator == 0)
    {
        printf("\n\t\t                            Item code was not found. Please try again.");
    }
    printf("\n\t\t                            Press any key to continue.....");
    getch();
}

/*Search for an item in the system*/
void search_item()
{
    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "rb");

    stockDescription itemDescription;

    char itemCode[11];
    int indicator = 0;

    if (p_menuFile == NULL)
    {
        printf("The file cannot be found.");
    }

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t                  ========================># Search An Item #<=========================\n\n\n");
    printf("\t\t                            -----------------------------------------------                              \n");
    printf("\t\t                            Enter the code of the item: ");
    getchar();
    gets(itemCode);
    printf("\t\t                            -----------------------------------------------                              \n\n\n");

    while (fread(&itemDescription, sizeof(itemDescription), 1, p_menuFile) == 1)
    {
        if (strcmp(itemDescription.item_code, itemCode) == 0)
        {
            indicator++;
            printf("\t\t                   Item Code (%s)\n", itemDescription.item_code);
            printf("\t\t             ===============================================================\n");
            printf("\t\t                   Item Name: %s\n", itemDescription.item_name);
            printf("\t\t                   Item Quantity: %d pieces\n", itemDescription.item_quantity);
            printf("\t\t                   Item Price: Php %.2f\n", itemDescription.item_price);
            printf("\t\t             ===============================================================\n\n");
        }
    }
    if (indicator == 0)
    {
        printf("\n\t\t                            Item code was not found. Please try again.");
        fwrite(&itemDescription, sizeof(itemDescription), 1, p_menuFile);
    }
    fclose(p_menuFile);

    printf("\n\t\t                            Press any key to continue.....");
    getch();
}

/*Checks if an item code already exist*/
void code_verification()
{

    FILE *p_menuFile;
    p_menuFile = fopen("stocks.txt", "rb");

    stockDescription itemDescription;

    char itemCode[11];
    int indicator = 0;

    if (p_menuFile == NULL)
    {
        printf("The file cannot be found.");
    }

    system("cls");
    printf("\n\t\t  ====================================# STOCK MANAGEMENT SYSTEM #====================================\n");
    printf("\t\t                  ========================># Add New Item #<=========================\n\n\n");
    printf("\t\t                            -----------------------------------------------                              \n");
    printf("\t\t                            Enter the code of the item: ");
    getchar();
    gets(itemCode);
    printf("\t\t                            -----------------------------------------------                              \n\n\n");

    while (fread(&itemDescription, sizeof(itemDescription), 1, p_menuFile) == 1)
    {
        if (strcmp(itemDescription.item_code, itemCode) == 0)
        {
            indicator++;
            printf("\t\t                            ===============================================================\n");
            printf("\t\t                            Item Code (%s) %s\n", itemCode, "already exist. Please try again.");
            printf("\t\t                            The Item Name is: (%s)\n", itemDescription.item_name);
            printf("\t\t                            ===============================================================\n");
        }
    }
    if (indicator == 0)
    {
        printf("\n\t\t                            Item code does not exist. You may continue.");
        fwrite(&itemDescription, sizeof(itemDescription), 1, p_menuFile);
    }
    fclose(p_menuFile);

    printf("\n\t\t                            Press any key to continue.....");
    getch();
}
