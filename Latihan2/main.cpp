#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int data[5];
   int i, j, tmp;
   cout<<"Program Mengurutkan Angka Kecil Ke Besar"<<endl;
   for(i=0; i<5; i++)
   {
       cout<<"Masukkan Angka ke "<<(i+1)<<" : ";
      cin>>data[i];
   }
   cout<<"Data sebelum diurutkan : "<<endl;
   for(i=0; i<5; i++)
   {
       cout<<data[i]<<" ";
   }
   cout<<endl;
   for(i=0; i<9; i++)
   {
       for(j=i+1; j<5; j++)
      {
          if(data[i]>data[j])
         {
             tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
         }
      }
   }
   cout<<"Data setelah diurutkan : "<<endl;
   for(i=0; i<5; i++)
   {
       cout<<data[i]<<" ";
   }
   getch();
}
