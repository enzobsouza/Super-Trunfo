#include "player.h"

// FunÃ§Ã£o que recebe um vetor de cartas e as posiÃ§Ãµes inicio e fim. Todas as cartas da posiÃ§Ã£o inicio Ã  posiÃ§Ã£o fim
// serÃ£o adicionadas ao monte do jogador
void player::iniciaMonte(cards* baralho, int inicio, int fim){
    monte.insert(monte.end(), &baralho[inicio], &baralho[fim]);
}

// FunÃ§Ã£o que retorna true caso o monte esteja vazio
bool player::monteEstaVazio(){
    return monte.empty();
}

// FunÃ§Ã£o que remove a primeira carta do topo do monte e a retorna
cards player::obtemCartaTopo(){
    cards cartaTopo = monte[0];
    monte.erase(monte.begin());
    return cartaTopo;
}

// FunÃ§Ã£o que adiciona uma carta ao fundo do monte
void player::colocaNoMonte(cards carta){
    monte.push_back(carta);
}
