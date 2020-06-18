#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int operacao;
	float number1, number2, soma, subtracao, multi, div;
	char on, limpar, cls, tentarNovamente;
	
	//Execução da aplicação.
	do
	{
		do
		{
			//Cabeçalho e exibição das opções de operações.
			printf("\r\n******************************");
			printf("\r\n*******Calculadora 1.38*******");
			printf("\r\n************(BETA)************");
			printf("\r\n\nEscolha a operação:");
			printf("\r\n1 Soma");
			printf("\r\n2 Subtração");
			printf("\r\n3 Multiplicação");
			printf("\r\n4 Divisão");
			printf("\r\n\nOpção escolhida: ");
			scanf("%d", &operacao);
			
			//Coleta de números para serem calculados.
			printf("\r\nPrimeiro número do cálculo: ");
			scanf("%f", &number1);
			printf("Segundo  número do cálculo: ");
			scanf("%f", &number2);
		
			//Realiza operação de acordo com escolha do usuário.
			switch (operacao)
			{			
				//Realiza soma.
				case 1:
					soma = number1 + number2;
		    		printf("Resultado da soma é: %.0f", soma);
			    break;

				//Realiza subtração.		    
			    case 2:
			    	subtracao = number1 - number2;
			    	printf("Resultado da subtração é: %.0f", subtracao);
			    break;

				//Realiza multiplicação.  
			    case 3:
			    	multi = number1 * number2;
			    	printf("Resultado da multiplicação é: %.0f", multi);
			    break;
			    
				//Realiza divisão.
			    case 4:		    	
			    	//Realiza a divisão caso o segundo número seja diferente de 0(zero). Caso segundo número seja igual a 0(zero), sistema exibe mensagem sobre impossibilidade de realiar esta divisão.
					if (number2 != 0)
			    	{
			    		div = number1 / number2;
			    		printf("Resultado da divisão: %.1f", div);			    		
					}
					else
					{
						printf("Não é possível dividir um número por 0(zero)");
					}
			    break;
			    
			    //Caso usuário digite uma opção diferente das oferecidas, sistema informa que é invalida.
			    default:
			    	printf("\nOpção de operação inválida", div);
			    	break;
			}
		
			//Caso a opção 4(Divisão) seja selecionada e o segundo número seja 0(zero), pergunta se deseja tentar novamente e caso usuário concorde, sistema retorna para o estado inicial.
			if (operacao == 4 && number2 == 0)
			{
				printf("\r\n\nDeseja tentar novamente? [s/n] ", div);
				scanf("\n%c", &tentarNovamente);
				if (tentarNovamente == 's' || tentarNovamente == 'S')
				{
					system("cls");
				}
				else
				{
					return 0;
				}	
			}
			//Em caso de escolha de operação inválida, é dada opção de tentar novamente indo para o estado inicial do sistema ou finalizar a aplicação.
			if (operacao > 4)
			{
				printf("\nDeseja tentar novamente? [s/n] ", div);
				scanf("\n\n%c", &tentarNovamente);
				if (tentarNovamente == 's' || tentarNovamente == 'S')
				{
					system("cls");
				}
				else
				{
					return 0;
				}
			}		
		}
		//Enquanto a opção de operação não for uma das que são oferecidas, sistema exibe menu de opções.
		while ((operacao < 1 || operacao > 4)||(operacao == 4 && number2 == 0));
		
		//É dada opção de escolher se deseja fazer outro cálculo, limpando registros da tela ou não.
		printf("\r\n\nDeseja continuar? [s/n] ");
		scanf("\n%c", &on);
		if (on == 's' || on == 'S')
		{
			printf("\nDeseja limpar a tela? [s/n] ");
			scanf("\n%c", &limpar);
			if (limpar == 's' || limpar == 'S')					
			{				
				printf("\nO histórico da tela será apagado e não será possível recuperá-lo! Tem certeza??? [s/n] ");
				scanf("\n%c", &cls);
				if (cls == 's' || cls == 'S')
				{
					system("cls");
				}						
			}		
		}
	}
	//Mantém sistema aberto enquanto o usuário desejar continuar a executar cálculos.
	while (on == 's' || on == 'S');
	
	return 0;		
}
