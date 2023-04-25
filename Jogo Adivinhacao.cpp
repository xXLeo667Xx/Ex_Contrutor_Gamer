#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//criando a classe e colocando a variaveis
class JogoAdivinhacao{
    //colocando variaveis em privado 
    private:
    int NumeroSecreto;
    int tentativa;
    //publico para usuario 
    public:
    JogoAdivinhacao(){
        //sortiar um numero de 1 a 100
        srand(time(0));
        NumeroSecreto=rand() %100 + 1;
        tentativa=0;
    }
    //e  metodo para se jogar o jogo, e as interface para o jogo funcionar 
    void Jogar(){
        int Palpite;
            do{
                cout<<"digite um numero de 1 a 100: ";
                cin>>Palpite;
                tentativa++;
                if(Palpite>NumeroSecreto){
                   cout<<"O numero secreto é menor!"<<endl;
                }else if(Palpite<NumeroSecreto){
                   cout<<"O numero secreto é maior!"<<endl;
                }else{
                   cout<<"Parabens voce acertou o numero em "<<tentativa<<" Tentantivas!"<<endl;
               }
               //para repetir ate o usuario acertar o numero 
            }while(Palpite!=NumeroSecreto);
        }
};
//programa pricipal para ativar o jogo 
int main(){
    JogoAdivinhacao Jogo;
    Jogo.Jogar();
    return 0;
}
/*ele verifica as bibliotecas, criamos  uma classe aonde temos os atributos e as variaveis para poder o jogo funcionar, colocamos o numero aleatorio que puxa de 1 a 100,depois da classe criada criamos o metodo colocando variavel e fazemos a interface do ususario para ele tentar adivinhar o numero, e o jogo vai dando dica ate ele acerta, depois temos o codigo se repeticao para repetir o erro ate acertar contabilizando as tentantivas, depois temos o programa principal aonde colocamos o sistema da classe e do metodo funcionarem juntos e rodar o jogo/*