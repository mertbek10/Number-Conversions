//onlukluk sayi sisteminden ikilik sayi sistemine dönüştürme
//convert to binary from decimal

#include<iostream>
#include<string>
using namespace std;
int main()
{
 int sayi,dizi[100],i=0,sayac=0,a=1;
 string exit;

 
while(a==1)
    {
       cout<<"enter your decimal number : ";
       cin>>sayi;

    //2 ve 3 sayilari algoritmanın kilit sayilari oldugundan extra koşullarla kontrol ediliyor
    //eger kullanıcı 2 ve 3 un binary degerlerini isterse hic donguye girmeden degerleri yazdir
    if(sayi==2)
      {
        cout<<"binary number : "<<10;
        break;
      }

    else if(sayi==3)
       {
        cout<<"binary number : "<<11;
        break;
       }

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
        cout<<endl;
        cout<<"if u wanna continue press any key or type exit : ";
        cin>>exit;

        if(exit == "exit")
        { 
        a=0;
        }

        i=0;
        sayac=0;

    }
    
    return 0;
}



