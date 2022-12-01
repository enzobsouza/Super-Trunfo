
#include "game.h"

// Função para limpar o console
void game::limpaTela(){

}

//Função para pegar e armazenar o nome dos dois jogadores;
void game::cadastraJogadores(istream& stream_in, ostream& stream_out){

    cout << "SUPER TRUNFO - CADASTRO DE JOGADORES" << endl;

    cout << endl << "Insira o nome do Jogador 1: ";
    cin >> player1.nome;
    cout << endl << "Insira o nome do Jogador 2: ";
    cin >> player2.nome;
}

// Função para listar as 32 cartas do baralho que serão utilizadas no jogo
void game::iniciaBaralho(){
    baralho[0].tipo = "A1";
    baralho[0].nome = "Russia";
    baralho[0].ataque = 80;
    baralho[0].defesa = 76;
    baralho[0].meio = 78;
    baralho[0].titulos = 0;
    baralho[0].aparicao_copas = 11;

    baralho[1].tipo = "A2";
    baralho[1].nome = "Alemanha";
    baralho[1].ataque = 81;
    baralho[1].meio = 85;
    baralho[1].defesa = 84;
    baralho[1].titulos = 4;
    baralho[1].aparicao_copas = 19;

    baralho[2].tipo = "A3";
    baralho[2].nome = "Brasil";
    baralho[2].ataque = 86;
    baralho[2].meio = 84;
    baralho[2].defesa = 85;
    baralho[2].titulos = 5;
    baralho[2].aparicao_copas = 21;

    baralho[3].tipo = "A4";
    baralho[3].nome = "Portugal";
    baralho[3].ataque = 85;
    baralho[3].meio = 82;
    baralho[3].defesa = 80;
    baralho[3].titulos = 0;
    baralho[3].aparicao_copas = 7;

    baralho[4].tipo = "A5";
    baralho[4].nome = "Argentina";
    baralho[4].ataque = 87;
    baralho[4].meio = 81;
    baralho[4].defesa = 80;
    baralho[4].titulos = 2;
    baralho[4].aparicao_copas = 17;

    baralho[5].tipo = "A6";
    baralho[5].nome = "Belgica";
    baralho[5].ataque = 86;
    baralho[5].meio = 84;
    baralho[5].defesa = 85;
    baralho[5].titulos = 0;
    baralho[5].aparicao_copas = 13;

    baralho[6].tipo = "A7";
    baralho[6].nome = "Polonia";
    baralho[6].ataque = 82;
    baralho[6].meio = 75;
    baralho[6].defesa = 79;
    baralho[6].titulos = 0;
    baralho[6].aparicao_copas = 8;

    baralho[7].tipo = "A8";
    baralho[7].nome = "Franca";
    baralho[7].ataque = 83;
    baralho[7].meio = 85;
    baralho[7].defesa = 82;
    baralho[7].titulos = 1;
    baralho[7].aparicao_copas = 15;

    baralho[8].tipo = "B1";
    baralho[8].nome = "Espanha";
    baralho[8].ataque = 84;
    baralho[8].meio = 86;
    baralho[8].defesa = 86;
    baralho[8].titulos = 1;
    baralho[8].aparicao_copas = 15;

    baralho[9].tipo = "B2";
    baralho[9].nome = "Suica";
    baralho[9].ataque = 74;
    baralho[9].meio = 78;
    baralho[9].defesa = 77;
    baralho[9].titulos = 0;
    baralho[9].aparicao_copas = 11;

    baralho[10].tipo = "B3";
    baralho[10].nome = "Inglaterra";
    baralho[10].ataque = 84;
    baralho[10].meio = 81;
    baralho[10].defesa = 81;
    baralho[10].titulos = 1;
    baralho[10].aparicao_copas = 15;

    baralho[11].tipo = "B4";
    baralho[11].nome = "Colombia";
    baralho[11].ataque = 81;
    baralho[11].meio = 77;
    baralho[11].defesa = 78;
    baralho[11].titulos = 0;
    baralho[11].aparicao_copas = 6;


    baralho[12].tipo = "B5";
    baralho[12].nome = "Mexico";
    baralho[12].ataque = 79;
    baralho[12].meio = 79;
    baralho[12].defesa = 76;
    baralho[12].titulos = 0;
    baralho[12].aparicao_copas = 16;

    baralho[13].tipo = "B6";
    baralho[13].nome = "Uruguai";
    baralho[13].ataque = 86;
    baralho[13].meio = 76;
    baralho[13].defesa = 79;
    baralho[13].titulos = 2;
    baralho[13].aparicao_copas = 13;

    baralho[14].tipo = "B7";
    baralho[14].nome = "Croacia";
    baralho[14].ataque = 76;
    baralho[14].meio = 83;
    baralho[14].defesa = 77;
    baralho[14].titulos = 0;
    baralho[14].aparicao_copas = 5;

    baralho[15].tipo = "B8";
    baralho[15].nome = "Peru";
    baralho[15].ataque = 74;
    baralho[15].meio = 72;
    baralho[15].defesa = 71;
    baralho[15].titulos = 0;
    baralho[15].aparicao_copas = 5;

    baralho[16].tipo = "C1";
    baralho[16].nome = "Costa Rica";
    baralho[16].ataque = 70;
    baralho[16].meio = 70;
    baralho[16].defesa = 75;
    baralho[16].titulos = 0;
    baralho[16].aparicao_copas = 5;

    baralho[17].tipo = "C2";
    baralho[17].nome = "Suecia";
    baralho[17].ataque = 74;
    baralho[17].meio = 73;
    baralho[17].defesa = 74;
    baralho[17].titulos = 0;
    baralho[17].aparicao_copas = 12;

    baralho[18].tipo = "C3";
    baralho[18].nome = "Tunisia";
    baralho[18].ataque = 69;
    baralho[18].meio = 69;
    baralho[18].defesa = 70;
    baralho[18].titulos = 0;
    baralho[18].aparicao_copas = 5;

    baralho[19].tipo = "C4";
    baralho[19].nome = "Egito";
    baralho[19].ataque = 78;
    baralho[19].meio = 72;
    baralho[19].defesa = 71;
    baralho[19].titulos = 0;
    baralho[19].aparicao_copas = 3;

    baralho[20].tipo = "C5";
    baralho[20].nome = "Senegal";
    baralho[20].ataque = 76;
    baralho[20].meio = 72;
    baralho[20].defesa = 70;
    baralho[20].titulos = 0;
    baralho[20].aparicao_copas = 2;

    baralho[21].tipo = "C6";
    baralho[21].nome = "Ira";
    baralho[21].ataque = 70;
    baralho[21].meio = 69;
    baralho[21].defesa = 69;
    baralho[21].titulos = 0;
    baralho[21].aparicao_copas = 5;

    baralho[22].tipo = "C7";
    baralho[22].nome = "Dinamarca";
    baralho[22].ataque = 75;
    baralho[22].meio = 77;
    baralho[22].defesa = 77;
    baralho[22].titulos = 0;
    baralho[22].aparicao_copas = 5;

    baralho[23].tipo = "C8";
    baralho[23].nome = "Islandia ";
    baralho[23].ataque = 73;
    baralho[23].meio = 74;
    baralho[23].defesa = 69;
    baralho[23].titulos = 0;
    baralho[23].aparicao_copas = 1;

    baralho[24].tipo = "D1";
    baralho[24].nome = "Servia";
    baralho[24].ataque = 72;
    baralho[24].meio = 74;
    baralho[24].defesa = 74;
    baralho[24].titulos = 0;
    baralho[24].aparicao_copas = 12;

    baralho[25].tipo = "D2";
    baralho[25].nome = "Nigeria";
    baralho[25].ataque = 73;
    baralho[25].meio = 71;
    baralho[25].defesa = 70;
    baralho[25].titulos = 0;
    baralho[25].aparicao_copas = 6;

    baralho[26].tipo = "D3";
    baralho[26].nome = "Japao";
    baralho[26].ataque = 73;
    baralho[26].meio = 72;
    baralho[26].defesa = 73;
    baralho[26].titulos = 0;
    baralho[26].aparicao_copas = 6;

    baralho[27].tipo = "D4";
    baralho[27].nome = "Marrocos";
    baralho[27].ataque = 71;
    baralho[27].meio = 71;
    baralho[27].defesa = 73;
    baralho[27].titulos = 0;
    baralho[27].aparicao_copas = 5;

    baralho[28].tipo = "D5";
    baralho[28].nome = "Panama";
    baralho[28].ataque = 67;
    baralho[28].meio = 68;
    baralho[28].defesa = 69;
    baralho[28].titulos = 0;
    baralho[28].aparicao_copas = 1;

    baralho[29].tipo = "D6";
    baralho[29].nome = "Coreia do Sul";
    baralho[29].ataque = 73;
    baralho[29].meio = 72;
    baralho[29].defesa = 69;
    baralho[29].titulos = 0;
    baralho[29].aparicao_copas = 10;

    baralho[30].tipo = "D7";
    baralho[30].nome = "Arabia Saudita";
    baralho[30].ataque = 70;
    baralho[30].meio = 69;
    baralho[30].defesa = 70;
    baralho[30].titulos = 0;
    baralho[30].aparicao_copas = 5;

    baralho[31].tipo = "D8";
    baralho[31].nome = "Australia";
    baralho[31].ataque = 69;
    baralho[31].meio = 73;
    baralho[31].defesa = 71;
    baralho[31].titulos = 0;
    baralho[31].aparicao_copas = 5;
}

// Função para definir aleatoriamente qual a carta será o super trunfo da partida
void game::defineSuperTrunfo(){

    default_random_engine defEngine((unsigned) time(nullptr)); // Engine geradora de valores aleatórios.

    uniform_int_distribution<int> intDistro(0,31); // Distribuição de valores que vamos utilizar
    intDistro(defEngine); // Comando que gera o número aleatório dentro dos valores da distribuição.

    int rand = intDistro(defEngine);
    baralho[rand].super_trunfo = true; // Carta aleatória definida como super trunfo
}

// Função para reordenar o array baralho aleatoriamente
void game::embaralharBaralho(){

    default_random_engine defEngine((unsigned) time(nullptr)); // Engine geradora de valores aleatórios.

    shuffle(&baralho[0], &baralho[32], defEngine); // Função do c++ 17 que reordena um vetor
}

// Função para distribuir as cartas entre os dois jogadores
void game::distribuirCartas(){
    player1.iniciaMonte(baralho, 0, 16);
    player2.iniciaMonte(baralho, 16, 32);
}

// Função que determina o primeiro jogador
void game::definePrimeiroAJogar(){

    default_random_engine defEngine((unsigned) time(nullptr)); // Engine geradora de valores aleatórios.

    uniform_int_distribution<int> intDistro(1,2); // Distribuição de valores que vamos utilizar
    intDistro(defEngine); // Comando que gera o número aleatório dentro dos valores da distribuição.

    jogadorAtual = intDistro(defEngine);
    jogadorAdversario = jogadorAtual==1 ? 2 : 1;
}

// Função para iniciar as configurações do jogo
void game::iniciaJogo(){
    cadastraJogadores(cin, cout);
    iniciaBaralho();
    limpaTela();

    defineSuperTrunfo();

    embaralharBaralho();

    distribuirCartas();

    definePrimeiroAJogar();

    cout << "- O jogador fara a primeira jogada." << endl;
}

// Função que inverte jogadorAtual e Adversario caso o adversario venca a rodada
void game::adversarioVencedor(){
    jogadorAtual = jogadorAdversario;
    jogadorAdversario = jogadorAtual==1 ? 2 : 1;
}

// Função para obter o ponteiro do jogador dado o número inteiro passado (player1 para 1 e player 2 para 2)
player* game::obtemJogador(int jogador){
    if(jogador == 1){
        return &player1;
    }
    return &player2;
}

// Função para imprimir o placar
void game::anunciaPlacar(){
    cout << ">>> Placar <<<" << endl << player1.nome << " - " << player1.monte.size()+1 << " Cartas" << " x "
         << player2.monte.size()+1 << " Cartas - " << player2.nome << endl;
    cout << "Rodada: " << rodada++ << endl << endl;
}

// Função para imprimir a carta do jogador
void game::imprimeJogadorCarta(player* jogador, cards* cartaJogador){
    cout  << endl << "CARTA JOGADOR " << jogador->nome <<  endl << cartaJogador->to_string() << endl;
}

//Função para anunciar o vencedor
void game::anunciaVencedor(player* vencedor, player* adversario, cards *cartaAdversario){

    imprimeJogadorCarta(adversario, cartaAdversario);

    cout << endl << "[JOGADOR " << vencedor->nome << " Vencedor da Rodada]" << endl;

}

// Função que executa a próxima rodada
void game::jogaRodada(){
    limpaTela();
    player *jogador, *adversario;
    cards cartaJogador, cartaAdversario;

    jogador = obtemJogador(jogadorAtual);
    adversario = obtemJogador(jogadorAdversario);
    cartaJogador = jogador->obtemCartaTopo();
    cartaAdversario = adversario->obtemCartaTopo();

    anunciaPlacar(); // Anuncia o placar e a rodada atual

    cout << endl << "[NOVA JOGADA]" << endl << jogador->nome << endl;

    imprimeJogadorCarta(jogador, &cartaJogador);

    if(cartaJogador.super_trunfo){
        cout << endl << "[SUPER TRUNFO]" << endl << endl;
    }


    if(cartaJogador.super_trunfo){ // O Super trunfo vence todas as cartas exceto as de classe A
        if(cartaAdversario.classeA()){ // Verifica se a carta do adversario e de classe A
            anunciaVencedor(adversario, adversario, &cartaAdversario);
            adversario->colocaNoMonte(cartaJogador);
            adversario->colocaNoMonte(cartaAdversario);
            adversarioVencedor();
        }
        else{
            anunciaVencedor(jogador, adversario, &cartaAdversario);
            jogador->colocaNoMonte(cartaJogador);
            jogador->colocaNoMonte(cartaAdversario);
        }
    }
    else{
        if(cartaJogador.comparaAtributos(&cartaAdversario, cin, cout)){
            anunciaVencedor(jogador, adversario, &cartaAdversario);
            jogador->colocaNoMonte(cartaJogador);
            jogador->colocaNoMonte(cartaAdversario);
        }
        else{
            anunciaVencedor(adversario, adversario, &cartaAdversario);
            adversario->colocaNoMonte(cartaJogador);
            adversario->colocaNoMonte(cartaAdversario);
            adversarioVencedor();
        }
    }
}

// Função principal que executa o jogo
void game::superTrunfo(){
    char lixo;

    iniciaJogo();
    while(!player1.monteEstaVazio() && !player2.monteEstaVazio()){ // Joga rodadas até que um dos montes se esvazie
        jogaRodada();
    }
    limpaTela();
    if (player1.monteEstaVazio())
        cout << endl << "FIM DE JOGO - " << player2.nome << " VENCEU!!!" << endl << endl;
    else
        cout << endl << "FIM DE JOGO - " << player1.nome << " VENCEU!!!" << endl << endl;

    cout << "Total de Rodadas: " << rodada << endl;
    cout << "Escreva qualquer coisa para encerrar" << endl;
    cin >> lixo;

    player1.monte.clear();
    player2.monte.clear();
}
