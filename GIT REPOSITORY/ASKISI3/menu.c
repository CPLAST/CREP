#include <stdio.h>
 
/*Main Menu*/
 
 
int main ()
{
    int choice;
 
 
    printf("\n \t\t Actions \n");
    printf("\t 1.push_back \n");
    printf("\t 2.push_front \n");
    printf("\t 3.insert_at_position \n");
    printf("\t 4.print_list \n");
    printf("\t 5.delete_from_position \n");
    printf("\t 6.bubble_sort \n");
    printf("\t 7.reverse \n");
    printf("\t 0. Exit \n\n");
     
 
 
    printf("Please choose which action you would like:  \n");
    scanf("%d", &choice);
    printf("Choice = %d \n", choice);
     
    switch (choice)
    {
        case 1 : printf("You have chosen push_back %d \n", choice) ; break;
        case 2 : printf("You have chosen push_front %d \n", choice) ; break;
        case 3 : printf("You have chosen insert_at_position %d \n", choice) ; break;
        case 4 : printf("You have chosen print_list %d \n", choice) ; break;
        case 5 : printf("You have chosen delete_from_position %d \n", choice) ; break;
        case 6 : printf("You have chosen bubble_sort %d \n", choice) ; break;
        case 7 : printf("You have chosen reverse %d \n", choice) ; break;
        case 0 : printf("You have chosen %d to exit \n", choice) ; return ; break;
 
 
        default : printf("This is not a valid choice. Please choose again"); break;
    } 
     
     
    return 0;
}