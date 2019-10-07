#include <stdio.h>           // head standar
#include <iostream>   // head untuk cout dan cin
#include <conio.h>          // head untuk clrscr

using namespace std;

int main()         // kepala program
{                              //blok tubuh program
int d;                      //inisialisasi variable integer bilangan bulat
int i=0,n,j,b[100];              //inisialisasi variable terdapat array satu dimensi
char karakter;                    //inisialisasi character

awal:                     // check point untuk mengulang program
//clrscr ();                // untuk membersihkan layar pada saat program di ulang
cout<<"\n\n\t\tmenu:\n";            // menampilkan kata menu menggunakan cout
cout<<"\n\n\t\t[1] Desimal ke Biner\n";                               // menampilkan(write)
cout<<"\t\t[2] Desimal ke Oktal\n";                        // menampilkan (write)
cout<<"\t\t[3] Desimal ke Hexadesimal\n";         //menampilkan (write)
cout<<"\n\n\t\tpilihan hanya 1 s/d 3";                    //menampilkan (write)

cout<<"\n\t\tsilahkan pilih menu: ";                       //menampilakan (write)
cin>>d;                                   //memasukan input keyboard (read) ke variable d

switch(d)             //penyeleksian kondisi pada case
{                              //blok tubuh switch
case 1:                  //pilihan pertama

cout<<"\n\t\tmasukan angka desimal: ";              //menampilkan kata
cin>>n;                 //memasukan input keyboard ke var n

while(n>0)  // notasi pengulangan jika bernilai true maka lanjut ke instruksi selanjutnya
{                              //blok tubuh while 1
b[i]=n%2;            //penugasan array b[i]
n=n/2;                  // penugasan variable n
i++;                        // variable i menaik atau bertambah

}                              //akhir tubuh while 1

cout<<"\n\t\tdalam biner: ";       // menampilkan kata
j=i-1;                                                      // penugasan atau penkondisian j

for (i=j;j>=0;j--)    // pengulangan for jumlah pengulangan sudah diketahui dan j menurun
{                               // blok tubuh for1
cout<<b[j];         // menampilkan b[j]

}                              // akhir tubuh for 1

break;                   // berhenti dan next pada instruksi selanjutnya

case 2:                                  // pilihan ke dua
cout<<"\n\t\tmasukan angka desimal: ";               //menampilkan kata
cin>>n;                                 // input data keyboard pada variable n

while (n>0)                         // notasi  pengulangan while jika true maka lanjut
{                                              // blok tubuh while 2
b[i]=n%8;                            // penugasan array b[i]
n=n/8;                                                  // penugasan variable n
i++;                                        // variable i menaik
}                                               // akhir tubuh while 2

printf("\n\t\tdalam oktal :");       // menampilkan kata
j=i-1;                       // penugasan j dikurang 1

for (i=j;j>=0;j--)                //pengulangan for dan variable j menurun
{                                              //blok tubuh for 2
cout<<b[j];                          // menampilkan kata
}                                              // akhir for 2

break;                   // stop atau batas case2

case 3:                                  // pilihan ke 3
cout<<"\n\t\tmasukan angka desimal: ";               // menampilkan kata
cin>>n;                                 // input data keyboard dan dimasukan pada variable n

while (n>0)                         // notasi while  jika kondisi true maka lanjut
{                                              // blok tubuh while 3
b[i]=n%16;                           // penugasan array satu dimensi
n=n/16;                                // penugasan kondisi variable n
i++;                                        // variable i menaik
}                                              // akhir tubuh while 3

cout<<"\n\t\tdalam hexa:";         //menampilkan kata
j=i-1;                                      // penugasan j
for (i=j;j>=0;j--)       // pengulangan for jml pengulangannya sdh di ketahui dan j menurun
{                              // blok tubuh for 3
if(b[j]<10)                           // pemilihan kondisi b, jika kondisi true maka lanjut
{                              // blok tubuh if
cout<<b[j];          // menampilkan b[j]
}                              //akhir tubuh if
else                        // notasi pasangan if jika kondisi if false b[j] lebih dari 10
{                              // blok tubuh else
switch(b[j])        // penyeleksian kondisi pada b[j] jika b[j]>10
{                              // blok tubuh switch
case 10:                 // bila b[j]=10 maka tulis A
cout<<"A";         //menampilkan A
break;                   //stop
case 11:                // bila b[j]=11 maka tulis B
cout<<"B";          //menampilkan B
break;                   // stop
case 12:                // bila b[j] = 12 maka tulis C
cout<<"C";          // menampilkan C
break;                    // stop
case 13:                // bila b[j]=13 maka tulis D
cout<<"D";         // menampilkan D
break;                   // stop
case 14:                // bila b[j]= 14 maka tulis E
cout<<"E";          //menampilkan E
break;                   //stop
case 15:                // bila b[j] = 15 maka tulis F
cout<<"F";          // menampilkan F
break;                   // stop
}                              // akhir tubuh switch b[j]
}                              // akhir tubuh ele
}                              //akhir tubuh if
}                              // akhir tubuh switch d
  cout<<"\n\n\t\tcoba lagi? y/n";              // menampilkan kata
  karakter=getch();                                           // membaca karakter input keyboard
  if(karakter=='y')                             // jika karakter sama dengan y
  {            //blok badan if 2
  goto awal;         // loncat ke awal:
  }            //akhir badan if
  else      // atau bila karakter tidak true ‘y’ maka tampilkan
  {cout<<"\n\n\t\tterima kasih telah menggunakan program ini";}

}              // akhir tubuh program
