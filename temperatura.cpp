#include <iostream>
using namespace std;
int main(){
    float F, C;
    cout<< "Informe a temperatura em Fahrenheit: ";
    cin>>F;
    C = (5.0/9 *(F-32));
    cout<<"A temperatura em Celsios e : "<<C;
     
    system("PAUSE");
    return(0);
}
