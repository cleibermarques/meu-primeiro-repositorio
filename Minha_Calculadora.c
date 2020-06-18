#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int operacao;
	float number1, number2, soma, subtracao, multi, div;
	char on, limpar, cls, tentarNovamente;
	
	//Execu��o da aplica��o.
	do
	{
		do
		{
			//Cabe�alho e exibi��o das op��es de opera��es.
			printf("\r\n******************************");
			printf("\r\n*******Calculadora 1.38*******");
			printf("\r\n************(BETA)************");
			printf("\r\n\nEscolha a opera��o:");
			printf("\r\n1 Soma");
			printf("\r\n2 Subtra��o");
			printf("\r\n3 Multiplica��o");
			printf("\r\n4 Divis�o");
			printf("\r\n\nOp��o escolhida: ");
			scanf("%d", &operacao);
			
			//Coleta de n�meros para serem calculados.
			printf("\r\nPrimeiro n�mero do c�lculo: ");
			scanf("%f", &number1);
			printf("Segundo  n�mero do c�lculo: ");
			scanf("%f", &number2);
		
			//Realiza opera��o de acordo com escolha do usu�rio.
			switch (operacao)
			{			
				//Realiza soma.
				case 1:
					soma = number1 + number2;
		    		printf("Resultado da soma �: %.0f", soma);
			    break;

				//Realiza subtra��o.		    
			    case 2:
			    	subtracao = number1 - number2;
			    	printf("Resultado da subtra��o �: %.0f", subtracao);
			    break;

				//Realiza multiplica��o.  
			    case 3:
			    	multi = number1 * number2;
			    	printf("Resultado da multiplica��o �: %.0f", multi);
			    break;
			    
				//Realiza divis�o.
			    case 4:		    	
			    	//Realiza a divis�o caso o segundo n�mero seja diferente de 0(zero). Caso segundo n�mero seja igual a 0(zero), sistema exibe mensagem sobre impossibilidade de realiar esta divis�o.
					if (number2 != 0)
			    	{
			    		div = number1 / number2;
			    		printf("Resultado da divis�o: %.1f", div);			    		
					}
					else
					{
						printf("N�o � poss�vel dividir um n�mero por 0(zero)");
					}
			    break;
			    
			    //Caso usu�rio digite uma op��o diferente das oferecidas, sistema informa que � invalida.
			    default:
			    	printf("\nOp��o de opera��o inv�lida", div);
			    	break;
			}
		
			//Caso a op��o 4(Divis�o) seja selecionada e o segundo n�mero seja 0(zero), pergunta se deseja tentar novamente e caso usu�rio concorde, sistema retorna para o estado inicial.
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
			//Em caso de escolha de opera��o inv�lida, � dada op��o de tentar novamente indo para o estado inicial do sistema ou finalizar a aplica��o.
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
		//Enquanto a op��o de opera��o n�o for uma das que s�o oferecidas, sistema exibe menu de op��es.
		while ((operacao < 1 || operacao > 4)||(operacao == 4 && number2 == 0));
		
		//� dada op��o de escolher se deseja fazer outro c�lculo, limpando registros da tela ou n�o.
		printf("\r\n\nDeseja continuar? [s/n] ");
		scanf("\n%c", &on);
		if (on == 's' || on == 'S')
		{
			printf("\nDeseja limpar a tela? [s/n] ");
			scanf("\n%c", &limpar);
			if (limpar == 's' || limpar == 'S')					
			{				
				printf("\nO hist�rico da tela ser� apagado e n�o ser� poss�vel recuper�-lo! Tem certeza??? [s/n] ");
				scanf("\n%c", &cls);
				if (cls == 's' || cls == 'S')
				{
					system("cls");
				}						
			}		
		}
	}
	//Mant�m sistema aberto enquanto o usu�rio desejar continuar a executar c�lculos.
	while (on == 's' || on == 'S');
	
	return 0;		
}
