# Biblioteca-PC

//////////////////////////////////////////
                    SQL
//////////////////////////////////////////


//////////////////////////////////////////
                    C++
//////////////////////////////////////////

Início:
#include<iostream>
using namespace std;

int main (){
    cout << "***************************************" << endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" << endl;
    cout << "***************************************" << endl;
}

O cout é para printa o que eu escrev, também tem o cin é para inserir um resultado.

Iremos fazer o primeiro codigo em C++:
Na criação do arquivo C++ precisamos fazer assim "no arquivo que deseja".cpp pois o C++ é cplusplus e para resumir isso colocamos de outra forma bem mais simples que é cpp.
Nesse primeiro codigo iremos dar o nome do arquivo de jogodeadvinhacao.cpp:
Primeiro sempre fazemos duas coisa: colocar as bibliotecas e a segunda é cria a função main pois é a função principal nosso que todo C++ tem que ter.


int main(){
   std::cout << "Bem vindos ao jogo de Adivinhação";
}
Porque colocar o std::?
É para colocar na forma padrão de saída da informação, normalmente colocamos na biblioteca assim nao precisamos colocar na mesma linha tantas vezes se for usar, vou colocar mais pra frente.
Se você testou esse código vai ver que aparece um erro pois você fala de qual está usando a biblioteca, mas o que você não faz é importar essa biblioteca pra ter o acesso a ela.

#include<iostream>

int main(){
   std::cout << "Bem vindos ao jogo de Adivinhação";
}

Se tivesse mais cout para printar o que você escreveu iria ficar tudo na mesma linha, então o que precisaria fazer pra separar eles? Com o endl

#include<iostream>

int main(){
   std::cout << "Bem vindos ao jogo de Adivinhação" << std::endl;
}

Como havia falado se for colocar std toda fez que usar a biblioteca o código vai ficar muito grande então a gente fala logo depois da biblioteca que a gente vai usar a funções do std.

#include<iostream>
using namespace std;

int main(){
   cout << "Bem vindos ao jogo de Adivinhação" << endl;
}

No final de tudo nós iremos ter conseguido fazer um jogo de Adivinhação.







