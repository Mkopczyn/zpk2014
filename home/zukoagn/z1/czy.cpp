#include <iostream>
 using namespace std;

int main()
{
 int i;
 cin>> i;
 /*Je�eli chcemy, aby program si� zatrzyma� to liczba i musi by� tylko i wy��cznie podzielna przez 2*/

 while(i!=1)
 {
     if(i%2==0)
     {
         if(i==2)
         cout<<"TAK"<<endl;
         i=i/2;
     }
     else
    {
        i=1;
    cout<<"NIE"<<endl;
    }

 }


}
