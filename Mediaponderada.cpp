#include <iostream>
using namespace std;
int main()
{
    int N1,N2,N3;
    cout<<" Informe a sua notas em LIngua Portuguesa : ";
    cin>>N1;
    cout<<" Informe a sua notas em Matematica : ";
    cin>>N2;
    cout<<" Informe a sua notas em Direito : ";
    cin>>N3;
    
    cout<<"Portugues : " <<N1<<"  "<<"Matematica : "<<N2<<"  "<< "Direito : "<<N3<<"  "<<endl;
    cout<< "A media aritimetica e igual a : "<<(N1 + N2 + N3) /3.0<<endl;
    cout<<"A media pondereda e igual a : "<<((N1*2)+(N2*4)+(N3*3))/9<<endl;
    system("PAUSE");
    return (0);
}
