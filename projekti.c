#include <stdio.h>															
#include <math.h>													
#include <windows.h>										
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#define koko1 9
#define koko2 9
#define koko3 5
#define koko4 11
#define koko5 13
#define maara 100
struct sanat
{
	char merkkijono1[koko1+1] = "susilauma";					//structuurit
	char merkkijono2[koko2+1] = "ampiainen";
	char merkkijono3[koko3+1] = "hauki";
	char merkkijono4[koko4+1] = "leppakerttu";
	char merkkijono5[koko5+1] = "paivankakkara";
};
void tayta(char *merkkijono1, int lukumaara);
void tyhjenna();
void printtaa(char *merkkijono2, int lukumaara);
void tarkista(char *merkkijono1, char *merkkijono2, char *merkki, int lukumaara);
int elamat(char *merkkijono1, char *merkki, int *summa, int lukumaara);
void arvaasana(char *merkkijono1, char *merkkijono2, int lukumaara);
void ohje();
int main(void)
{
	struct sanat p;						//osoitin structuureihin p.
	int i;
	char kirjain[1+1];
	char vastaus,answer1;
	char aputaulukko[maara+1];
	char arvaus[koko1+1];
	int elamat1 = 10;
	int summa;
	char x[20+1];
	ohje();
	tyhjenna();
	
	puts("Anna nimimerkkisi ja paina enter (max 20merkkia)");
	gets(x);
	tayta(aputaulukko,koko1);
	printf("Ensimmainen sana on %d kirjainta pitka\n", koko1);
	puts("Vihje: 'Tappava suomessa asustava elain-ryhma'");
	for(i=0 ; i<maara ; i++)
		{
			printf("\n\nArvaa kirjain, tai paina '!' + enter arvataksesi sana:\t");
			fgets(kirjain,1+2,stdin);
			if(kirjain[0] == '!')
				{
					arvaasana(arvaus,p.merkkijono1,koko1);
					break;
				}	
			puts("");
			tarkista(p.merkkijono1,aputaulukko,kirjain,koko1);
			summa = elamat(p.merkkijono1,kirjain,&elamat1,koko1);
			printf("\t\t\tELAMIA JALJELLA [%d]\n"), summa;
			if(summa == 0)
				{
					printf("Elamasi loppuivat ja Jouduit hirteen! Peli Loppui\n");
					puts("Samutetaan 5sekunnin paasta...");
					Sleep(5000);
					exit(1);
				}
			printtaa(aputaulukko,koko1);	
		}
		Sleep(5000);
		tyhjenna();
			
//----------------------------------------------------------------------------------------
	tayta(aputaulukko,koko2);
	printf("Toinen sana on %d kirjainta pitka\n", koko2);	
	puts("Vihje: 'Pieni lentava hyonteinen'");	
	for(i=0 ; i<maara ; i++)
		{
			printf("\n\nArvaa kirjain, tai paina '!' + enter arvataksesi sana:\t");
			fgets(kirjain,1+2,stdin);
			if(kirjain[0] == '!')
				{
					arvaasana(arvaus,p.merkkijono2,koko2);
					break;
				}	
			puts("");
			tarkista(p.merkkijono2,aputaulukko,kirjain,koko2);
			summa = elamat(p.merkkijono2,kirjain,&elamat1,koko2);
			printf("\t\t\tELAMIA JALJELLA [%d]\n"), summa;
			if(summa == 0)
				{
					printf("Elamasi loppuivat ja Jouduit hirteen! Peli Loppui\n");
					puts("Samutetaan 5sekunnin paasta...");
					Sleep(5000);
					exit(1);
				}			
			printtaa(aputaulukko,koko2);
		}
		Sleep(5000);
		tyhjenna();
//----------------------------------------------------------------------------------------		
	tayta(aputaulukko,koko3);
	printf("Kolmas sana on %d kirjainta pitka\n", koko3);	
	puts("Vihje: 'Suomen vesistoissa elava kala'");
	for(i=0 ; i<maara ; i++)
		{
			printf("\n\nArvaa kirjain, tai paina '!' + enter arvataksesi sana:\t");
			fgets(kirjain,1+2,stdin);
			if(kirjain[0] == '!')
				{
					arvaasana(arvaus,p.merkkijono3,koko3);
					break;
				}	
			puts("");
			tarkista(p.merkkijono3,aputaulukko,kirjain,koko3);
			summa = elamat(p.merkkijono3,kirjain,&elamat1,koko3);
			printf("\t\t\tELAMIA JALJELLA [%d]\n"), summa;
			if(summa == 0)
				{
					printf("Elamasi loppuivat ja Jouduit hirteen! Peli Loppui\n");
					puts("Samutetaan 5sekunnin paasta...");
					Sleep(5000);
					exit(1);
				}
			printtaa(aputaulukko,koko3);	
		}		
	Sleep(5000);
	tyhjenna();

//----------------------------------------------------------------------------------------		
	tayta(aputaulukko,koko4);
	printf("Neljas sana on %d kirjainta pitka\n", koko4);	
	puts("Vihje: 'Taplikas lentava hyonteinen suomen luonnossa'");
	for(i=0 ; i<maara ; i++)
		{
			printf("\n\nArvaa kirjain, tai paina '!' + enter arvataksesi sana:\t");
			fgets(kirjain,1+2,stdin);
			if(kirjain[0] == '!')
				{
					arvaasana(arvaus,p.merkkijono4,koko4);
					break;
				}	
			puts("");
			tarkista(p.merkkijono4,aputaulukko,kirjain,koko4);
			summa = elamat(p.merkkijono4,kirjain,&elamat1,koko4);
			printf("\t\t\tELAMIA JALJELLA [%d]\n"), summa;
			if(summa == 0)
				{
					printf("Elamasi loppuivat ja Jouduit hirteen! Peli Loppui\n");
					puts("Samutetaan 5sekunnin paasta...");
					Sleep(5000);
					exit(1);
				}
			printtaa(aputaulukko,koko4);	
		}		
	Sleep(5000);
	tyhjenna();

//----------------------------------------------------------------------------------------		
	tayta(aputaulukko,koko5);
	printf("Viides sana on %d kirjainta pitka\n", koko5);	
	puts("Vihje: 'Suomen luonnossa kasvava kukka'");
	for(i=0 ; i<maara ; i++)
		{
			printf("\n\nArvaa kirjain, tai paina '!' + enter arvataksesi sana:\t");
			fgets(kirjain,1+2,stdin);
			if(kirjain[0] == '!')
				{
					arvaasana(arvaus,p.merkkijono5,koko5);
					break;
				}	
			puts("");
			tarkista(p.merkkijono5,aputaulukko,kirjain,koko5);
			summa = elamat(p.merkkijono5,kirjain,&elamat1,koko5);
			printf("\t\t\tELAMIA JALJELLA [%d]\n"), summa;
			if(summa == 0)
				{
					printf("Elamasi loppuivat ja Jouduit hirteen! Peli Loppui\n");
					puts("Samutetaan 5sekunnin paasta...");
					Sleep(5000);
					exit(1);
				}
			printtaa(aputaulukko,koko5);	
		}		
	Sleep(5000);
	tyhjenna();
	puts("Onnittelut, selvisit hengissa ja voitit pelin!");					//nimen ja tuloksen printtaus
	printf("Sinulle jai [%d] elamaa\n", elamat1);
	puts("");
	puts("Nimesi ja tuloksesi on tallennettu tiedostoon tulokset.txt");
	FILE *fp;
	fp = fopen ("tulokset.txt", "a");
	fprintf(fp, "Nimi: [%s]\tElamat[%d]\n",x , elamat1);
	fclose(fp);
	puts("Samutetaan 10sekunnin paasta...");
	Sleep(10000);
	return 0;
}

//-----------------------------------------------------------------FUNKTIOT
void tyhjenna()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");			//tyhjentaa selventamisen vuoksi 
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}


void tayta(char *merkkijono1, int lukumaara)
{
	int i;
	for(i=0 ; i<lukumaara ; i++)						//taytetaan aputaulukko '_', jotta pelaajan on helpompi hahmoittaa sanan pituus ja kirjaimet
		{
			merkkijono1[i] = '_';
		}
}

void printtaa(char *merkkijono2, int lukumaara)			
{
	int i;
	for(i=0 ; i<lukumaara ; i++)					//printtaa aputaulukon
		{
			printf("%c ", merkkijono2[i]);				
		}
}

void tarkista(char *merkkijono1, char *merkkijono2, char *merkki, int lukumaara)
{
	int i;
	for(i=0 ; i<lukumaara ; i++)						//tarkistaa jos kirjain kuuluu sanaan
		{
			if(merkkijono1[i] == merkki[0])				//jos kirjain kuuluu sanaan
				{
					merkkijono2[i] = merkki[0];			//siirretään se samaan paikkaan aputaulukkoon
				}
			
		}				
}

int elamat(char *merkkijono1, char *merkki, int *summa, int lukumaara)
{
	int i;
	char x = 0;
	for(i=0 ; i<lukumaara ; i++)
		{
			if(merkkijono1[i] == merkki[0])						//lasketaan elamien maara ja palautetaan arvo
				{
					x = 1;
					break;
				}
		}
	if(x == 1)											 
		{
			*summa = *summa;									//elamien 'summa' siis pysyy samana tai laskee pelin myota
		}
	if(x == 0)
		{
			*summa = *summa - 1;					
		}
		return *summa;
}

void arvaasana(char *merkkijono1, char *merkkijono2, int lukumaara)
{
	int i;
	puts("Arvaa sana ja paina enter:");								
	gets(merkkijono1);
	if(strcmp( merkkijono1, merkkijono2 ) == 0 )
		{
			puts("Onneksi olkoon, arvasit sanan oikein!");					//määritetään onko arvatttu sana oikea. Jos ei -> peli loppuu
			puts("Odota, jatketaan 5 sekunnin kuluttua...");
		}
	if(strcmp( merkkijono1, merkkijono2 ) != 0 )
		{
			puts("Arvasit vaarin!");
			puts("Peli loppui, havisit pelin.");
			puts("Sammutetaan 5sekunnin paasta...");
			Sleep(5000);
			exit(1);
		}
		
}

void ohje()																	//ohjeet
{
	puts("Pelin nimi on 'HIRSIPUU'.");
	//Sleep(1500);
	puts("Pelissa sinun tulee arvata 5 sanaa.");
	//Sleep(1500);
	puts("Apuna sinulle annetaan sanan pituus ja vihje seka 10 elamaa.");
	//Sleep(1500);
	puts("Vihjeen perusteella aloitat arvailemaan sanan kirjaimia yksi kerrallaan.");
	//Sleep(1500);
	puts("Sanat sisaltavat vain pienia kirjaimia. Ei siis pilkkuja,valilyonteja,yms.");
	//Sleep(1500);
	puts("Jos arvaamasi kirjain KUULUU sanaan, se ilmestyy sanan oikeisiin kohtiin.");
	//Sleep(1500);
	puts("Jos arvaamasi kirjain EI KUULU sanaan, menetat yhden elaman.");
	//Sleep(1500);
	puts("Mikali kaikki elamasi loppuu, joudut hirteen ja olet havinnyt pelin.");
	//Sleep(1500);
	puts("Heti kun luulet tietavasi oikean sanan, voit kokeilla arvata sen.");
	//Sleep(1500);
	puts("Ole kuitenkin varovainen, silla joudut hirteen heti jos arvattu sana on vaara.");
	//Sleep(1500);
	puts("Tavoite on siis arvata kaikki 5 sanaa kuluttamalla mahdollisimman vahan elamia.");
	//Sleep(1500);
	puts("");
	puts("Paina enter aloittaaksesi pelin");
	getchar();
}