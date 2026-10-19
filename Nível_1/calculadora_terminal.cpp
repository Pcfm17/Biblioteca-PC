#include <iostream>
using namespace std;

int main(){
    cout << "*******************************************" << endl;
    cout << "**** Bem-vindo à calculadora de terminal! ****" << endl;
    cout << "*******************************************" << endl;

    while(true){
        int operacao;
        cout << "\nOperações disponíveis:" << endl
             << "1 - Adição" << endl << "2 - Subtração" << endl
             << "3 - Multiplicação" << endl << "4 - Divisão" << endl
             << "5 - Parar" << endl;

        if(!(cin >> operacao)){
            cout << "Entrada inválida! Digite apenas números." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        else if(operacao < 1 || operacao > 5){
            cout << "Operação inválida!" << endl;
            continue;
        }

        else if(operacao == 5){
            cout << "Saindo da calculadora..." << endl;
            return 0;
        }

        double num1, num2;
        cout << "Digite o primeiro número: ";
        if(!(cin >> num1)){
            cout << "Entrada inválida!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        cout << "Digite o segundo número: ";
        if(!(cin >> num2)){
            cout << "Entrada inválida!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout.precision(2);
        cout << fixed;

        if(operacao == 1){
            cout << "Resultado da adição: " << num1 + num2 << endl;
        }
        else if(operacao == 2){
            cout << "Resultado da subtração: " << num1 - num2 << endl;
        }
        else if(operacao == 3){
            cout << "Resultado da multiplicação: " << num1 * num2 << endl;
        }
        else if(operacao == 4){
            if(num2 == 0){
                cout << "Erro: divisão por zero não é permitida!" << endl;
            } else {
                cout << "Resultado da divisão: " << num1 / num2 << endl;
            }
        }
    }
}