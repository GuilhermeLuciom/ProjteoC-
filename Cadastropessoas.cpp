#include <iostream>

using namespace std;

int main (){
    
    string Nome;
    float Altura = 0,Alturamenor = 5 ,Alturamaior = 0,Alturamedia = 0;
    bool Sexo,Add;
    int Totaldepessoas;
    
          cout<<"E obrigatorio Adiconar pelo menos uma pessoal"<<endl;
    
    do{
         cout<<" Clique na tecla 1 para addinconar uma pessoa"<<endl;
         cin>>Add;
         
         if(Add == 1){
                cout<<"Informe o sexo sendo \n 1 = Feminio \n 0 = Masculino  :   "<<endl;
                cin>>Sexo;
                cout<<"Informe o nome : "<<endl;
                cin>>Nome;
                cout<<"Informe a Altura : "<<endl;
                cin>>Altura;
         if(Sexo == 0){       
                if(Altura < Alturamenor){
                          Alturamenor = Altura;
                          Alturamedia = Alturamedia + Altura;
                          }
                else if(Altura > Alturamaior){
                     Alturamaior = Altura;
                     Alturamedia = Alturamedia+Altura;
                     }
                else if(Altura > Alturamenor && Altura < Alturamaior)
                     Alturamedia = Alturamedia+Altura;
                     }
         }

                
     }while(Add == 1);
     
      cout<<"Quantas pessoas foram adicionadas ?"<<endl;
              cin>>Totaldepessoas;
      cout<<"Altura media : "<<(Alturamedia/Totaldepessoas)<<endl<<"Maior Altura : "<<Alturamaior<<endl<<" Menor Altura : "<<Alturamenor<<endl;
     
    system("PAUSE");
    return 0;
}
