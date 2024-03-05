#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
    for( int x = 0; x < 100001; x++) {
         if(x%3 == 0){
         cout<<x<<"  ";
         Sleep(200);
         }
         }
    getch();
    return 0;
}