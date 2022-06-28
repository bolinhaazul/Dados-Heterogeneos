#include <iostream>

using namespace std;

struct Horario{
    int hora;
    int minuto;
};

struct Data{
    int dia;
    string mes;
    int ano;
};

struct Compromisso{
    Data data;
    Horario horario;
    char descricao[];
};

int main(){
    Compromisso jantinha;
    cout<<"Digite a data do comprimisso: "<<endl;
    cin>>jantinha.data.dia>>jantinha.data.mes>>jantinha.data.ano;
    cout<<"Digite o horario do comprimisso: "<<endl;
    cin>>jantinha.horario.hora>>jantinha.horario.minuto;
    cout<<"Digite a descricao do comprimisso: "<<endl;
    cin.ignore();
    cin.getline(jantinha.descricao, 100);
    cout<<"Data: "<<jantinha.data.dia<<"/"<<jantinha.data.mes<<"/"<<jantinha.data.ano<<endl;
    cout<<"Horario: "<<jantinha.horario.hora<<":"<<jantinha.horario.minuto<<endl;
    cout<<"Descricao: "<<jantinha.descricao<<endl;
    return 0;
}