/*

Author: Borgas
Purpose:
Blackjack game made by me for to help me learn and get used to programming in C
*/

#include <stdio.h> //Library for Input Output handling
#include <stdlib.h>
#include "Deck.h" //Handles the Deck building


void menu(){
    int8_t loop = 1;
    while (loop == 1){
        printf("====== Menu ====== \nPlease choose an option:\n");
        printf("9. see all cards\n");
        printf("0. Quit\n");
        
        int choice = 0;
        printf("Your input: ");
        scanf("%d",&choice);

        switch (choice){
        case 9:
            print_cards();
            break;
        
        case 0:
            loop = 0;
            printf("Quitting\n");
            break;
        
        default:
            printf("Not a choice\n\n");
            break;
        }
    }
}

int main(){
    menu();
    return 0;
}
