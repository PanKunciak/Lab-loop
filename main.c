#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int zadanie;
printf("tu mamy zadania z lab 2, ktore zadanie\n");
scanf ("%d",&zadanie);
 if (zadanie==1){
 	
 	int x=0;
	printf ("witaj w programie sprawdzajacym czy podajesz liczbe parzysta \ndawaj liczbe byczq\n");
	scanf ("%d",&x);
	printf ("podales %d\n",x);
	if (x==2137){
		printf ("zostales spapierzowany");
	}
	else{	
		if (x%2==0){
			printf ("twoja liczba jest parzyta");
	}
		else {
			printf ("oj nie nie byczqu, nie tym razem");
	}
	}
 }
else if (zadanie==2){
int a,b,c,delta;
printf ("moja magiczna kula powie ci ile pierwiastkow ma twoje rwnanie kwadratowe\n");
printf ("podaj liczbe pierwsza\n");
scanf ("%d",&a);
printf ("podaj liczbe druga\n");
scanf ("%d",&b);
printf ("podaj liczbe trzecia\n");
scanf ("%d",&c);
delta=(b*b)-4*a*c;
if (delta>0){
	printf("sa 2 liczby rzeczywiste");
}
else if (delta==0){
	printf ("jest 1 liczba rzeczywista");
}
else{
	printf ("w chodzimy w liczby zespolone, strzeszcie sie wrogowie dziecia");
}
}
else if (zadanie==3){
	float x;
	printf ("zobaczymy czy twoja liczba jest 1, 2 czy 3 cyfrowa\n");
	scanf  ("%f",&x);
	printf ("podales %f\n",x);
	if (x<0){   //liczby ujemne
		x=x*(-1);
		if (x/10>=10 && x/10<100){
			printf ("twoja liczba jest 3 cyfrowa");
		}	
		else if (x/10<1){
			printf("twoja liczba jest 1 cyfrowa");
		}
		else if (x/10<10 && x/10>1){
			printf ("twoja liczba jest 2 cyfrowa");
		}
		else {
			printf ("sorki ale nie znam sie na tak malych liczbach");
		
		}
	}
	else {
		if (x/10>=10 && x/10<100){
			printf ("twoja liczba jest 3 cyfrowa");
		}	
		else if (x/10<1){
			printf("twoja liczba jest 1 cyfrowa");
		}
		else if (x/10<10 && x/10>1){
			printf ("twoja liczba jest 2 cyfrowa");
		}
		else {
			printf ("sorki ale nie znam sie na tak duzych liczbach");
		}
	}	
	}
else if (zadanie==4){
	int x;
	printf ("podaj liczbe od 1 do 12\n");
	scanf ("%d",&x);
	printf ("podales %d i jest to :",x);
	switch (x){
	case 1:
		printf ("styczen");
		break;
	case 2:
		printf ("luty");
		break;
	case 3:
		printf ("marzec");
		break;
	case 4:
		printf ("kwiecien");
		break;
	case 5:
		printf ("maj");
		break;
	case 6:
		printf ("czerwiec");
		break;
	case 7:
		printf ("lipiec");
		break;
	case 8:
		printf ("sierpien");
		break;
	case 9:
		printf ("wrzesien");
		break;
	case 10:
		printf ("pazdziernik");
		break;
	case 11:
		printf ("listopad");
		break;
	case 12:
			printf ("grudzien");
			break;
	deflaut:
		printf ("od 1 do 12!");
		break;	
	}
}
else if (zadanie==5){
	int algorytm;
	printf ("ktory algorytm?\n");
	scanf ("%d",&algorytm);
	if (algorytm==1){
		int k=10;
		int m=50;
		while (k!=0){
			if (k<5){
				k--;
				m=m+k;
			}
			else {
				k=k-2;
				m=m-k;
			}
		}
		printf ("\n%d",m);
	}
	else{
		int k=10;
		int m=50;
		do{
		
		if (k<5){
			k--;
			m=m+k;
		}
		else{
			k=k-2;
			m=m-k;
		}
	}
	while (k!=0);
		printf ("\n%d",m);
}	
}
else if (zadanie==6){ 
char pyt;
int x=0;
int c=0;
printf ("czy lubisz programowac? (t/n)\n");
scanf ("%c", &pyt);
if (pyt==0x0A){
	scanf ("%c", &pyt);
}
printf ("dales %c ",pyt);
while (pyt != 't'){
	printf ("czy lubisz programowac? (t/n)\n");
	scanf ("%c", &pyt);
	c++;
	if (c=10){
		printf ("NIE DENERWOJ MNIE! czy lubisz programowac? (t/n)\n");
		scanf ("%c", &pyt);
		c++;
	
	}
	if (c>=20){
		printf("¦¦¦¦¦¦¦-------------\n¦¦¦¦------------------\n¦¦----------------------\n¦¦------------------------\n¦??----------------------??\n¦--------------------------\n??------------------------??\n----------------------------\n---------------------?-----??\n??---------?---------------??\n¦----------------------------\n¦??------------------?-------\n¦¦??--?----------------------\n¦¦¦----?--------?----------??\n¦¦¦??-----------------------\n¦¦¦??--?-------------------\n¦¦¦??---?-----------------\n¦¦¦-----------------------\n¦¦??--------------------\n¦---------------------\n----------------------------\n");
	}
}
if (pyt=='t'){printf("\n\n\n\n\nciesze sie bo ja tez :) ");
}
}
else if (zadanie==7){
	float a,b=0;
	printf("podaj liczbe, 0 to koniec i podsumuje ci wszysko\n");
	scanf ("%f",&a);
	while (a!=0){
		b=b+a;
		printf ("podaj kolejna\n");
		scanf ("%f",&a);
	}
	printf ("lacznie to wszytsko to %f",b);
	
	
	
}
else if (zadanie==8)	
	
	
	
	
	
	return 0;
}
