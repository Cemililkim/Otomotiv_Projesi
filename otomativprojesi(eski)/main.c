#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Hosgeldiniz*/

int main() 
{
	setlocale(LC_ALL, "Turkish");
	int araba_marka, araba_modeli, araba_paketi,parca, fiyat, islem, toplam_fiyat, parca_adeti, adres, siparis, odeme, cikis;
	printf("Ara� markalar� say� kar��l���:\n");
	printf("Fiat = 1, Renault = 2, Opel = 3, -gibi devam eder-\n");
	printf("Ara� markan�z� se�iniz:\n");
	scanf("%d",&araba_marka);
/*araba marka 1 k�sm� */
	if (araba_marka == 1){
		printf("Ara� modelleri say� kar��l���:\n");
		printf("Ara� modeli1 = 1, Ara� modeli2 = 2, Ara� modeli3 = 3\n");
		printf("Ara� modelinizi se�iniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Ge�erli bir model giriniz\n");
		}
		
	/*araba marka 2 k�sm� */		
	}	
	else if (araba_marka == 2){
		printf("Ara� modelleri say� kar��l���:\n");
		printf("Ara� modeli1 = 1, Ara� modeli2 = 2, Ara� modeli3 = 3\n");
		printf("Ara� modelinizi se�iniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Ge�erli bir model giriniz\n");
		}
		
		
	}
	/*araba marka 3 k�sm� */	
	else if (araba_marka == 3){
		printf("Ara� modelleri say� kar��l���:\n");
		printf("Ara� modeli1 = 1, Ara� modeli2 = 2, Ara� modeli3 = 3\n");
		printf("Ara� modelinizi se�iniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Ara� paketleri say� kar��l���: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Ara� paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan ara� par�alar�:\n");
				printf("Ara� par�alar� ve say� kar��l�klar� s�ralan�r\n");
				/*Ara� kar��l���na g�re bir tane daha if d�ng�s� olu�turulur*/
				printf("Almak istedi�iniz ara� par�as�n� se�in: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat de�i�kenlik g�stericek*/
					printf("Par�adan ka� adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*di�er par�alar i�in fiyat else if d�ng�s� olu�turulur*/
					printf("Ge�erli bir par�a giriniz");
				}
			}
			else{
				printf("Ge�erli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Ge�erli bir model giriniz\n");
		}
	}	
	else{
		printf("Ge�erli bir marka giriniz\n");
	}
	toplam_fiyat = fiyat * parca_adeti;
	printf("Toplam fiyat: %d TL dir. \n",toplam_fiyat);
	printf("Yapmak istedi�iniz i�lemi se�in: (sipari� = 1, ��k�� = 2)\n");
	scanf("%d",&islem);
	if (islem == 1){
		printf("S�ras�yla �deme y�ntemini ve adresinizi giriniz\n");
		/*scanf ile girdileri al*/
		printf("Sipari� vermek i�in 1e, iptal etmek i�in 2 ye bas�n�z.\n");
		scanf("%d",&siparis);
		if (siparis == 1){
			printf("Sipari�iniz ilgili firmaya g�nderilmi�tir\n");
			printf("��kmak i�in 0 ve enter'a bas�n�z\n");
			scanf("%d",&cikis);
		}
		else{
			printf("Sipari�iniz iptal edilmi�tir\n");
		}
	}
	else{
		printf("��kmak i�in 0 ve enter'a bas�n�z\n");
		scanf("%d",&cikis);
	}
}


	
