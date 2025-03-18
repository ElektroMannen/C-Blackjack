/*

Author: Borgas
Purpose:
Blackjack game made by me for to help me learn and get used to programming in C
*/

#include <stdio.h> //Library for Input Output handling
#include <stdlib.h>
#include "Deck.h" //Handles the Deck building

void logo(){
    printf(" ______   _        _______  _______  _       _________ _______  _______  _       \n");
    printf("(  ___ \\ ( \\      (  ___  )(  ____ \\| \\    /\\\\__    _/(  ___  )(  ____ \\| \\    /\\\n");
    printf("| (   ) )| (      | (   ) || (    \\/|  \\  / /   )  (  | (   ) || (    \\/|  \\  / /\n");
    printf("| (__/ / | |      | (___) || |      |  (_/ /    |  |  | (___) || |      |  (_/ /\n");
    printf("|  __ (  | |      |  ___  || |      |   _ (     |  |  |  ___  || |      |   _ ( \n");
    printf("| (  \\ \\ | |      | (   ) || |      |  ( \\ \\    |  |  | (   ) || |      |  ( \\ \\ \n");
    printf("| )___) )| (____/\\| )   ( || (____/\\|  /  \\ \\|\\_)  )  | )   ( || (____/\\|  /  \\ \\\n");
    printf("|/ \\___/ (_______/|/     \\|(_______/|_/    \\/(____/   |/     \\|(_______/|_/    \\/\n");
}

void menu(){
    int8_t loop = 1;
    while (loop == 1){
        printf("====== Menu ====== \nPlease choose an option:\n");
        printf("1. Play\n");
        printf("2. Balance\n");
        printf("3. \n");
        printf("4. \n");
        printf("5. \n");
        printf("6. Shuffle deck\n");
        printf("7. Pull a card from the deck\n");
        printf("8. View deck\n");
        printf("9. see all cards\n");
        printf("0. Quit\n");
        
        int choice = 0;
        printf("Your input: ");
        scanf("%d",&choice);

        switch (choice){
            case 6:
                deck_shuffle();
                break;

            case 7:
                deck_pull_card();
                break;

            case 8:
                deck_print();
                break;
            
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
    logo();
    init_deck();
    menu();
    return 0;
}
