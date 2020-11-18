#include <stdio.h>
#include <stdlib.h>

/*
	Faça um algoritmo que leia 3 notas de um aluno e um quarto número que representa o modelo de média a ser calculada. 
	Caso o modelo seja igual a 1, calcular a média aritmética; caso seja igual a 2, calcular a média ponderada com pesos iguais 
	a 5, 3 e 2; caso seja igual a 3, calcular a média harmônica. Repetir este procedimento até que uma das notas informadas seja menor que 0.
*/

//prototipos:
float mediaAritmetica(float n[3]);
float mediaPonderada(float n[3]);
float mediaHarmonica(float n[3]);

int main(void) 
{
	float notas[3];
	int modeloMedia;
	float media;
	int i;
	
	do
	{
		for(i = 0; i < 3; i++)
		{
			printf("Digite a nota\n");
			scanf("%f", &notas[i]);
		}
		
		printf("Escolha o modelo de média a ser calculada:\n1. Media aritmetica\n2. Media ponderada com pesos 5, 3 e 2\n3. Media harmonica\n");
		scanf("%d", &modeloMedia);
		
		if(modeloMedia == 1)
		{
			media = mediaAritmetica(notas);
			printf("%f", media);
			printf("\n");
		}
		
		if(modeloMedia == 2)
		{
			media = mediaPonderada(notas);
			printf("%f", media);
			printf("\n");
		}
		
		if(modeloMedia == 3)
		{
			media = mediaHarmonica(notas);
			printf("%f", media);
			printf("\n");
		}
	}while((notas[0] >= 0) || (notas[1] >= 0) || (notas[2] >= 0));
}

float mediaAritmetica(float n[3])
{
	int i;
	int s;
	float m;
	
	s = 0;
	for(i = 0; i < 3; i++)
	{
		s += n[i];
	}
	
	m = s / 3;
	
	return m;
}

float mediaPonderada(float n[3])
{
	int i;
	int sPesoNota;
	int sPeso;
	int pesos[3] = {5, 3, 2};
	float pond;
	
	sPesoNota = 0;
	sPeso = 0;
	for(i = 0; i < 3; i++)
	{
		sPesoNota += (n[i] * pesos[i]);
		sPeso += pesos[i];
	}
	
	pond = sPesoNota / sPeso;
	
	return pond;
}

float mediaHarmonica(float n[3])
{
	int i;
	int sNota;
	float mHarm;
	
	for(i = 0; i , 3; i++)
	{
		sNota += (1/n[i]);
	}
	
	mHarm = 3 / sNota;
	
	return mHarm;
}


















