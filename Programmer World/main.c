    /*This project was done by:
 RALPH TAYLOR
 ID#: 1803071*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()

/*This programme is desighned to be used by the
Student's Union as a TEXTBOOK RENTAL SYSTEM*/

{
    int loggpercon=0,invoice=0,sourceaqu=0, lognum, sourcenum=0,donatednum1, donatednum2,donatednum3, count;
    float totalrent, purchased=0, rentalfee=0;

    char isbn[19];
    char title [45] = "";
    char condition [20]= "";
    char source [20]="";
    char XXX [6];
    char xxx [5];

    /*These variables are created based on the input values,
     and anyother value that was in need of a variable to help the program to run.
     These values presented are used in the progression of the program*/

         sourcenum=0;
        lognum=0;
       count=0;

/*Initialized variables to help in the program in regards to the programs output*/

    printf("Good day user");
    printf("\n\n");
    printf("If you want to end the programme please enter either XXX OR xxx for the initial ISBN#");
    printf("\nThe Student's Union will NOT purchase a book that EXCEEDS $3,000!!");
    printf("\n\n");
    printf("Please enter your ISBN#:  ");
    scanf("%s", isbn);

    fflush(stdin);

    while (strcmp(isbn,"XXX")!=0 &&strcmp(isbn,"xxx")!=0)

    /*This while statement means that the program should continue
     to print the statements in the body of this loop until
      the user inputs the values: 'XXX' or 'xxx'*/

{
    fflush(stdin);

    printf("Please enter your Book's Title:  ");
    gets(title);
    printf("\n");

    while (strcmp(condition,"EXCELLENT")!=0&&strcmp(condition,"GOOD")!=0&&strcmp(condition,"FAIR")!=0)
 {
      printf("\n EXCELLENT \n FAIR \n GOOD, (NOTE THE CAPITAL LETTERS!!");
    printf("\n\nPlease enter the condition as presented:  ");
    scanf("%s", condition);
}

    loggpercon=loggpercon+1;

     while(strcmp(source,"purchased")!=0&&strcmp(source,"donated")!=0)
    {
        printf("\n'Source', means whether the book was 'purchased' or 'donated',(enter the words presented in COMMON LETTERS)");
   printf("\n Please state the source of the book presented:  ");
   scanf("%s", source);

    }

   sourceaqu= sourceaqu+1;

   if (strcmp(source,"purchased")==0)
   {

   printf("\nPlease enter the amount of money paid to purchase: \n");
   scanf("%f",&purchased);

   /*The input values in the program were just represented*/

     while (purchased> 3000)
 {

     printf("\nPLEASE ENTER A BOOK LESS THAN OR EQUAL TO $3,000: ");
     scanf("%f",&purchased);

       /*The if statement was used so that only books
 of the value $3,000 or less could be an input into the system.
 If it surpasses the value then the program will continue
 to output the statement to input a book vlaue less than $3,000
  or equal to $3,000.*/

}
    rentalfee=purchased*0.75;
    totalrent=rentalfee*count;
}
  /*This If statement is there for the option of purchased
   if the user so entered it, so that if they entered donated they
    wouldn't enter an amount. */

       invoice=invoice+1;
       count= count+1;

    printf("\n************************************\nTHANK YOU FOR YOUR INPUT:)\n************************************");

    if (strcmp(source,"donated")==0)
        if (strcmp(condition,"EXCELLENT")==0)
 {
     donatednum1= count+1;

        rentalfee=1000;
        totalrent=rentalfee*count;
 }
    if (strcmp(source,"donated")==0)
        if(strcmp(condition,"GOOD")==0)
       {
            donatednum2=count+1;

           rentalfee=800;
           totalrent=rentalfee*count;
       }

    if (strcmp(source,"donated")==0)
        if (strcmp(condition,"FAIR")==0)
        {
            donatednum3=count+1;

            rentalfee= 750;
        totalrent=rentalfee*count;
        }

        /*The if statement above is there to provide calculations for the rentalfee if the source selected was donated.*/
            system("cls");

    printf("                               !*INVOICE*!                                       ");
    printf("\n_____________________________________________________________________________");
    printf("\n-----------------------------------------------------------------------------");
    printf("\n=============================================================================");

    printf("\ninvoice number#: %d", invoice);
    printf("\nYour ISBN#               : %s", isbn);
    printf("\nYour books title         : %s", title);
    printf("\nYour books condition is  : %s", condition);
    printf("\nYour books source is     : %s", source);
    printf("\nAmount purchased for is  : %.2f ", purchased);
    printf("\nYour rentalfee is        : %.2f ", rentalfee);

    printf("\n=============================================================================");
    printf("\n-----------------------------------------------------------------------------");
    printf("\n_____________________________________________________________________________");
    printf("\n                              !*INVOICE*!");


getch();
    /*The if statements above were used to calculate the values that are to be an output*/

    /*The invoice is what is presented above that shows
     the input values the user input into the system as an output value.*/

    fflush(stdin);

    system("cls");
        printf("\n\n");

        printf("                           .....^REPORT^......");
        printf("\n(===========================================================================)");
        printf("\nYour logged number of books are                           : %d", count);
        printf("\nYour number of books logged per source of aquisition is   : %d", sourceaqu);
        printf("\nYour total number of books logged per condition is        : %d", loggpercon);
        printf("\nYour total expected rental fees on rented books are       : %.2f", totalrent);
        printf("\n(===========================================================================)");

        printf("\n\n\n\n\n");
        printf("Please enter your ISBN#:  ");
        scanf("%s", isbn);
system("cls");

}

  getch();
  return 0;
}
