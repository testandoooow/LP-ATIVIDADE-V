#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<ctype.h>

struct teste_{
	int escolha[9], i;
};

struct teste_ escolher;

void sim_nao(){
	printf("\n1 - Para Sim. 2 - Para Não.\n");
}
void menu(){
printf("\nGêneros: \n");
printf("\n1 - Aventura ");
printf("\n2 - Terror ");
printf("\n3 - Distopia");
}

void Livros(){
	printf("\n \n Livros Disponíveis: ");

printf("\n\n1 - Harry Poter e a pedra filosofal");
printf("\n\n2 - O espadachim de carvão");
printf("\n\n3 - O alquimista");
printf("\n\n4 - Drácula");
printf("\n\n5 - It a coisa");
printf("\n\n6 - O cemitério");
printf("\n\n7 - Laranja mecânica");
printf("\n\n8 - A revolução dos bichos");
printf("\n\n9 - Admirável mundo novo");
}

int main(){
	setlocale(LC_ALL ,"portuguese");
	float preco, soma = 0;
	int numero, livro = 0;
	
	char Cartegoria[3][250] = {"Livros de aventuras: ", "Livros de Terror: ", "Livros de Distopias: "};
	char infoLivro[9][250] = {"Harry Poter e a pedra filosofal.", "O espadachim do carvão.", "O alquimista.", "Drácula.", "IT a coisa.", "O cemitério.", "Laranja mecânica.", "A revolução dos bichos.", "Admirável mundo novo."};
						
int i,j;
int genero;
	
menu();

printf("\n \nDigite o número de acordo com o que você deseja: ");
scanf("%i",&numero);	
	
	
switch (numero){

case 1:
for(i = 0; i < 1; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 0; j < 3; j++){
	printf("%dª %s \n",j + 1,infoLivro[j]);
}
}
break;

case 2:
for(i = 1; i < 2; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 3; j < 6; j++){
	printf("%dª %s \n",j + 1,infoLivro[j]);
}
}
break;	

case 3:
for(i = 2; i < 3; i++){
printf("\n%s \n\n",Cartegoria[i],infoLivro[i][j]);
for(j = 6; j < 9; j++){
	printf("%dª %s \n",j + 1,infoLivro[j]);
}
}
break;	
}	

do{
	
printf("\n\nPara mais informações, Digite o número do livro: ");
scanf("%i" ,&escolher.escolha[i]);

livro++;

fflush(stdin);

switch(escolher.escolha[i]){
	
case 1:
printf("\nNome do livro: %s",infoLivro[0]);
printf("\nAno de lançamento: 1997");
printf("\nNúmero de páginas: 208");
preco = 27;
printf("\nPreço: R$%.2f",preco);
break;

case 2:
printf("\nNome do livro: %s",infoLivro[1]);
printf("\nAno de lançamento: 2013");
printf("\nNúmero de páginas: 256");
preco = 25;		
printf("\nPreço: R$%.2f",preco);
break;	

case 3:
printf("\nNome do livro: %s",infoLivro[2]);
printf("\nAno de lançamento: 1988");
printf("\nNúmero de páginas: 208");
preco = 17;	
printf("\nPreço: R$%.2f",preco);	
break;	

case 4:
printf("\nNome do livro: %s",infoLivro[3]);
printf("\nAno de lançamento: 1897");
printf("\nNúmero de páginas: 368");
preco = 22;	
printf("\nPreço: R$%.2f",preco);	
break;	

case 5:
printf("\nNome do livro: %s",infoLivro[4]);
printf("\nAno de lançamento: 1986");
printf("\nNúmero de páginas: 1104");	
preco = 29;
printf("\nPreço: R$%.2f",preco);	
break;

case 6:
printf("\nNome do livro: %s",infoLivro[5]);
printf("\nAno de lançamento: 1983");
printf("\nNúmero de páginas: 537");	
preco = 35;	
printf("\nPreço: R$%.2f",preco);
break;	

case 7:
printf("\nNome do livro: %s",infoLivro[6]);
printf("\nAno de lançamento: 1962");
printf("\nNúmero de páginas: 288");
preco = 16;	
printf("\nPreço: R$%.2f",preco);
break;	

case 8:
printf("\nNome do livro: %s",infoLivro[7]);
printf("\nAno de lançamento: 1945");
printf("\nNúmero de páginas: 152");	
preco = 10;
printf("\nPreço: R$%.2f",preco);
break;

case 9:
printf("\nNome do livro: %s",infoLivro[8]);
printf("\nAno de lançamento: 1932");
printf("\nNúmero de páginas: 258");
preco = 18;
printf("\nPreço: R$%.2f",preco);	
	
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
