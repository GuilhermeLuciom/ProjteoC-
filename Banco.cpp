    #include <iostream>
    using namespace std;
    
    int main()
    {
        float Saldo,Retirada1,Retirada2,Deposito;
        bool RET,RET2,DEP;
        Saldo=0,Retirada1=0,Retirada2=0;
        Deposito=0;
        //as variaveis começa com valor igual a 0
        cout<<"Seu saldo inicial no banco CITYBANK : "<<Saldo<<endl;
        cout<<"Deseja fazer um Deposito ? 1=sim/0=nao! :";
        cin>>DEP;
        if(DEP == true){
                    cout<<"Informe o valor do deposito";
                    cin>>Deposito;
                    cout<<"Seu saldo Atual e igual a :"<<Saldo+Deposito<<endl;
                    }
                    else{
                         cout<<"Saldo Atual e igual a :"<<Saldo<<endl;
                         }
        cout<<"Deseja fazer alguma retirada? 1=sim/0=nao!";
        cin>>RET;
        if(RET == true) {
               cout<<"Digite o valor da retirada : ";
               cin>>Retirada1;
               cout<<"Saldo atual e igual a : "<<(Saldo+Deposito-Retirada1)<<endl;
               cout<<"Valor do saque e igual a : "<<Retirada1<<endl;
               }
               
               else{
                    cout<<"seu saldo e : "<<Saldo+Deposito<<endl;
                    }
        cout<<"Deseja fazer outra retirada? 1=sim/0=nao!";
        cin>>RET2;
         if(RET2 == true) {
               cout<<"Digite o valor da retirada : ";
               cin>>Retirada2;
               cout<<"Saldo atual e igual a : "<<(Saldo+Deposito-Retirada1-Retirada2)<<endl;
               cout<<"Valor do saque e igual a : "<<Retirada2<<endl<<endl;
               }
               else{
                    cout<<"seu saldo e : "<<Saldo+Deposito-Retirada1-Retirada2<<endl<<endl<<endl;
                    }
        //apresentaçao dos resultados
        cout<<"O total de retira foi : "<<Retirada1+Retirada2<<endl;
        cout<<"o total de deposito e igual a : "<<Deposito<<endl;
        cout<<"Seu maior saldo e foi igual a : "<<Saldo+Deposito<<endl;
        cout<<"Seu saldo inicial era : "<<Saldo<<endl;
        cout<<"Saldo atual e igual a : "<<(Saldo+Deposito-Retirada1-Retirada2)<<endl;
        
        system("PAUSE");
        return (0);

}
