/*This is where we define the playing card deck*/
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "Deck.h"


/* TO DO: 
- Deal to players
- Let player hit for more cards
- Make the rules
*/

char* playerhand[10];
char* dealerhand[10];

void deal_cards(char* hand, uint8_t card_amount){
    for(int16_t i = 0; i < 10; i++){
        if(hand[i] == NULL){
        
        }
    }
}