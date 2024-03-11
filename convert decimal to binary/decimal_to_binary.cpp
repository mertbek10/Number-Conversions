//onlukluk sayi sisteminden ikilik sayi sistemine dönüştürme
//convert to binary from decimal

#include<iostream>
using namespace std;
int main()
{
 int sayi,dizi[100],i=0,sayac=0;

cout<<"enter your decimal number : ";
cin>>sayi;

while(sayi>1)
{
    dizi[i]=sayi%2; //sayinin 2 ye göre modunu diziye eşitle
    i++; 
    sayi=sayi/2; //girilen sayiyi daima 2 ye böl

       if( sayi==2 || sayi==3 ) //sayi en son ya 2 ya da 3 kalacaktır ve döngüden çık
        {
           break;
        }
     sayac++; // diziyi yazdırırken nerden başlayacağını belirlemek için sayac kullan
}

cout<<"binary number : ";

cout<< sayi/2<< sayi%2; //3 veya 2 sayisinin 2 ye bölümünden başla arkasından aynı sayinin 2 ye göre modunu yazdir

for(i=sayac ; i>=0 ; i--)
{
    cout<<dizi[i];//while döngüsünde aldığımız modları yazdır
}

    return 0;
}



