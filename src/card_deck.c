#include "card_deck.h"

int cardCmp(const void *a, const void *b) {
    int priority_a, priority_b;
    priority_a = card_rank_priority[((Card*)a)->rank];
    priority_b = card_rank_priority[((Card*)a)->rank];

    // Aqui a lógica é inversa do normal, pois é desejável que se mostre o
    // baralho ordenado da carta menos significante para a mais significante e
    // em nossa lista de prioridades valor menor significa que a carta é mais
    // significante

    return priority_b - priority_a;
}

Card yieldCard(int itr) {
    static  enum card_suit_t suit;
    static enum card_rank_t rank;
    Card card;

    if (itr == 0) {
        suit = CLUBS;
        rank = NUM2;
    } else {
        if (rank < ACE) {
            rank = (enum card_rank_t)((int)rank + 1);
        } else {
            rank = NUM2;
            if (suit < SPADES) {
                suit = (enum card_suit_t)((int)suit + 1);
            } else {
                suit = CLUBS;
            }
        }
    }

    card.suit = suit;
    card.rank = rank;

    return card;
}
