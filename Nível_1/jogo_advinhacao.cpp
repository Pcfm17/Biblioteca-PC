#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//#include <bits/stdc++.h> 
//se vc usar essa biblioteca, não precisa das outras 3 acima, mas ela é mais pesada e não é recomendada para projetos grandes. Mas tem um grande porem que é que ela não é padrão, então pode não funcionar em alguns compiladores. Por isso, é melhor usar as 3 bibliotecas acima.
int main(){
    cout << "*******************************************" << endl;
    cout << "****Bem vindo ao Jogo de Advinhações! *****" << endl;
    cout << "*******************************************" << endl;

    srand(time(NULL));
    const int NUMERO_SECRETO = rand()%100 + 1; //gera um número aleatório entre 1 e 100
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;
    int dificuldade;
    cout << "Informações sobre o jogo:" << endl;
    cout << "O número secreto é um número inteiro entre 1 e 100" << endl;
    cout << "Você tem um número limitado de tentativas para adivinhar o número secreto.Mas vai depender da dificuldade selecionada. " << endl;
    cout << "Basta digitar o número inteiro pra escolher a dificuldade. exemplo: 1 para fácil: tentativas=15, 2 para médio: tentativas=10, 3 para difícil: tentativas=5." << endl;
    cout << "A pontuação inicial é de 1000 pontos, e a cada tentativa errada você perde pontos dependendo da diferença entre o seu chute e o número secreto." << endl;
    cout << "NÃO é aceito letras! Se por acaso digitar uma letra, o jogo será encerrado imediatamente." << endl;
    cout << "Boa sorte!" << endl;
    cout << "*******************************************" << endl;
    cout << "Qual o nível de dificuldade você quer (1=Fácil ; 2=Médio ; 3=Ddifícil): ";
    cin >> dificuldade;
    cout << "Dificuldade Selecionada: " << dificuldade << endl;
    if(dificuldade != 1 && dificuldade != 2 && dificuldade != 3){
        cout << "Dificuldade inválida, tente novamente!" << endl;
        return 0;
    }

    while(nao_acertou){
        tentativas++;
        cout << "Tentativa: " << tentativas << endl;

        int chute;
        cout << "Qual o seu chute: ";
        cin >> chute;
        cout << "O número que você chutou foi: " << chute << endl;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos; 

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
        bool menor = chute < NUMERO_SECRETO;

        bool dificuldade_1 = dificuldade == 1;
        bool dificuldade_2 = dificuldade == 2;
        bool dificuldade_3 = dificuldade == 3;

        if(acertou){
            cout << "Parabens você acertou o valor " << NUMERO_SECRETO << endl;
            nao_acertou = false;
        }
        else if(maior){
            cout << "O seu número do seu chute é maior que o número secreto!" << endl;
        }
        else if(menor){
            cout << "O número do seu chute é menor que o número secreto!" << endl;
        }
        else{
            cout << "Erro!" << endl;
        }

        if(dificuldade_1){
            if(tentativas == 15){
                if(nao_acertou){
                    cout << "Você não acertou o número secreto que era: " << NUMERO_SECRETO << endl;
                    pontos*=0.5;
                }
                nao_acertou = false;
            };
        }
        else if(dificuldade_2){
            if(tentativas == 10){
                if(nao_acertou){
                    cout << "Você não acertou o número secreto que era: " << NUMERO_SECRETO << endl;
                    pontos*=0.75;
                }
                nao_acertou = false;
            };
        }
        else if(dificuldade_3){
            if(tentativas == 5){
                if(nao_acertou){
                    cout << "Você não acertou o número secreto que era: " << NUMERO_SECRETO << endl;
                    pontos*=0.9;
                }
                nao_acertou = false;
            };
        }
    }

    cout << "Fim de jogo" << endl;
    cout << "A quantidade de tentativas: " << tentativas << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação do jogo: " << pontos << " pontos." << endl;  

}