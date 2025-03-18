/*This is where we define the playing card deck*/
#include <stdint.h>
#include <string.h>


const char* card[13] = {
    "Ace",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Jack",
    "Queen",
    "King"};

const char* suit[4] = {
    "Hearts",
    "Diamons",
    "Clubs",
    "Spades"};

char* deck[52];

void init_deck(){
    for(int i = 0; i < sizeof(deck); i++){
        deck[i] = "s";
    }
}

void deck_print(){
    printf("======== Deck ========\n");
    for(int8_t i = 0; i < sizeof(deck)/sizeof(deck[0]); i++){
        printf("%s \n", suit[i]);
    }
}

void print_cards(){
    printf("======== The suits are: ========\n");
    for(int8_t i = 0; i < sizeof(suit)/sizeof(suit[0]); i++){
        printf("%s \n", suit[i]);
    }
    printf("======== The cards are: ========\n");
    for(int8_t i = 0; i < sizeof(card)/sizeof(card[0]); i++){
        printf("%s \n", card[i]);
    }
}

