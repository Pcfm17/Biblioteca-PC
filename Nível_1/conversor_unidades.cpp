#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    while(true){
        double valor, resultado;
        int operacao;
        cout << "Escolha a operação desejada: " << endl 
            << "1 - Converter metros para centimetros" << endl
            << "2 - Converter centimetros para metros" << endl
            << "3 - Converter Kilometros para metros" << endl
            << "4 - Converter metros para Kilometros" << endl
            << "5 - Sair" << endl;
        cin >> operacao;

        switch(operacao){
            case 1:
                cout << "Digite o valor em metros: ";
                cin >> valor;
                resultado = valor * 100;
                cout << "O valor em centimetros é: " << resultado << endl;
                break;
            case 2:
                cout << "Digite o valor em centimetros: ";
                cin >> valor;
                resultado = valor / 100;
                cout << "O valor em metros é: " << resultado << endl;
                break;
            case 3:
                cout << "Digite o valor em Kilometros: ";
                cin >> valor;
                resultado = valor * 1000;
                cout << "O valor em metros é: " << resultado << endl;
                break;
            case 4:
                cout << "Digite o valor em metros: ";
                cin >> valor;
                resultado = valor /1000;
                cout << "O valor em Kilometros é: " << resultado << endl;
                break;
            case 5:
                cout << "Saindo do programa..." << endl;
                return 0;

            default:
                cout << "Operação inválida!" << endl;
        }
    }

}