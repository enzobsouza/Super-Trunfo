# Super Trunfo
### Esse programa tem por objetivo reproduzir o jogo de cartas chamado Super Trunfo!

+ O Super Trunfo consiste em um baralho com 32 cartas que, no caso deste código, representam seleções de futebol
participantes da Copa do Mundo.

+ Cada carta tem valores específicos para cada atributo, sendo eles Ataque, Meio, Defesa, Títulos e Aparições em Copas.

```

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

```
Função que retorna uma string formatada da carta

+ Cada carta é indicada por um número e uma letra no formato "X1", sendo que, em caso de empate, A1 é a mais forte e D8
é a mais fraca.
+ Ao início de cada partida o baralho é embaralhado, cada jogador recebe 16 cartas e o programa sorteia uma carta para ser
o Super Trunfo.
+ Um dos jogadores é sorteado para começar e, então, escolhe o atributo a ser comparado entre a primeira carta do seu monte
e a primeira carta do monte de seu adversário.
+ O maior valor para o atributo escolhido vence a rodada e o vencedor recebe a carta de seu oponente e tem o direito de
escolher o atributo a ser comparado na próxima rodada.

```

bool cards::comparaAtributos(cards* adversario, istream& stream_in, ostream& stream_out){
    string atributo;

    while(!atributoValido(atributo)){
        cout << "Selecione uma opcao de Atributo:\n(1) - ATAQUE\n(2) - DEFESA\n(3) - MEIO\n(4) - TITULOS\n(5) - "
                "APARICOES_COPA\n";
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
        default: // Caso a opção escolhida seja 6, a carta automaticamente vence
            return true;
    }
       // Caso o atributo empate, a vitória vai para a carta com maior classe (A1 > A2, A > B, B > C e por ai vai)
       if (tipo.compare(adversario->tipo) < 0) return true;
       return false;
   }
    
    ```
    Função que lê o artributo a ser comparado e valida o vencedor, retorna true caso a carta vença, false caso a adversária vença.
    
+ Em caso de empate A1>...>A8>B1>...>D8.
+ O Super Trunfo vence todas as cartas com excessão das cartas de letra A sem a necessidade de se comparar atributos.
+ O jogo acaba quando algum dos jogadores não tem mais cartas no seu monte, sendo seu adversário o vencedor.
