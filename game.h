#ifndef PDS2TP___SUPER_TRUNFO_GAME_H
#define PDS2TP___SUPER_TRUNFO_GAME_H

#define WIN 

#include "player.h"
#include <random>
#include <algorithm>
#include <chrono>
#include <thread>

class game{
    public:
        player player1, player2; 
        void superTrunfo(); // FunÃ§Ã£o principal que executa o jogo
    protected:
        int jogadorAtual; // Jogador que fara a jogada na rodada
        int jogadorAdversario; // Jogador adversario da rodada
        int rodada = 1; // Indicador de rodadas do jogo
        cards baralho[32]; 
        void limpaTela(); // FunÃ§Ã£o para limpar o console
        void cadastraJogadores(istream& stream_in, ostream& stream_out); // Armazenar o nome dos dois jogadores;
        void iniciaBaralho(); // Inicializar as 32 cartas do baralho que serÃ¡ utilizado no jogo
        void defineSuperTrunfo(); // Define super trunfo de forma aleatoria
        void embaralharBaralho(); // Ordena o baralho de forma aleatoria
        void distribuirCartas(); // FunÃ§Ã£o para distribuir as cartas entre os dois jogadores
        void definePrimeiroAJogar(); // FunÃ§Ã£o que determina o primeiro jogador
        void iniciaJogo(); // FunÃ§Ã£o para iniciar as configuraÃ§Ãµes do jogo
        void adversarioVencedor(); // FunÃ§Ã£o que inverte jogadorAtual e Adversario caso o adversario venca a rodada
        player* obtemJogador(int jogador); // FunÃ§Ã£o para obter o ponteiro do jogador dado o nÃºmero inteiro passado (player1 para 1 e player 2 para 2)
        void anunciaPlacar(); // FunÃ§Ã£o para imprimir o placar
        void imprimeJogadorCarta(player *jogador, cards *cartaJogador); // Imprimir a carta do jogador
        void anunciaVencedor(player* vencedor, player* adversario, cards *cartaAdversario); //FunÃ§Ã£o para anunciar o vencedor
        void jogaRodada(); // FunÃ§Ã£o que executa a prÃ³xima rodada
};

#endif //PDS2TP___SUPER_TRUNFO_GAME_H

