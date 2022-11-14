#include <iostream.h>
#include <conio.h>
void main()
{
int nil[5];
cout<<"========================================="<<endl;
cout<<"Mengisikan Nilai Ke Setiap Indeks Array ke data nilai "<<endl;
cout<<"========================================="<<endl;
for (int i=0;i<5;i++)
 {
           cout<<"masukkan data nilai["<<i<<"] = ";
               cin>>nil[i];
        }
        cout<<endl;
        cout<<"========================================="<<endl;
        cout<<"Menampilkan Nilai Yang Telah Di Inputkan"<<endl;
        cout<<"========================================"<<endl;
for (int j=0;j<5;j++)
 {
            cout<<"data nilai ["<<j<<"]= "<<nil[j]<<endl;
        }
getch();
}
