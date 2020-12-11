 /* Nathan Fan, Sifat Jamaly */
 /* 040989678, 040842225 */
 /* Assignment 2*/
 /* CST 8234 C Language */
 /* Lab section 022 */
 /* Natalize Gluzman */
 /* Due: 12/10/2020 */
 /* Submitted: 12/10/2020 */
 /* Includes: dice.c, Game_Functions.c, Game_Functions.h, Makefile */
/**************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Game_Functions.h"

int total, win = 0, lose = 0;

/*******************************************************************************************************************************/
/* main */
/* This main function simulates a dice rolling game */
/* Input: N/A */
/* Output: EXIT_SUCCESS */
/* vr. 1.0 */
/* Nathan Fan, Sifat Jamaly */
/*******************************************************************************************************************************/
int main () {
   	char decide;    
      
    /* loops until user quits */
    do{
        /* ask user to play and get answer */
        (win + lose == 0) ? (printf("\nWould you like to play? [y/n]: ")) : (printf("\nAnother Game? [y/n]: ")) ;
        scanf(" %c", &decide);
        
        /* flush out unnecessary input */
        int ignore;
        while ((ignore = getchar()) != '\n' && ignore != EOF ) {continue; }
       
        /* user chooses to play */
        if (decide == 'y' || decide == 'Y'){

            /* play match and tally/print the results */	
            playGame();
        }
        /* extraneous choice */
        else if (decide != 'y' && decide != 'Y' && decide != 'n' && decide != 'N'){
            printf("\nPlease only enter y for new game and n for quit");
        }

    } while (decide != 'n' && decide != 'N');

    /* print quit statements */
    endingMessages();
	
    return EXIT_SUCCESS;
}