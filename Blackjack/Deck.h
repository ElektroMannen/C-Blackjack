/*This is where we define the playing card deck*/
#include <stdint.h>
#include <string.h>
#include <time.h>

char* card[13] = {
    "Ace ",
    "Two ",
    "Three ",
    "Four ",
    "Five ",
    "Six ",
    "Seven ",
    "Eight ",
    "Nine ",
    "Ten ",
    "Jack ",
    "Queen ",
    "King "};

char* suit[4] = {
    "Hearts",
    "Diamonds",
    "Clubs",
    "Spades"};

char* deck[52];

// runs card 13 times for each suit using for i suit < 4 with for card < 13
void init_deck(){
    int i = 0;
    for(int s = 0; s < sizeof(suit)/sizeof(suit[0]); s++){
        for(int c = 0; c < sizeof(card)/sizeof(card[0]); c++){
            deck[i] = malloc(20);
            strcat(deck[i],card[c]);
            strcat(deck[i],suit[s]);
            i++;
            }
    }
    printf("Deck is made\n");
}

void deck_print(){
    printf("======== Deck ========\n");
    for(int8_t i = 0; i < sizeof(deck)/sizeof(deck[0]); i++){
        printf("%s \n", deck[i]);
    }
}

void deck_pull_card(){
    int choice = 0;
    printf("Which of the 52 cards do you want to pull?\n");
    printf("Your input: ");
    scanf("%d",&choice);
    if ((choice > 0)&(choice < 53)){
        printf("Your card is %s\n",deck[choice-1]);
    }
    else{
        printf("There are not %s many cards in the deck\n",deck[choice-1]);
    }
}

void deck_shuffle(){
    srand(time(NULL));
    for (int i = 0; i < sizeof(deck)/sizeof(deck[0]); ++i){
    int j = rand() % (sizeof(deck)/sizeof(deck[0])-i) + i;
    char* temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
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

