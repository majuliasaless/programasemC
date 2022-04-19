#include<stdio.h>

main(){
	
   int nota1, nota2, nota3, nota4, nota5, soma, media; 
   
   printf("Digite a primeira nota: ");
   scanf("%d", &nota1);
   
    printf("Digite a segunda nota: ");
   scanf("%d", &nota2);
   
   printf("Digite a terceira nota: ");
   scanf("%d", &nota3);
   
   printf("Digite a quarta nota: ");
   scanf("%d", &nota4);
   
   printf("Digite a quinta nota: ");
   scanf("%d", &nota5);
   
   
   soma= nota1 + nota2 + nota3 + nota4 + nota5; 
   media= soma/5;
   
   printf("O valor da media: %d ", media);
   printf("\n");
   
   system("pause");



}
