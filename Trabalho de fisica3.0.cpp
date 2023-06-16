#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int opcao=0, o1=0, o2=0, op1=0, o3=0, op2=0, op3=0;
	float vdo,fdo,cdo,vdp,pa,pb,in;
	float vs, fds,cds,tpc,cel,frh,kel;
	float vdi,Q=0,T=0,mss,cle,temp,pre,vdv,k,j;
	while(opcao!=4){
	printf("---------------CALCULADORA FISICA----------------- \n");
	printf("Voce deseja analisar qual Fenomeno Fisico? \n");
	printf("1- Ondas Mecanicas \n");
	printf("2- Ondas Sonoras \n");
	printf("3- Calculo Termodinamico \n");
	printf("4- Sair do Programa \n");
	scanf("%d",&opcao);
	system("cls");
		if(opcao==1){
			printf("Voce selecionou Ondas Mecanicas!\n\nAs ondas mecanicas sao pertubacoes que carregam ernegia\ne precisam de um meio para se propagar e possuem algumas caracteristicas como:\n\n-> Amplitude: a altura das ondas mecanica.\n\n*Vales: sao os pontos mais baixos das ondas mecanica\n\n-> Comprimento de onda: e o tamanho do pulso que se repete\n\n-> Frequencia: e o numero de oscilacoes medidas em um intervalo de tempo\n\n-> Periodo: e o tempo gasto para que uma oscilacao se complete. \nTendo a velocidade calculada como a frequencia e o compriemnto [V=K*f]\n\n");
			printf("Qual calculo voce deseja realizar? \n");
			printf("1- Velocidade \n");
			printf("2- Frequencia \n");
			printf("3- Interferencia \n");
			scanf("%d",&o1);
			system("cls");
			if(o1==1){
			printf("Qual o comprimento da onda? \n");
			scanf("%f",&cdo);
			printf("Qual a frequencia da onda? \n");
			scanf("%f",&fdo);
			vdp=cdo*fdo;
			printf("Essa onda se propaga em %0.2fm/s \n\n\n",vdp);
			}//if
			else if(o1==2){
				printf("Qual a velocidade da onda? \n");
				scanf("%f",&vdo);
				printf("Qual o comprimento da onda? \n");
				scanf("%f",&cdo);
				fdo=(vdo/cdo);
				printf("Essa onda emite uma frequencia de %0.2fHz \n\n\n",fdo);
			}//ef1
			else if(o1==3){
				printf("Qual o valor do Pulso A? \n");
				scanf("%f",&pa);
				printf("Qual o valor do Pulso B? \n");
				scanf("%f",&pb);
				in=pa+pb;
				printf("A onda obteve uma amplitude de %0.2fm \n\n\n", in);}//ef2
			else{
				printf("Opcao Invalida! \nSelecione uma opcao valida: \n");}//else
				}//if
		else if(opcao==2){
				printf("Voce selecionou Ondas Sonoras!\n\nAs ondas sonoras sao tipos de ondas mecanicas longitudinais e tridimensionais que propagam-se com maior velocidade em meios solidos.\n\n-> O espectro sonoro mostra o intervalo de frequencias que sao audiveis dependendo do ser vivo.\n Qualidades fisiologicas das ondas sonoras estao relacionadas a nossa capacidade de percepcao dos sons como:\n\n-> Altura: Qualidade relacionada a frequencia das ondas sonoras.\n\n-> Timbre:Formato das ondas sonoras produzidas por uma fonte.\n\n-> Intensidade:Energia emitida por uma fonte sonora que atravessa determinada superficie dentro de certo intervalo de tempo.\n\n");
				printf("Qual calculo deseja realizar? \n");
				printf("1- Velocidade do Som \n");
				printf("2- Frequencia \n");
				scanf("%d",&o2);
				system("cls");
				if(o2==1){
					printf("Curiosidade: \n\n<<Voce sabia que a velocidade do som sofre influencia da temperatura? \nSendo assim, quanto mais elevada for a temperatura, mais rapidamente o som se propaga>> \n\n");
					printf("A temperatura esta em qual escala termometrica? \n");
					printf("1- Celsius \n2- Fahrenheit \n3- Kelvin \n");
					scanf("%d",&op1);
					if(op1==1){
						printf("Qual a temperatura em Celsius? \n");
						scanf("%f",&cel);
						vs=330.4+cel;
						printf("Essa onda se propaga em %0.2fm/s \n",vs);}//eeeif1
					else if(op1==2){
						printf("Qual a temperatura em fahrenheit? \n");
						scanf("%f",&frh);
						vs=330.4+((frh-32)/1.8);
						printf("Essa onda se propaga em %0.2fm/s \n",vs);}//eeeeif1
					else if(op1==3){
						printf("Qual a temperatura em Kelvin? \n");
						scanf("%f",&kel);
						vs=330.4+(kel-273);
						printf("Essa onda se propaga em %0.2fm/s \n",vs);}//eeeeif2
					else{
						printf("Opcao Invalida! \nDigite uma opcao valida: \n");}//eee0
						 }//eeif1
				else if(o2==2){
				printf("Qual a velocidade da onda? \n");
				scanf("%f",&vs);
				printf("Qual o comprimento da onda? \n");
				scanf("%f",&cds);
				fdo=(vs/cds);
				printf("Essa onda emite uma frequencia de %0.2fHz \n",fds);}//eeef1
				else{
				printf("Opcao Invalida! \nDigite uma opcao valida: \n");}//else3
				}//eef1	
		else if(opcao==3){
			printf("Voce selecionou Termodinamica!\n\nA termodinamica e o estudo das leis que regem as relacoes entre calor, trabalho e temperatura,\nbem como as transformacoes sofridas pela energia.\nA termodinamica estuda o intercambio de energia entre sistemas macroscopicos, \nformados por um grande numero de particulas, como os gases, fluidos e solidos, \nrecorrendo a analise de importantes grandezas fisicas, como pressao, volume e temperatura.\n\n");
			printf("Qual calculo deseja realizar? \n");
			printf("1- Termodinamico \n");
			printf("2- Calor \n");
			printf("3- Trabalho \n");
			scanf("%d",&o3);
			system("cls"); 
			if(o3==1){
					printf("Qual a quantidade de calor produzida? \n");
					scanf("%f",&Q);
					printf("Quanto trabalho foi realizado? \n");
					scanf("%f",&T);
					vdi=Q-T;
					printf("A variacao de energia interna e de %0.2fJ\n",vdi);}//if
				if(o3==2){
					printf("Qual a massa do corpo? \n");
					scanf("%f",&mss);
					printf("Qual a temperatura em Celsius? \n");
					scanf("%f",&cel);
					cle=(cel/mss);
					Q=cle*mss;
					printf("A quantidade de calor produzida e de %0.2fQ \n \n",Q);
					printf("Voce deseja realizar o calculo termodinamico? \n");
					printf("1- Sim \n");
					printf("2- Nao \n");
					scanf("%d",&op2);
					if(op2==1){
						printf("A quantidade de calor produzida e de %0.2fQ \n",Q);
						printf("Quanto trabalho foi realizado? \n");
						scanf("%f",&T);
						vdi=Q-T;
						printf("A variacao de energia interna e de %0.2fJ \n",vdi);}
					}//if
				else if(o3==3){
						printf("Qual a pressão sofrida? \n");
						scanf("%f",&pre);
						printf("Qual a variacao de volume? \n");
						scanf("%f",&vdv);
						T=pre*vdv;
						printf("O trabalho realizado foi de %0.2fT\n",T);
						printf("Voce deseja realizar o calculo termodinamico? \n");
						printf("1-Sim\n");
						printf("2-Nao\n");
						scanf("%d",&op3);
					if(op3==1){
						printf("O trabalho realizado e de %0.2fT\n\n",T);
						printf("A quantidade de calor produzida foi de: \n");
						scanf("%f",&Q);
						vdi=Q-T;
						printf("A variacao de energia interna e de %0.2fJ \n",vdi);}
					}//else if dentro do else if 3
					else{
						printf("Opcao Invalida! \nDigite uma opcao valida: \n");}
					}//fim do else if
			else if(opcao==4){
				printf("Seu programa foi encerrado!");}
			else{ 
				printf("Opcao Invalida! \nDigite uma opcao valida: \n");}
	}//while
	return 0;
}//main
