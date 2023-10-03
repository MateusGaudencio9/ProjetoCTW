#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE *fptr;

enum opp{
	jjj,
	hh,
	jjk
	
};

struct Carro{
	char marca[30];
	char modelo[30];
	int lugares;
	char matricula[30];
	enum opp tipoo;
	int autonomia;
	
};


struct Condutor{
	char nome[30];
	char contacto[30];
	char numerolicensa[30];
};


void Inserircontacto(char contactoo[]){
	int i=0;
	int j=0;
	int t=0;
	int cont=0;
	int contador=0;
	char mystr[30];
	char contato[30];
	fptr = fopen("contacto.txt","r");
	while(fgets(mystr,30,fptr)){
		i=0;
		j=0;
		while(mystr[i]!='\n'){
			i++;
		}
		while(contactoo[j]!='\0'){
			j++;
		}
		if(i!=j){
			continue;
		}
		while(mystr[t]!='\n'){
			if(mystr[t]==contactoo[t]){
				contador=contador+0;
			}else{
				contador=contador+1;
			}
			t++;
		}
		t=0;
		if(contador==0){
			cont++;
			
			 
			
		}else{
			cont=cont+0;
			
		}
		contador=0;
		
	}
	if(cont==0){
		printf("contacto valido\n");
		fclose(fptr);
		fptr = fopen("contacto.txt","a");
		fprintf(fptr,contactoo);
		fprintf(fptr,"\n");
	
		fclose(fptr);
	}else{
		cont=0;
		contador=0;
		
		
		
			while(1){
				contador=0;
				cont=0;
				printf("Esse contacto ja existe\n");
		        fptr = fopen("contacto.txt","r");
				printf("insira um contacto valido\n");
				gets(contato);
				fseek(fptr,0,SEEK_SET);
				while(fgets(mystr,30,fptr)){
					printf("ola\n");
					i=0;
		            j=0;
		            while(mystr[i]!='\n'){
			               i++;
	             	}
		while(contato[j]!='\0'){
			j++;
		}
		if(i!=j){
			continue;
		}
		while(mystr[t]!='\n'){
			if(mystr[t]==contato[t]){
				contador=contador+0;
			}else{
				contador=contador+1;
			}
		}
		if(contador==0){
			cont++;
			break;
			
			
		}else{
			cont=cont+0;
			
		}
		contador=0;
					
				}
				
				if(cont==0){
					printf("contacto valido\n");
					fclose(fptr);
					fptr = fopen("contacto.txt","a");
			        fprintf(fptr,contato);
			        fprintf(fptr,"\n");
			        fclose(fptr);
					break;
				}
				cont=0;
				
			}
	}
}


int main(int argc, char *argv[]) {
	char co[30];
	printf("introduza o contacto\n");
	gets(co);
	Inserircontacto(co);
	//fptr=fopen("contacto.txt","r+")
	
	return 0;
}
