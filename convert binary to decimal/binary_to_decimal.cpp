//ikilik sistemden onluk sisteme cevirme
//convert to decimal from binary

#include<iostream>
using namespace std;
int main()
{
    int sayi,taban=1,decimal,sayac,result=0;

cout<<"enter your binary number : ";
cin>>sayi;

while(sayi>=1)
{
    decimal = (sayi%10) * taban; //girilen sayisinin her basamağını 2 nin üstleriyle (0 dan başlayıp artırarak) çarp
    sayi = sayi / 10; //bir basamak eksilt
    result = result + decimal;
    taban = taban*2; //2 nin üstlerini artır
}
cout<<"decimal number : "<< result;




    return 0;
}