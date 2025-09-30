#include <stdio.h>
#include <math.h>

int main() {
	printf("-----CALCULADORA CIENTÍFICA-----\n");

	double n1, n2, n3, area;
	int opcao, operacao, numint, i, fatorial;
	const double PI_CONST = 3.1415926535;

    do {
        // Menu Principal
        printf("\n(1) para operações com 1 número.\n");
        printf("(2) para operações com 2 números.\n");
        printf("(3) para operações com 3 números.\n");
        printf("(0) para sair.\n");
        printf("\nEscolha: ");
        scanf(" %d", &opcao);
        
        switch (opcao) {
            //Submenu 1 número
            case 1:
                printf("\n---Operações com 1 número---\n");
                printf("\n(1) Raiz Quadrada\n");
                printf("(2) Fatorial\n");
                printf("(3) Valor Absoluto\n");
                printf("(4) Verificar se é par\n");
                printf("(5) Verificar se é ímpar\n");
                printf("(6) Celsius -> Fahrenheit\n");
                printf("(7) Logaritmo em base 10\n");
                printf("(8) Área do círculo de acordo com o raio\n");
                printf("(9) Volume do cubo\n");
                printf("\nEscolha: ");
                scanf(" %d", &operacao);
                
                switch (operacao) {
                    case 1:
                        printf("\nDigite um número: "); //pede uma valor ao usuário.
                        scanf(" %lf", &n1); // o valor digitado é guardado na variavel n1.
                        if (n1 < 0) {
                            printf("\nErro! Não há raiz quadrada real de número negativo!\n");
                        } else {
                        printf("\nO resultado é %.2lf\n", sqrt(n1)); //calcula sqrt() e mostra o resultado.
                        }
                        break;
                    case 2:
                        printf("\nDigite um número inteiro: ");
                        scanf(" %d", &numint);
                        fatorial = 1;
                        for (i = 1; i <= numint; i++) {
                            fatorial *= i;
                        }
                        printf("\nO resultado é %d\n", fatorial);
                        break;
                    case 3:
                        printf("\nDigite um número: ");
                        scanf(" %lf", &n1);
                        printf("\nO resultado é %.2lf\n", (n1 < 0 ? -n1 : n1));
                        break;
                    case 4:
                        printf("\nDigite um número inteiro: ");
                        scanf(" %d", &numint);
                        if (numint % 2 == 0) {
                            printf("\n%d É um número par.\n", numint);    
                        } else {
                            printf("\n%d Não é um número par.\n", numint);
                        }
                        break;
                    case 5:
                        printf("\nDigite um número inteiro: ");
                        scanf(" %d", &numint);
                        if (numint % 2 != 0) {
                            printf("\n%d É um número ímpar.\n", numint);    
                        } else {
                            printf("\n%d Não é um número ímpar.\n", numint);
                        }
                        break;
                    case 6:
                        printf("\nDigite uma temperatura em Celsius: ");
                        scanf(" %lf", &n1);
                        printf("\nEm Fahrenheit é %.2lf\n", (n1 * 9/5) + 32);
                        break;
                    case 7:
                        printf("\nDigite um número: ");
                        scanf(" %lf", &n1);
                        if (n1 <= 0) {
                            printf("\nErro! logaritmo só existe números positivos.\n");
                        } else {
                            printf("\nO resultado é %.2lf\n", log10(n1));
                        }
                        break;
                    case 8:
                        printf("\nDigite o raio do círculo: ");
                        scanf(" %lf", &n1);
                        printf("\nA área do círculo é %.4lf\n", area = PI_CONST * n1 * n1);
                        break;
                    case 9:
                        printf("\nDigite o valor da aresta: ");
                        scanf(" %lf", &n1);
                        printf("\nO volume do cubo é %.4lf\n", n1 * n1 * n1);
                        break;
                }
            break;
            //Submenu 2 números
            case 2:
                printf("\n---Operações com 2 números---\n");
                printf("\n(1) Soma\n");
                printf("(2) Subtração\n");
                printf("(3) Multiplicação\n");
                printf("(4) Divisão\n");
                printf("(5) Potência\n");
                printf("(6) Calcular IMC\n");
                printf("(7) Média aritmetica\n");
                printf("(8) Área do retângulo\n");
                printf("(9) Área do triângulo\n");
                printf("(10) Calcular hipotenusa (Teorema de Pitágoras)\n");
                printf("(11) Calcular cateto (Teorema de Pitágoras)\n");
                printf("\nEscolha: ");
                scanf(" %d", &operacao);
                
                switch (operacao) {
                    case 1:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        printf("\nO resultado é %.2lf\n", n1 + n2);
                        break;
                    case 2:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        printf("\nO resultado é %.2lf\n", n1 - n2);
                        break;
                    case 3:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        printf("\nO resultado é %.2lf\n", n1 * n2);
                        break;
                    case 4:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        if (n2 != 0) {
                            printf("\nO resultado é %.2lf\n", n1 / n2);
                        } else {
                            printf("\nErro! Um número divido por zero é indefinido.\n");
                        }
                        break;
                    case 5:
                        printf("\nDigite a base: ");
                        scanf(" %lf", &n1);
                        printf("Digite o expoente: ");
                        scanf(" %lf", &n2);
                        printf("\nO resultado é %.2lf\n", pow(n1, n2));
                        break;
                    case 6:
                        printf("\nDigite o peso (kg): ");
                        scanf(" %lf", &n1);
                        printf("Digite a altura (m): ");
                        scanf(" %lf", &n2);
                        if (n1 < 0) {
                            printf("\nErro! Não existe peso negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe altura negativa.\n");
                        } else {
                            printf("\nO seu IMC é %.2lf\n", n1 / (n2 * n2));
                        }
                        break;
                    case 7:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        printf("\nO resultado é %.2lf\n", (n1 + n2) / 2);
                        break;
                    case 8:
                        printf("\nDigite a base: ");
                        scanf(" %lf", &n1);
                        printf("Digite a altura: ");
                        scanf(" %lf", &n2);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {    
                            printf("\nA área do retângulo é %.2lf\n", n1 * n2);
                        }
                        break;
                    case 9:
                        printf("\nDigite a base: ");
                        scanf(" %lf", &n1);
                        printf("Digite a altura: ");
                        scanf(" %lf", &n2);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {
                            printf("\nA área do triângulo é %.2lf\n", (n1 * n2) / 2);
                        }
                        break;
                    case 10:
                        printf("\nDigite o valor do primeiro cateto: ");
                        scanf(" %lf", &n1);
                        printf("Digite o valor do segundo cateto: ");
                        scanf(" %lf", &n2);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {
                            printf("\nA hipotenusa é %.2lf\n", sqrt(n1 * n1 + n2 * n2));
                        }
                        break;
                    case 11:
                        printf("\nDigite o valor da hipotenusa: ");
                        scanf(" %lf", &n1);
                        printf("Digite o valor do cateto: ");
                        scanf(" %lf", &n2);
                        if (n1 <= n2) {
                            printf("\nErro! A hipotenusa tem que ser maior que o cateto.\n");
                        } else if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {
                            printf("\nO valor do outro cateto é %.2lf\n", sqrt(n1 * n1 - n2 * n2));
                        }
                }
            break;
            //Submenu 3 números
            case 3:
                printf("\n---Operações com 3 números---\n");
                printf("\n(1) Média com 3 números\n");
                printf("(2) Área do trapézio\n");
                printf("(3) Volume do paralelepípedo\n");
                printf("(4) Perímetro do triângulo\n");
                printf("\nEscolha: ");
                scanf(" %d", &operacao);
                
                switch (operacao) {
                    case 1:
                        printf("\nDigite o primeiro número: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo número: ");
                        scanf(" %lf", &n2);
                        printf("Digite o terceiro número: ");
                        scanf(" %lf", &n3);
                        printf("\nO resultado é %.2lf\n", (n1 + n2 + n3) / 3);
                        break;
                    case 2:
                        printf("\nDigite a base maior: ");
                        scanf(" %lf", &n1);
                        printf("Digite a base menor: ");
                        scanf(" %lf", &n2);
                        printf("Digite a altura: ");
                        scanf(" %lf", &n3);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n3 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 > n1) {
                            printf("\nErro! A base menor não pode ser maior que a base maior.\n");
                        } else {
                            printf("\nA área do trapézio é %.2lf\n", (n1 + n2) * n3 / 2);
                        }
                        break;
                    case 3:
                        printf("\nDigite o comprimento: ");
                        scanf(" %lf", &n1);
                        printf("Digite a largura: ");
                        scanf(" %lf", &n2);
                        printf("Digite a altura: ");
                        scanf(" %lf", &n3);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n3 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {
                            printf("\nO volume do paralelepípedo é %.2lf\n", n1 * n2 * n3);
                        }
                        break;
                    case 4:
                        printf("\nDigite o primeiro lado: ");
                        scanf(" %lf", &n1);
                        printf("Digite o segundo lado: ");
                        scanf(" %lf", &n2);
                        printf("Digite o terceiro lado: ");
                        scanf(" %lf", &n3);
                        if (n1 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n2 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else if (n3 < 0) {
                            printf("\nErro! Não existe polígonos com valor negativo.\n");
                        } else {
                            printf("\nO perímetro do triângulo é %.2lf\n", n1 + n2 + n3);
                        }
                        break;
            case 0:
                break;
            
            default:
                printf("\nOpção Inválida!\n");
        }
    } 
}   while (opcao != 0);
    
	return 0;
}

