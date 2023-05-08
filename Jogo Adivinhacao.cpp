#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//criando a classe e colocando a variaveis
int main(){
    //pra saber quantas vezes poderar repitir
    const int MaxTentativas = 5;
    //variaveis
    int numero, palpite, nivel, tentativas=0;
    //demarcando as dificudades, 3 filas de dificuldades com 2 numeros cada
    int intervalos[3][2]={{1, 10},{1, 50},{1, 100}};
    bool acertou = false
    //sortiar um numero aleatorio
    srand(time(NULL));
    //interface para dificudade
    cout<<"bem-vindo ao jogo de advinhação\n";
    cout<<"escolha o nivel de dificudade\n";
    cout<<"1- facil(1 a 10)\n";
    cout<<"2- medio(1 a 50)\n";
    cout<<"3- dificil (1 a 100)\n";
    cin>>nivel;
    //caso ele coloque uma dificuldade acima do que a permitida
    if(nivel<1||nivel>3){
        cout<<"opção invalida\n";
        return 0;
    }
    //numero sortiado
    numero=rand() % (intervalos[nivel-1][1] - intervalos[nivel-1][0] + 1)=intervalos[nivel-1][0];
    //repeticao com contador de tentativas
    while(!acertou && tentativas<MaxTentativas){
        cout<<"digite um palpite entre "<<intervalos[nivel-1][0]<<"e"<<intervalos[nivel-1][1]<<":\n";
        cin>>palpite;
        tentativas++;
        //caso vc erre dizer se o numero sorteado e maior ou menor ou se acertou
        if(palpite<numero){
            cout<<"o numero é maior.\n";
        }else if(palpite>numero){
            cout<<"o numero é menor.\n";
        }else{
            acertou=true;
            cout<<"parabens vocé acertou em "<<tentativas<<"tentantivas!\n";
        }
        //caso tenha acabado suas tentativas
        if(!acertou){
            cout<<"vocé perdeu! o numero era "<<numero<<".\n";
        }
        return 0;
    }
}
