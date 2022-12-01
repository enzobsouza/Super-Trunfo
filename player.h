#ifndef PDS2TP___SUPER_TRUNFO_PLAYER_H
#define PDS2TP___SUPER_TRUNFO_PLAYER_H

#include <string>
#include <vector>
#include "cards.h"

using namespace std;

//Classe que representa cada jogador
class player {
    public:
        string nome;
        vector<cards> monte;

        void iniciaMonte(cards* cartas, int inicio, int fim); // Função que recebe um vetor de cartas e as posições
                                                              // inicio e fim. Todas as cartas da posição inicio à
                                                              // posição fim serão adicionadas ao monte do jogador
        bool monteEstaVazio(); // Função que retorna true caso o monte esteja vazio
        cards obtemCartaTopo(); // Função que remove a primeira carta do topo do monte e a retorna
        void colocaNoMonte(cards carta); // Função que adiciona uma carta ao fundo do monte
};


#endif //PDS2TP___SUPER_TRUNFO_PLAYER_H

