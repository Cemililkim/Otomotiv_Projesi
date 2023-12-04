#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int marka, model, parca, toplam, miktar, islem, odeme, karar, kart_numarasi, cvc, tarih, gonderim, tekrar, i;
    char adres[300], kart_ad[50];

    // Program�n �al��ma dizinini al
    char current_directory[FILENAME_MAX];
    if (getcwd(current_directory, sizeof(current_directory)) == NULL) {
        perror("getcwd() error");
        return EXIT_FAILURE;
    }
    // Dosya yolunu olu�tur
    char file_path[FILENAME_MAX];
    snprintf(file_path, sizeof(file_path), "%s/arac_markalar�.txt", current_directory);
	FILE *dosya = fopen(file_path, "r+");
    char markalar[300];

    if (dosya == NULL) {
        perror("Dosya a�ma hatas�");
        return EXIT_FAILURE;
    }

    while (fgets(markalar, sizeof(markalar), dosya) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", markalar);
    }

    fclose(dosya);

    printf("\nArac�n�z�n markas�n� se�iniz\n");
    scanf("%d", &marka);


    if (marka == 1) {
    	snprintf(file_path, sizeof(file_path), "%s//FIAT//fiat_modeller.txt", current_directory);
        FILE *dosya2 = fopen(file_path, "r+");
        char modeller_fiat[300];

        while (fgets(modeller_fiat, sizeof(modeller_fiat), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_fiat);
        }

        fclose(dosya2);
        printf("\n");
		scanf("%d",&model);
		if (model == 1){
			snprintf(file_path, sizeof(file_path), "%s//FIAT//linea//linea_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char linea_parcalar[300];

        	while (fgets(linea_parcalar, sizeof(linea_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", linea_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
			snprintf(file_path, sizeof(file_path), "%s//FIAT//egea//egea_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char egea_parcalar[300];

        	while (fgets(egea_parcalar, sizeof(egea_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", egea_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
			snprintf(file_path, sizeof(file_path), "%s//FIAT//tofas//tofas_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");

        	char tofas_parcalar[300];

        	while (fgets(tofas_parcalar, sizeof(tofas_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", tofas_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else{
			printf("L�tfen ge�erli bir model giriniz\n");
			main();
		}
    } 
	else if (marka ==2){
		snprintf(file_path, sizeof(file_path), "%s//BMW//bmw_modeller.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");

        char modeller_bmw[300];

        while (fgets(modeller_bmw, sizeof(modeller_bmw), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_bmw);
        }

        fclose(dosya2);
		printf("\n");
		scanf("%d",&model);
		if (model == 1){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a11X//11X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a11x_parcalar[300];

        	while (fgets(a11x_parcalar, sizeof(a11x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a11x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a12X//12X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a12x_parcalar[300];

        	while (fgets(a12x_parcalar, sizeof(a12x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a12x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a13X//13X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a13x_parcalar[300];

        	while (fgets(a13x_parcalar, sizeof(a13x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a13x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 4){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a21X//21X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a21x_parcalar[300];

        	while (fgets(a21x_parcalar, sizeof(a21x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a21x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 5){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a22X//22X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a22x_parcalar[300];

        	while (fgets(a22x_parcalar, sizeof(a22x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a22x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 6){
		snprintf(file_path, sizeof(file_path), "%s//BMW//a23X//23X_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        	char a23x_parcalar[300];

        	while (fgets(a23x_parcalar, sizeof(a23x_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a23x_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else {
			printf("L�tfen ge�erli bir model giriniz\n");
			main();
		}
    }
    else if (marka ==3){
		snprintf(file_path, sizeof(file_path), "%s//AUDI//audi_modeller.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char modeller_audi[300];

        while (fgets(modeller_audi, sizeof(modeller_audi), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_audi);
        }

        fclose(dosya2);
        printf("\n");
		scanf("%d",&model);
		if (model == 1){
			snprintf(file_path, sizeof(file_path), "%s//AUDI//a1//a1_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char a1_parcalar[300];

        	while (fgets(a1_parcalar, sizeof(a1_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a1_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
			snprintf(file_path, sizeof(file_path), "%s//AUDI//a2//a2_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char a2_parcalar[300];

        	while (fgets(a2_parcalar, sizeof(a2_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a2_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
			snprintf(file_path, sizeof(file_path), "%s//AUDI//a3//a3_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char a3_parcalar[300];

        	while (fgets(a3_parcalar, sizeof(a3_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a3_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 4){
			snprintf(file_path, sizeof(file_path), "%s//AUDI//a4//a4_parcalar.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        	char a4_parcalar[300];

        	while (fgets(a4_parcalar, sizeof(a4_parcalar), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", a4_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else {
			printf("L�tfen ge�erli bir model giriniz\n");
			main();
		}
    }
	
    else if (marka ==4){
			snprintf(file_path, sizeof(file_path), "%s//FERRARI//ferrari_modeller.txt", current_directory);
			FILE *dosya2 = fopen(file_path, "r+");
        char modeller_ferrari[300];

        while (fgets(modeller_ferrari, sizeof(modeller_ferrari), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_ferrari);
        }

        fclose(dosya2);
        printf("\n");
        scanf ("%d",&model);
		
		if (model == 1){
		snprintf(file_path, sizeof(file_path), "%s//FERRARI//ferrari1//ferrari1_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char ferrari1_parcalar[300];

        while (fgets(ferrari1_parcalar, sizeof(ferrari1_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", ferrari1_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
		snprintf(file_path, sizeof(file_path), "%s//FERRARI//ferrari2//ferrari2_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char ferrari2_parcalar[300];

        while (fgets(ferrari2_parcalar, sizeof(ferrari2_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", ferrari2_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
		snprintf(file_path, sizeof(file_path), "%s//FERRARI//ferrari3//ferrari3_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char ferrari3_parcalar[300];

        while (fgets(ferrari3_parcalar, sizeof(ferrari3_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", ferrari3_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
	}
    else if (marka ==5){
		snprintf(file_path, sizeof(file_path), "%s//LANCER//lancer_modeller.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char modeller_lancer[300];

        while (fgets(modeller_lancer, sizeof(modeller_lancer), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_lancer);
        }

        fclose(dosya2);
        printf("\n");
        scanf ("%d",&model);
		
		if (model == 1){
		snprintf(file_path, sizeof(file_path), "%s//LANCER//lancer1//lancer1_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char lancer1_parcalar[300];

        while (fgets(lancer1_parcalar, sizeof(lancer1_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", lancer1_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
		snprintf(file_path, sizeof(file_path), "%s//LANCER//lancer2//lancer2_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char lancer2_parcalar[300];

        while (fgets(lancer2_parcalar, sizeof(lancer2_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", lancer2_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
		snprintf(file_path, sizeof(file_path), "%s//LANCER//lancer3//lancer3_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char lancer3_parcalar[300];

        while (fgets(lancer3_parcalar, sizeof(lancer3_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", lancer3_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
	}
    else if (marka ==6){
		snprintf(file_path, sizeof(file_path), "%s//VOLKSWAGEN//volkswagen_modeller.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char modeller_volkswagen[300];

        while (fgets(modeller_volkswagen, sizeof(modeller_volkswagen), dosya2) != NULL) {
            setlocale(LC_ALL, "Turkish");
            printf("%s", modeller_volkswagen);
        }

        fclose(dosya2);
        printf("\n");
        scanf ("%d",&model);
		
		if (model == 1){
		snprintf(file_path, sizeof(file_path), "%s//VOLKSWAGEN//passat//passat_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char passat_parcalar[300];

        while (fgets(passat_parcalar, sizeof(passat_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", passat_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 2){
		snprintf(file_path, sizeof(file_path), "%s//VOLKSWAGEN//jetta//jetta_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char jetta_parcalar[300];

        while (fgets(jetta_parcalar, sizeof(jetta_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", jetta_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
		else if (model == 3){
		snprintf(file_path, sizeof(file_path), "%s//VOLKSWAGEN//golf//golf_parcalar.txt", current_directory);
		FILE *dosya2 = fopen(file_path, "r+");
        char golf_parcalar[300];

        while (fgets(golf_parcalar, sizeof(golf_parcalar), dosya2) != NULL) {
        setlocale(LC_ALL, "Turkish");
        printf("%s", golf_parcalar);
        }
        
        fclose(dosya2);        
        printf("Ka� kez sipari� vermek istersiniz?\n");
        scanf("%d",&tekrar);
        for (i = 0; i < tekrar; i++){
				
       		printf("Hangi parcayi almak istiyorsaniz parcayi sirasiyla seciniz (1,2,3)\n");	        
			scanf("%d",&parca);
			printf("Par�adan ka� adet almak istersiniz\n");
			scanf("%d",&miktar);/*burda miktar girilcek*/

			if (parca == 1){
				toplam += (500 * miktar);
			}
			else if (parca == 2){
				toplam += (1000 * miktar);
			}
			else if (parca == 3){
				toplam += (2000 * miktar);
			}
			else{
				printf("L�tfen ge�erli bir par�a giriniz\n");
				main();
			}
		}
		}
	}
    else{
    	printf("Di�er marka ve modeller �ok yak�nda eklenecektir\n");
    	main();
	}
	printf("Sepetiniz %d TL'dir\n",toplam);
	printf("Adres ve �deme ekran�na gitmek isterseniz 1e, ba�ka model i�in sipari� vermek isterseniz 2ye bas�n�z\n");
	scanf("%d",&islem);
	if (islem == 1){
		printf("Par�an�n kargolanmas�n� istedi�iniz adresi giriniz (bo�luk yerine �_� kullan�n)\n");
		scanf("%s",&adres);
		printf("�deme �eklinizi se�iniz Kap�da �deme: 1, Banka Veya Kredi Kart�: 2, Havale/EFT: 3 \n");
		scanf("%d",&odeme);
		if (odeme == 1){
			
			printf("%d Tl tutar�ndaki sipari�inizi onaylamak i�in 1e ��kmak i�in 2ye bas�n�z\n",toplam);
			scanf("%d",&karar);
			if (karar == 1){
				printf("Sipari�iniz ilgili firmaya iletilmi�tir. Bizi tercih etti�iniz i�in te�ekk�rler\n");
			}
			else{
				main();
			}
		}		
		else if (odeme == 2){
			printf("%d Tl tutar�ndaki sipari�inizi onaylamak i�in 1e ��kmak i�in 2ye bas�n�z\n",toplam);
			scanf("%d",&karar);
			if (karar == 1){
				printf("Kart �zerindeki ad� giriniz (l�tfen bo�luk yerine �_� kullan�n)\n");
				scanf("%s",&kart_ad);
				printf("Kart numaran�z� giriniz\n");
				scanf("%d",&kart_numarasi);
				printf("Kart�n�z�n arkas�nda yer alan cvc g�venlik kodunu giriniz\n");
				scanf("%d",&cvc);
				printf("Kart�n�z�n son kullanma tarihini giriniz\n");
				scanf("%d",&tarih);
				printf("Sipari�iniz ilgili firmaya iletilmi�tir. Bizi tercih etti�iniz i�in te�ekk�rler\n");
			}
			else{
				main();
			}
		}
		else if (odeme == 3){
			printf("%d Tl tutar�ndaki sipari�inizi onaylamak i�in 1e ��kmak i�in 2ye bas�n�z\n",toplam);
			scanf("%d",&karar);
			if (karar == 1){
				printf("Havale/EFT �cretini a�a��da yer alan ibana atabilirsiniz\n");
				printf("(�rnek iban)\n");
				printf("Al�c� �nvan: Cemil �lkim Teke\n");
				printf("A��klama: Par�a �creti\n");
				printf("\n");
				printf("G�nderme i�lemini tamamlad�ysan�z 1e bas�n�z, ba�ka marka ara� se�imi i�in 2ye bas�n�z\n");
				scanf("%d",&gonderim);
				if (gonderim == 1){
					printf("Sipari�iniz ilgili firmaya iletilmi�tir. Bizi tercih etti�iniz i�in te�ekk�rler\n");
				}
				else{
					main();
				}
			}
		}
		else{
			printf("Ge�erli bir �deme y�ntemi giriniz\n");
			main();
		}
	}
	else{
		main();
	}
    return 0;
}
