#include "cards.h"

// FunÃ§Ã£o que retorna uma string formatada da carta
string cards::to_string()
{
    string saida = "Tipo: " + tipo + "\n" +
                       "Selecao: " + nome + "\n" +
                       "Ataque: " + std::to_string(ataque) + "\n" +
                       "Meio: " + std::to_string(meio) + "\n" +
                       "Defesa: " + std::to_string(defesa) + "\n" +
                       "Titulos: " + std::to_string(titulos) + "\n" +
                       "Aparicoes em Copas: " + std::to_string(aparicao_copas) + "\n" ;

    if (super_trunfo)
        saida += " SUPER TRUNFO ";

    return saida;
}

// FunÃ§Ã£o que retorna true caso a carta seja da classe A
bool cards::classeA(){
    return tipo.substr(0,1).compare("A") == 0;
}

// FunÃ§Ã£o que retorna true caso tenha sido escolhido um atributo valido
bool cards::atributoValido(string atributo){
    int valor;

try{
        valor = stoi(atributo);
    }
    catch (exception &e){ //A funcao stoi vai soltar uma excecao caso nao consiga obter um inteiro. Nesse caso
                          // retornamos false
        return false;

    }
    // Existe a opÃ§Ã£o secreta 6, na qual o jogador automaticamente ganha. Implementada para testar de forma mais
    // rapida
    return (valor >= 1 && valor <= 6);
}

// FunÃ§Ã£o que lÃª o artibuto a ser comparado e valida o vencedor, retorna true caso a carta venca, false caso a
// adversaria venca
bool cards::comparaAtributos(cards* adversario, istream& stream_in, ostream& stream_out){
    string atributo;

    while(!atributoValido(atributo)){
        cout << "Selecione uma opcao de Atributo:\n(1) - ATAQUE\n(2) - DEFESA\n(3) - MEIO\n(4) - TITULOS\n(5) - "
                "APARICOES_COPA\n";
        // Existe a opÃ§Ã£o secreta 6, na qual o jogador automaticamente ganha. Implementada para testar de forma mais
        // rapida
        stream_in >> atributo;
        if(!atributoValido(atributo)) stream_out << "ATRIBUTO INVALIDO!" << endl;
    }

    switch (stoi(atributo)) {
        case 1:
            if ((ataque - adversario->ataque) != 0){
                if(ataque > adversario->ataque){
                    return true;
                }
                else{
                    return false;
                }
            }
            break;
        case 2:
            if ((defesa - adversario->defesa) != 0){
                if(defesa > adversario->defesa){
                    return true;
                }
                else{
                    return false;
                }
            }
            break;
        case 3:
            if ((meio - adversario->meio) != 0){
                if(meio > adversario->meio){
                    return true;
                }
                else{
                    return false;
                }
            }
            break;
        case 4:
            if ((titulos - adversario->titulos) != 0){
                if(titulos > adversario->titulos){
                    return true;
                }
                else{
                    return false;
                }
            }
            break;
        case 5:
            if ((aparicao_copas - adversario->aparicao_copas) != 0){
                if(aparicao_copas > adversario->aparicao_copas){
                    return true;
                }
                else{
                    return false;
                }
            }
            break;
        default: // Caso a opÃ§Ã£o escolhida seja 6, a carta automaticamente vence
            return true;
    }
    // Caso o atributo empate, a vitÃ³ria vai para a carta com maior classe (A1 > A2, A > B, B > C e por ai vai)
    if (tipo.compare(adversario->tipo) < 0) return true;
    return false;
}

