    #include <iostream>
    #include <math.h>
    using namespace std;
    
    int main()
    {
        int N1, N2;
        cout<<"Informe 2 numeros inteiro sepados por um spaco : ";
        cin>>N1,cin>>N2;
        
        cout<<"A soma dos dois numeros e : "<<N1+N2<<endl;
        cout<<"A subtracao dos numeros do primeiro para o segundo e  : "<<N1-N2<<"   inversamente e "<<N2-N1<<endl;
        cout<<"A multiplicação dos numeros e : "<<N1*N2<<endl;
        cout<<"O quociente interio do divicao e :"<<N1/N2<<endl;
        cout<<"O resto da divicao dos dois numeros e  : "<<N1%N2<<"  inversamente e "<<N2%N1<<endl;
        cout<<"O resultado da potenciacao do primeiro numero pelo segundo e : "<<pow(N1,N2)<<endl;
    
        system("PAUSE");
        return 0;
    }
