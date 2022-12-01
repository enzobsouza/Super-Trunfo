#ifndef PDS2TP___SUPER_TRUNFO_CARDS_H
#define PDS2TP___SUPER_TRUNFO_CARDS_H

#include <string>
#include<iostream>
#include <sstream>

using namespace std;

// Classe que representa cada carta do jogo
class cards {
    public:
        string tipo;
        string nome;
        int ataque;
        int defesa;
        int meio;
        int titulos;
        int aparicao_copas;
        bool super_trunfo = false;

        string to_string(); // FunÃ§Ã£o que retorna uma string formatada da carta
        bool classeA(); // FunÃ§Ã£o que retorna true caso a carta seja da classe A
        bool comparaAtributos(cards *adversario, istream& stream_in, ostream& stream_out); // FunÃ§Ã£o que lÃª o artibuto a ser comparado e valida o vencedor,
                                                  // retorna true caso a carta venca, false caso a adversaria venca
    protected:
        bool atributoValido(string atributo); // FunÃ§Ã£o que retorna true caso tenha sido escolhido um atributo valido
};

#endif //PDS2TP___SUPER_TRUNFO_CARDS_H
