#include <iostream>
using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    char endereco[];
};

int main()
{
    Pessoa pessoa;
    cout << "Digite o nome da pessoa: " << endl;
    cin.ignore();
    cin >> pessoa.nome;
    cout << "Digite a idade da pessoa: " << endl;
    cin >> pessoa.idade;
    cout << "Digite o endereco da pessoa: " << endl;
    cin.ignore();
    cin.getline(pessoa.endereco, 100);
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << endl;
    cout << "Endereco: " << pessoa.endereco << endl;
    return 0;
}