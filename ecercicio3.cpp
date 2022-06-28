#include <iostream>

using namespace std;

struct Aluno
{
    char nome[40];
    int matricula;
    char curso[40];
};

int main()
{
    Aluno aluno[5];
    for (int i = 0; i < 5; i++)
    {
        int b = i + 1;
        cout << "Digite o nome do aluno " << b << ": " << endl;
        cin.ignore();
        cin.getline(aluno[i].nome, 40);
        cout << "Digite a matricula do aluno: " << b << endl;
        cin >> aluno[i].matricula;
        cout << "Digite o curso do aluno: " << b << endl;
        cin.ignore();
        cin.getline(aluno[i].curso, 40);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Nome: " << aluno[i].nome << endl;
        cout << "Matricula: " << aluno[i].matricula << endl;
        cout << "Curso: " << aluno[i].curso << endl;
    }
    return 0;
}