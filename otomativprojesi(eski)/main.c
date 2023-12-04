#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Hosgeldiniz*/

int main() 
{
	setlocale(LC_ALL, "Turkish");
	int araba_marka, araba_modeli, araba_paketi,parca, fiyat, islem, toplam_fiyat, parca_adeti, adres, siparis, odeme, cikis;
	printf("Araç markalarý sayý karþýlýðý:\n");
	printf("Fiat = 1, Renault = 2, Opel = 3, -gibi devam eder-\n");
	printf("Araç markanýzý seçiniz:\n");
	scanf("%d",&araba_marka);
/*araba marka 1 kýsmý */
	if (araba_marka == 1){
		printf("Araç modelleri sayý karþýlýðý:\n");
		printf("Araç modeli1 = 1, Araç modeli2 = 2, Araç modeli3 = 3\n");
		printf("Araç modelinizi seçiniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Geçerli bir model giriniz\n");
		}
		
	/*araba marka 2 kýsmý */		
	}	
	else if (araba_marka == 2){
		printf("Araç modelleri sayý karþýlýðý:\n");
		printf("Araç modeli1 = 1, Araç modeli2 = 2, Araç modeli3 = 3\n");
		printf("Araç modelinizi seçiniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Geçerli bir model giriniz\n");
		}
		
		
	}
	/*araba marka 3 kýsmý */	
	else if (araba_marka == 3){
		printf("Araç modelleri sayý karþýlýðý:\n");
		printf("Araç modeli1 = 1, Araç modeli2 = 2, Araç modeli3 = 3\n");
		printf("Araç modelinizi seçiniz:\n");
		scanf("%d",&araba_modeli);
		if (araba_modeli == 1){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 2){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else if (araba_modeli == 3){
			printf("Araç paketleri sayý karþýlýðý: \n");
			printf("Easy = 1, Urban = 2, Lounge = 3 \n");
			printf("Araç paketini giriniz\n");
			scanf("%d",&araba_paketi);
			if (araba_paketi == 1){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 2){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else if (araba_paketi == 3){
				printf("Depoda olan araç parçalarý:\n");
				printf("Araç parçalarý ve sayý karþýlýklarý sýralanýr\n");
				/*Araç karþýlýðýna göre bir tane daha if döngüsü oluþturulur*/
				printf("Almak istediðiniz araç parçasýný seçin: \n");
				scanf("%d",&parca);
				if (parca == 1){
					fiyat = 500; /*fiyat deðiþkenlik göstericek*/
					printf("Parçadan kaç adet almak istersiniz: \n");
					scanf("%d",&parca_adeti);
				}
				else{
					/*diðer parçalar için fiyat else if döngüsü oluþturulur*/
					printf("Geçerli bir parça giriniz");
				}
			}
			else{
				printf("Geçerli bir paket giriniz\n");
			}
			
			
		}
		else{
			printf("Geçerli bir model giriniz\n");
		}
	}	
	else{
		printf("Geçerli bir marka giriniz\n");
	}
	toplam_fiyat = fiyat * parca_adeti;
	printf("Toplam fiyat: %d TL dir. \n",toplam_fiyat);
	printf("Yapmak istediðiniz iþlemi seçin: (sipariþ = 1, çýkýþ = 2)\n");
	scanf("%d",&islem);
	if (islem == 1){
		printf("Sýrasýyla ödeme yöntemini ve adresinizi giriniz\n");
		/*scanf ile girdileri al*/
		printf("Sipariþ vermek için 1e, iptal etmek için 2 ye basýnýz.\n");
		scanf("%d",&siparis);
		if (siparis == 1){
			printf("Sipariþiniz ilgili firmaya gönderilmiþtir\n");
			printf("Çýkmak için 0 ve enter'a basýnýz\n");
			scanf("%d",&cikis);
		}
		else{
			printf("Sipariþiniz iptal edilmiþtir\n");
		}
	}
	else{
		printf("Çýkmak için 0 ve enter'a basýnýz\n");
		scanf("%d",&cikis);
	}
}


	
