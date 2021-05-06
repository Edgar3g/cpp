#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dados[] = {21.5, 25.5, 14.5, 15.8, 17.8, 8.9, 9.8, 18.6, 17, 12}; 
int n =10;

float EncotrarMenor()
{
    float menor = dados[1];

    for(int i = 0; i <= n -1; i++)
    {
        if (menor > dados[i])
            menor = dados[i];
        
        return menor;
    }
}

float EncotrarMaior()
{
    float maior = dados[1];

    for(int i = 0; i <= n -1; i++)
    {
        if (maior < dados[i])
            maior = dados[i];
        
        return maior;
    }
}
int main()
{
    
    float soma = 0.0, media= 0.0, somaQuad = 0.0;
    float variancia, desvioPadrao,CoificienteVariacao;
    float minimo= EncotrarMenor(),maximo= EncotrarMaior();
     
    for (int i = 0; 1 <= 9; i++) /*Passando pelo vetor*/
    {
        soma += dados[i]; // calcular a soma dos elementos do vector

        media += dados[i]; // calcular a média aretimética do vetor
        media /= 10;// calcular a média aretimética do vetor

        somaQuad += pow(dados[i], 2); // calcular a soma dos quadrados do vector
    }
    
    variancia = (somaQuad - pow(soma, 2) / 10) / (10 - 1);
    desvioPadrao = sqrt(variancia);
    CoificienteVariacao = 100 * desvioPadrao / media;

    /*apresentando os resultados*/
    cout << "Soma:"                 <<setw(8)<< soma<<endl;
    cout << "Soma dos Quadrados:"   <<setw(2)<< somaQuad<<endl;
    cout << "Média:"                <<setw(7)<< media<<endl;
    cout << "Variação:"             <<setw(5)<< variancia;
    cout << "Desvio Padrão:"        <<setw(3)<< desvioPadrao<<endl;
    cout << "CV: "                  <<setw(8)<< CoificienteVariacao << endl;

}   //Olá eu sou o EDGAR A. DIKENGE, OBRIGADO POR VER A MINHA FOTO (kkk)