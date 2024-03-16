//ikilik sistemden onluk sisteme cevirme
//convert to decimal from binary

#include<iostream>
#include<string>
using namespace std;
int main()
{

    string exit;
    int sayi,taban=1,decimal,sayac,result=0,a=1;

    while(a==1)
    {
        cout<<"enter your binary number : ";
        cin>>sayi;

           while(sayi>=1)
           {
             decimal = (sayi%10) * taban; //girilen sayisinin her basamağını 2 nin üstleriyle (0 dan başlayıp artırarak) çarp
             sayi = sayi / 10; //bir basamak eksilt
             result = result + decimal;
             taban = taban*2; //2 nin üstlerini artır
           }

        cout<<"decimal number : "<< result<<endl;

        cout<<"if u wanna continue pres any key or type exit : ";
        cin>>exit;

        if(exit == "exit")
        { 
        a=0;
        }
//eger devam ediyorsa degiskenleri resetle
     result=0;
     decimal=0;
     taban=1;

    }

    return 0;
}