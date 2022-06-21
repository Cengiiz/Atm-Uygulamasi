#include <iostream>
using namespace std;


struct Kullanici
{
	string musterNo;
	string sifre;
	float bakiye;
};



int main()
{

	Kullanici kullanicilar[100];
	char menu;
	cout << "Merhaba! Zamar Bankasinin ATM Makinesine Hos Geldiniz..." << endl;
	do
	{
		
		
		cout << "i -> Giris yapiniz" << endl;
		cout << "c -> Yeni bir Hesap Olusturunuz" << endl;
		cout << "q -> Programi sonlandir" << endl;
		cin >> menu;
		if (menu=='i'||menu=='I')
		{
			menu = '0';
			Kullanici kullanici;
			cout << "Lutfen musteri numaranizi girin: ";
			cin >> kullanici.musterNo;
			cout << "Lutfen sifrenizi giriniz : ";
			cin >> kullanici.sifre;
			for (int i = 0;i < 100;i++)
			{
				if (kullanicilar[i].musterNo == kullanici.musterNo&& kullanicilar[i].sifre==kullanici.sifre)
				{
					char menu2;
					cout << "Girilen bilgiler dogurudur " << endl;
					cout << "Musteri Nosu: " << kullanicilar[i].musterNo<< endl;
					cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
					do
					{
						cout << "d -> Hesabiniza para yatirin" << endl;
						cout << "w -> Hesabinizdan para cekin" << endl;
						cout << "r  -> Bakiye goruntuleyin" << endl;
						cout << "m -> Para transferi" << endl;
						cout << "n -> Telefon fatura ödeme" << endl;
						cout << "o  -> Elektirik fatura ödeme" << endl;
						cout << "p -> Su fatura ödeme" << endl;
						cout << "h -> Dogalgaz fatura ödeme" << endl;
						cout << "q -> Hesaptan cikis yap" << endl;
						cin >> menu2;
						if (menu2=='D'||menu2=='d')
						{
							int para;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Hesabiniza yatirmak istediginiz tutari giriniz" << endl;
							cin >> para;
							kullanicilar[i].bakiye += para;
							cout << "--Yeni Bakiyeniz: " << kullanicilar[i].bakiye << endl;
							menu2 = '0';
						}
						else if (menu2 == 'W' || menu2 == 'w')
						{
							int para;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Cekmek istediginiz tutari giriniz" << endl;
							cin >> para;
							kullanicilar[i].bakiye -= para;
							cout << "--Yeni Bakiyeniz: " << kullanicilar[i].bakiye << endl;
							cin >> menu2;
						}
						else if (menu2 == 'R' || menu2 == 'r')
						{
							cout << "--Guncel Bakiyeniz: " << kullanicilar[i].bakiye << endl;
							menu2 = '0';
						}
						else if (menu2 == 'M' || menu2 == 'm')
						{
							string transfer;
							int para;
							cout << "Transfer yapmak istediginiz musteri numarasini giriniz" << endl;
							cin >> transfer;
							cout << "Gondermek istediginiz tutari giriniz" << endl;
							cin >> para;
							kullanicilar[i].bakiye -= para;
							for (int k = 0;k < 100;k++)
							{
								if (kullanicilar[k].musterNo == transfer)
								{
									kullanicilar[k].bakiye += para;
									break;
								}
							}
							menu2 = '0';
							
						}
						else if (menu2 == 'N' || menu2 == 'n')
						{
							int telefonfatura = (rand() % 50) + 50;
							char faturakarar;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Telefon Faturaniz:" <<telefonfatura<<" TL" << endl;
							cout << "Odemek istiyor musunuz ? (E-e/H-h)" << endl;
							cin >> faturakarar;
							if (faturakarar=='e'||faturakarar=='E')
							{
								kullanicilar[i].bakiye -= telefonfatura;
								cout << "--Guncel Bakiye: " << kullanicilar[i].bakiye << endl;
							}
							menu2 = '0';
						}
						else if (menu2 == 'O' || menu2 == 'o')
						{
							int elektrikfatura = (rand() % 50) + 100;
							char faturakarar;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Telefon Faturaniz:" << elektrikfatura << " TL" << endl;
							cout << "Odemek istiyor musunuz ? (E-e/H-h)" << endl;
							cin >> faturakarar;
							if (faturakarar == 'e' || faturakarar == 'E')
							{
								kullanicilar[i].bakiye -= elektrikfatura;
								cout << "--Guncel Bakiye: " << kullanicilar[i].bakiye << endl;
							}
							menu2 = '0';
						}
						else if (menu2 == 'P' || menu2 == 'p')
						{
							int sufatura = (rand() % 50) + 100;
							char faturakarar;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Telefon Faturaniz:" << sufatura << " TL" << endl;
							cout << "Odemek istiyor musunuz ? (E-e/H-h)" << endl;
							cin >> faturakarar;
							if (faturakarar == 'e' || faturakarar == 'E')
							{
								kullanicilar[i].bakiye -= sufatura;
								cout << "--Guncel Bakiye: " << kullanicilar[i].bakiye << endl;
							}
							
							menu2 = '0';
						}
						else if (menu2 == 'H' || menu2 == 'h')
						{
							int dogalgazfatura = (rand() % 100) + 300;
							char faturakarar;
							cout << "--BAKIYE: " << kullanicilar[i].bakiye << endl;
							cout << "Telefon Faturaniz:" << dogalgazfatura << " TL" << endl;
							cout << "Odemek istiyor musunuz ? (E-e/H-h)" << endl;
							cin >> faturakarar;
							if (faturakarar == 'e' || faturakarar == 'E')
							{
								kullanicilar[i].bakiye -= dogalgazfatura;
								cout << "--Guncel Bakiye: " << kullanicilar[i].bakiye << endl;
							}

							menu2 = '0';
						}
						else if (menu2 == 'Q' || menu2 == 'q')
						{
							break;
						}
						else
						{
							cout << "Hatali tuslama yaptiniz" << endl;
							menu2 = '0';
						}
					} while (menu2=='0');

					break;
				}
			}
		}
		else if (menu == 'c'||menu=='C')
		{
			Kullanici kullanici;
			cout << "Lutfen musteri numaranizi girin: ";
			cin >> kullanici.musterNo;
			cout << "Lutfen sifrenizi giriniz : ";
			cin >> kullanici.sifre;
			for (int i=0;i<100;i++)
			{
				if (kullanicilar[i].musterNo=="")
				{
					kullanicilar[i] = kullanici;
					kullanicilar[i].bakiye = 0;
					break;
				}
			}
			cout << "Yeni hesap olusturuldu " << endl;
			menu = '0';
		}
		else if (menu == 'q'||menu=='Q')
		{
			break;
		}
		else
		{
			cout << "Hatali tuslama yaptiniz" << endl;
			menu = '0';
		}


	} while (menu == '0');

    system("PAUSE");
}
