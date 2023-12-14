#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<ctype.h>

struct teste_{
	int escolha[9], i;
};

struct teste_ teste;

void sim_nao(){
	printf("\n1 - Para Sim. 2 - Para N�o.\n");
}
void menu(){
printf("\nG�neros: \n");
printf("\n1 - Aventura ");
printf("\n2 - Terror ");
printf("\n3 - Distopia");
}

void Livros(){
	printf("\n \n Livros Dispon�veis: ");

printf("\n\n1 - Harry Poter e a pedra filosofal");
printf("\n\n2 - O espadachim de carv�o");
printf("\n\n3 - O alquimista");
printf("\n\n4 - Dr�cula");
printf("\n\n5 - It a coisa");
printf("\n\n6 - O cemit�rio");
printf("\n\n7 - Laranja mec�nica");
printf("\n\n8 - A revolu��o dos bichos");
printf("\n\n9 - Admir�vel mundo novo");
}

int main(){
	setlocale(LC_ALL ,"portuguese");
	float preco, soma = 0;
	int numero, livro = 0;
	
	char Cartegoria[3][250] = {"Livros de aventuras: ", "Livros de Terror: ", "Livros de Distopias: "};
	char infoLivro[9][250] = {"Harry Poter e a pedra filosofal.", "O espadachim do carv�o.", "O alquimista.", "Dr�cula.", "IT a coisa.", "O cemit�rio.", "Laranja mec�nica.", "A revolu��o dos bichos.", "Admir�vel mundo novo."};
						
int i,j;
int genero, escolha;
	
menu();

printf("\n \nDigite o n�mero de acordo com o que voc� deseja: ");
scanf("%i" ,&genero);	
	
	
switch (genero){

case 1:
for(i = 0; i < 1; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 0; j < 3; j++){
	printf("%d� %s \n",j + 1,infoLivro[j]);
}
}
break;

case 2:
for(i = 1; i < 2; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 3; j < 6; j++){
	printf("%d� %s \n",j + 1,infoLivro[j]);
}
}
break;	

case 3:
for(i = 2; i < 3; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 6; j < 9; j++){
	printf("%d� %s \n",j + 1,infoLivro[j]);
}
}
break;	
}	

do{
	
printf("\n\nPara mais informa��es, Digite o n�mero do livro: ");
scanf("%i" ,&teste.escolha[i]);

livro++;

fflush(stdin);

switch(teste.escolha[i]){
	
case 1:
printf("\nNome do livro: %s",infoLivro[0]);
printf("\nAno de lan�amento: 1997");
printf("\nN�mero de p�ginas: 208");
preco = 27;
printf("\nPre�o: R$%.2f",preco);
break;

case 2:
printf("\nNome do livro: %s",infoLivro[1]);
printf("\nAno de lan�amento: 2013");
printf("\nN�mero de p�ginas: 256");
preco = 25;		
printf("\nPre�o: R$%.2f",preco);
break;	

case 3:
printf("\nNome do livro: %s",infoLivro[2]);
printf("\nAno de lan�amento: 1988");
printf("\nN�mero de p�ginas: 208");
preco = 17;	
printf("\nPre�o: R$%.2f",preco);	
break;	

case 4:
printf("\nNome do livro: %s",infoLivro[3]);
printf("\nAno de lan�amento: 1897");
printf("\nN�mero de p�ginas: 368");
preco = 22;	
printf("\nPre�o: R$%.2f",preco);	
break;	

case 5:
printf("\nNome do livro: %s",infoLivro[4]);
printf("\nAno de lan�amento: 1986");
printf("\nN�mero de p�ginas: 1104");	
preco = 29;
printf("\nPre�o: R$%.2f",preco);	
break;

case 6:
printf("\nNome do livro: %s",infoLivro[5]);
printf("\nAno de lan�amento: 1983");
printf("\nN�mero de p�ginas: 537");	
preco = 35;	
printf("\nPre�o: R$%.2f",preco);
break;	

case 7:
printf("\nNome do livro: %s",infoLivro[6]);
printf("\nAno de lan�amento: 1962");
printf("\nN�mero de p�ginas: 288");
preco = 16;	
printf("\nPre�o: R$%.2f",preco);
break;	

case 8:
printf("\nNome do livro: %s",infoLivro[7]);
printf("\nAno de lan�amento: 1945");
printf("\nN�mero de p�ginas: 152");	
preco = 10;
printf("\nPre�o: R$%.2f",preco);
break;

case 9:
printf("\nNome do livro: %s",infoLivro[8]);
printf("\nAno de lan�amento: 1932");
printf("\nN�mero de p�ginas: 258");
preco = 18;
printf("\nPre�o: R$%.2f",preco);	
	
break;
}

soma += preco;

system("cls");

fflush(stdin);

printf("\n\nDeseja comprar outro livro?");
sim_nao();
scanf("%d",&numero);

if(numero == 1){
	Livros();
}
} while(numero == 1);

printf("Total de livros: %d",livro);
printf("\nTotal a pagar: %.2f",soma);

return 0;	
	
}
