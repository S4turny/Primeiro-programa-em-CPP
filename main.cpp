#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");   

    cout << "-------------------------------------------------\n";

    string nome;
    int idade;

    cout << "seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;
    
    cout << "seu nome: " + nome;
    cout << "sua idade: " + idade;


    cout << "-------------------------------------------------\n";

    system("pause");
    return 0;

}