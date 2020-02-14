#include <iostream.h>
#include <conio.h>
#include <time.h>

float sayiAl()
{
   float a ;
   cout<<"Bir sayi giriniz: ";
   cin>>a;
   return a;
}

int faktoriyel(int sayi)
{
   int sonuc=1;
   for (int i = 1; i < sayi+1; i++)
   {
        sonuc*=i;
   }
   return sonuc;
}

float UstAl(float taban,float ust)
{
     float sonuc=1;
     if(ust>=0)
     {
         for (int i = 0; i < ust; i++)
         {
             sonuc*=taban;
         }
     }
     else
     {
        for (int i = 0; i < (ust*-1); i++)
         {
             sonuc*=taban;
         }
         sonuc=1/sonuc;
     }
     return sonuc;
}


main()
{
        b:
        float sayi1,sayi2,sonuc,sayac=0;
        char islem,durum;
        clrscr(); 
        system("color 2");
        cout<<"\n\t\tHesap Makinesi vs1.0\n\n";
        cout<<"Yapmak istediginiz islemi secin:\n\nToplama icin\t+\nCikarma icin\t-\nCarpma icin\t*\nBolme icin\t/\nMod Alma icin\t%\nFaktoriyel icin\t!\nUs Almak icin\t$\n";
        cin>>islem;
        k:
        switch (islem)
        {
                case '+':
                        clrscr();
                        system("color 7D");;
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nToplama Islemi\n\n";
                        sayi1=sayiAl();
                        sayi2=sayiAl();
                        sonuc=sayi1+sayi2;
                        cout<<"\n\t"<<sayi1<<" + "<<sayi2<<" = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '-':
                	clrscr();
                        system("color E5");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nCikarma Islemi\n\n";
                        sayi1=sayiAl();
                        sayi2=sayiAl();
                        sonuc=sayi1-sayi2;
                        cout<<"\n\t"<<sayi1<<" - "<<sayi2<<" = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '*':
                        clrscr();
                        system("color B1");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nCarpma Islemi\n\n";
                        sayi1=sayiAl();
                        sayi2=sayiAl();
                        sonuc=sayi1*sayi2;
                        cout<<"\n\t"<<sayi1<<" * "<<sayi2<<" = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '/':
                	sayac=0;
                        clrscr();
                        system("color 8E");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nBolme Islemi\n\n";
                        sayi1=sayiAl();
                        do
                        {
                                if(sayac>0)
                                {
                                    cout<<"************************\n    0 a bolme hatasi! \n************************\n0 dan Farkli ";
                                }
                        	sayi2=sayiAl();
                                sayac++;
                        }while(sayi2==0);
                        sonuc=sayi1/sayi2;
                        cout<<"\n\t"<<sayi1<<" / "<<sayi2<<" = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '%':
                	sayac=0;
                        clrscr();
                        system("color 37");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nMod Alma Islemi\n\n";
                        sayi1=sayiAl();
                         do
                        {
                                if(sayac>0)
                                {
                                    cout<<"************************\n    0 a bolme hatasi! \n************************\n0 dan Farkli ";
                                }
                        	sayi2=sayiAl();
                                sayac++;
                        }while(sayi2==0);
                        sonuc=int(sayi1)%int(sayi2);
                        cout<<"\n\t"<<sayi1<<" % "<<sayi2<<" = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '!':
                	sayac=0;
                        clrscr();
                        system("color 60");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nFaktoriyel Islemi\n\n";
                        do
                        {
                		if(sayac>0)
                                {
                                    cout<<"******************************************\n  Negatif sayilarin faktoriyeli olmaz! \n******************************************\nPozitif ";
                                }
                           	sayi1=sayiAl();
                           	sayac++;
                        }while(sayi1<0);
                        sonuc=faktoriyel(int(sayi1));
                        cout<<"\n\t"<<sayi1<<"! = "<< sonuc;
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                break;
                case '$':
                        clrscr();
                        system("color 9F");
                        cout<<"\n\t\tHesap Makinesi vs1.0\n\nUs Alma Islemi\n\n";
                        cout<< "Taban sayisini giriniz: ";
                        cin>>sayi1;
                        cout<<"Ussu giriniz: ";
                        cin>>sayi2;
                        if(sayi1==0 && sayi2==0)
                        {
                               cout<<"\n\t0 ussu 0 = Belirsizdir\n";
                        }
                        else if(sayi1==0 && sayi2!=0)
                        {
                               cout<<"\n\t0 ussu "<<sayi2<<" = 0\n";
                        }
                        else
                        {
                            sonuc=UstAl(sayi1,sayi2);
                            cout<<"\n\t"<<sayi1<<" ussu "<<sayi2<<" = "<< sonuc;
                        }
                        cout<<"\n\nAyni islemi yeniden kullanmak icin\t R\nFarkli bir islem yapmak icin\t\t N\nProgramdan cikma icin\t\t\t X ye basiniz...\t";
                        cin>>durum;
                        if(durum=='R' || durum=='r')
                        {
                                goto k;
                        }
                        else if(durum=='N' || durum=='n')
                        {
                                goto b;
                        }
                        else if(durum=='X' || durum=='x')
                        {
                                exit(0);
                        }
                        else
                        {
                            cout<<"Hatali giris yaptiniz.";
                            system("pause");
                            goto b;
                        }
                case 'x':
                        exit(0);
                        break;
                case 'X':
                        exit(0);
                        break;
                default:
                        cout<<"Hatali giris yaptiniz.\n";
                        system("pause");
                        goto b;
                break;
        }
        getch();
}