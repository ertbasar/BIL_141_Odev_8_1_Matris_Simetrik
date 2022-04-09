#include <stdio.h>
#include <conio.h>
int main(){
	while(1){
	int kare,yy,xx;
	char giris;
	printf("Yapacaginiz kare matris isleminin kac satir olmasini istersiniz: ");
	scanf("%d",&kare);
	printf("\n%d x %d boyutlarinda matris giris yapacaksiniz\n\n",kare,kare);
	int matris[kare][kare];
	for(yy=0;yy<kare;yy++){
	printf("%d. satiri sayilarin arasinda bosluk birakarak giriniz ", yy+1);
		for(xx=0;xx<kare;xx++){
			scanf(" %d",&matris[yy][xx]);
		}
	}
	system("cls");
	Sleep(750);
	printf("Asagidaki matrisi girdiniz\n");
	for(yy=0;yy<kare;yy++){
		for(xx=0;xx<kare;xx++){
			printf("\t%d",matris[yy][xx]);
		}
		printf("\n");
	}
	printf("\n");
	Sleep(750);
	printf("Girdiginiz matrisin simetrigi:\n");
	for(yy=kare-1;yy>=0;yy--){
		for(xx=kare-1;xx>=0;xx--){
			printf("\t%d",matris[yy][xx]);
		}
	printf("\n");
	}
	printf("Islemi farkli sayilarla tekrar etmek ister misiniz?(e/h)");
	fflush(stdin);
	scanf("%c",&giris);
	if(giris=='h'||giris=='H'){
		system("cls");
		printf("\nGule gule");
		getch();
		return 0;
	}
	else{
		system("cls");
		fflush(stdin);
	}
		}
	return 1;
	}
