#ifndef CARD_DECK_H
#define CARD_DECK_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * @brief Tipo enumerador para o naipe das cartas
 *
 */
enum card_suit_t {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

/**
 * @brief Tipo enumerador para o valor das cartas
 *
 */
enum card_rank_t {
    NUM2,
    NUM3,
    NUM4,
    NUM5,
    NUM6,
    NUM7,
    JOKER,
    QUEEN,
    KING,
    ACE
};

/**
 * @brief Mapa de prioridade das cartas
 * Basta usar o enum card_rank_t no índice para obter o valor da prioridade.
 * 0 é a maior prioridade e 9 a menor
 */
const unsigned int card_rank_priority[] = {
    9, // NUM2
    8, // NUM3
    7, // NUM4
    6, // NUM5
    5, // NUM6
    1, // NUM7
    3, // JOKER
    4, // QUEEN
    2, // KING
    0  // ACE
};

/**
 * @brief Tipo carta
 * Contém informação de seu naipe e valor
 */
typedef struct card_t Card;
struct card_t {
    card_suit_t suit;
    card_rank_t rank;
};

int cardCmp(const void *a, const void *b);

Card yieldCard(int itr);

#if __cplusplus
}
#endif // _cplusplus
#endif // CARD_DECK_H