#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
// Funcao do Bubble Sort 
void bubble_sort() 
{ 
    int valor; 
 
    // submenu do Bubble Sort 
    printf("Digite um valor: 1-Bubble Sort para numeros inteiros separador, 2
Bubble Sort para numeros inteiros juntos, 3-Bubble Sort para numeros 
flutuantes: "); 
    scanf("%d", &valor); 
 
    // valida se a opcao digitada e invalida 
    if (valor == 0) 
    { 
        printf("Valor invalido, Digite um numero valido\n"); 
        return; 
    } 
 
    switch (valor) 
    { 
        case 1: 
        { 
            printf("Bubble Sort para numeros inteiros separador\n"); 
 
            int vetor[100]; 
            int i, j, temp, tamanho; 
 
            // le a quantidade de numeros 
            printf("digite quantos numeros deseja ordenar "); 
            scanf("%d", &tamanho); 
 
            if (tamanho == 0) 
            { 
                printf("Valor invalido, Digite um numero valido\n"); 
                return; 
            } 
 
            // le os numeros do vetor 
            printf("digite os numeros separados por espaco "); 
            for(i = 0; i < tamanho; i++) { 
                scanf("%d", &vetor[i]); 
 
                if (vetor[i] == 0) 
                { 
                    printf("Valor invalido! Digite um numero valido\n"); 
                    return; 
                } 
            } 
 
            // Bubble Sort 
            for(i = 0; i < tamanho - 1; i++){ 
                for (j = 0; j < tamanho - 1 - i; j++) { 
                    if (vetor[j] > vetor[j + 1]) { 
                        temp = vetor[j]; 
                        vetor[j] = vetor[j + 1]; 
                        vetor[j + 1] = temp; 
                    } 
                } 
            } 
 
            // mostra o vetor ordenado 
            printf("seu numero ordenado: "); 
            for (i = 0; i < tamanho; i++) { 
                printf("%d ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        case 2: 
        { 
            printf("Bubble Sort para numeros inteiros juntos\n"); 
 
            char numeros[100]; 
            int vetor[100]; 
            int i, j, temp, tamanho; 
 
            printf("digite os numeros que deseja ordenar   "); 
            scanf("%s", numeros); 
 
            if (strcmp(numeros, "0") == 0) 
            { 
                printf("Valor invalido! Digite um numero valido.\n"); 
                return; 
            } 
 
            // pega o tamanho da string 
            tamanho = strlen(numeros); 
 
            // transforma a string em vetor de inteiros 
            for(i=0; i<tamanho; i++){ 
                vetor[i]=numeros[i]-'0'; 
            } 
 
            // Bubble Sort 
            for(i=0; i<tamanho-1; i++){ 
                for (j = 0; j < tamanho - 1 - i; j++) { 
                    if (vetor[j] > vetor[j + 1]) { 
                        temp = vetor[j]; 
                        vetor[j] = vetor[j + 1]; 
                        vetor[j + 1] = temp; 
                    } 
                } 
            } 
 
            // mostra o vetor ordenado 
            printf(" seu numero ordenados "); 
            for (i = 0; i < tamanho; i++) { 
                printf("%d ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        case 3: 
        { 
            printf("Bubble Sort para numeros flutuantes\n"); 
 
            float vetor[100]; 
            int i, j, tamanho; 
            float temp; 
 
            // le a quantidade de numeros 
            printf("digite quantos numeros deseja ordenar: "); 
            scanf("%d", &tamanho); 
 
            if (tamanho == 0) 
            { 
                printf("Valor invalido, Digite um numero valido\n"); 
                return; 
            } 
 
            // le os numeros flutuantes 
            printf("digite os numeros flutuantes separados por espaco"); 
            for(i = 0; i < tamanho; i++) { 
                scanf("%f", &vetor[i]); 
 
                if (vetor[i] == 0) 
                { 
                    printf("Valor invalido, Digite um numero valido.\n"); 
                    return; 
                } 
            } 
 
            // Bubble Sort 
            for(i = 0; i < tamanho - 1; i++){ 
                for (j = 0; j < tamanho - 1 - i; j++) { 
                    if (vetor[j] > vetor[j + 1]) { 
                        temp = vetor[j]; 
                        vetor[j] = vetor[j + 1]; 
                        vetor[j + 1] = temp; 
                    } 
                } 
            } 
 
            // mostra os numeros ordenados 
            printf("numeros ordenados"); 
            for (i = 0; i < tamanho; i++) { 
                printf("%.2f ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        default: 
            printf("Valor invalido\n"); 
    } 
} 
 
// Funcao do Selection Sort 
void selection_sort() 
{ 
    int valor; 
 
    // submenu do Selection Sort 
    printf("Digite um valor: 1-Selection Sort para numeros inteiros separador, 
2-Selection Sort para numeros inteiros juntos, 3-Selection Sort para 
numeros flutuantes: "); 
    scanf("%d", &valor); 
 
    if (valor == 0) 
    { 
        printf("Valor invalido Digite um numero valido\n"); 
        return; 
    } 
 
    switch (valor) 
    { 
        case 1: 
        { 
            printf("Selection Sort para numeros inteiros separador\n"); 
 
            int vetor[100]; 
            int i, j, temp, tamanho, menor; 
 
            // le a quantidade de numeros 
            printf("digite quantos numeros deseja ordenar: "); 
            scanf("%d", &tamanho); 
 
            if (tamanho == 0) 
            { 
                printf("Valor invalido Digite um numero valido\n"); 
                return; 
            } 
 
            // le os numeros do vetor 
            printf("digite os numeros separados por espaco: "); 
            for(i = 0; i < tamanho; i++) { 
                scanf("%d", &vetor[i]); 
 
                if (vetor[i] == 0) 
                { 
                    printf("Valor invalido Digite um numero valido\n"); 
                    return; 
                } 
            } 
 
            // Selection Sort 
            for (i = 0; i < tamanho - 1; i++) { 
                menor = i; 
 
                for (j = i + 1; j < tamanho; j++) { 
                    if (vetor[j] < vetor[menor]) { 
                        menor = j; 
                    } 
                } 
 
                temp = vetor[i]; 
                vetor[i] = vetor[menor]; 
                vetor[menor] = temp; 
            } 
 
            // mostra o vetor ordenado 
            printf("seu numero ordenado: "); 
            for (i = 0; i < tamanho; i++) { 
                printf("%d ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        case 2: 
        { 
            printf("Selection Sort para numeros inteiros juntos \n"); 
 
            char numeros[100]; 
            int vetor[100]; 
            int i, j, temp, tamanho, menor; 
 
            printf("digite os numeros que deseja ordenar sem espaco  "); 
            scanf("%s", numeros); 
 
            if (strcmp(numeros, "0") == 0) 
            { 
                printf("Valor invalido Digite um numero valido\n"); 
                return; 
            } 
 
            // pega o tamanho da string 
            tamanho = strlen(numeros); 
 
            // transforma a string em vetor de inteiros 
            for(i = 0; i < tamanho; i++) { 
                vetor[i] = numeros[i] - '0'; 
            } 
 
            // Selection Sort 
            for (i = 0; i < tamanho - 1; i++) { 
                menor = i; 
 
                for (j = i + 1; j < tamanho; j++) { 
                    if (vetor[j] < vetor[menor]) { 
                        menor = j; 
                    } 
                } 
 
                temp = vetor[i]; 
                vetor[i] = vetor[menor]; 
                vetor[menor] = temp; 
            } 
 
            // mostra o vetor ordenado 
            printf("seu numero ordenado: "); 
            for (i = 0; i < tamanho; i++) { 
                printf("%d ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        case 3: 
        { 
            printf("Selection Sort para numeros flutuantes \n"); 
 
            float vetor[100]; 
            int i, j, tamanho, menor; 
            float temp; 
 
            // le a quantidade de numeros 
            printf("digite quantos numeros deseja ordenar: "); 
            scanf("%d", &tamanho); 
 
            if (tamanho == 0) 
            { 
                printf("Valor invalido Digite um numero valido\n"); 
                return; 
            } 
 
            // le os numeros flutuantes 
            printf("digite os numeros flutuantes separados por espaco: "); 
            for(i = 0; i < tamanho; i++) { 
                scanf("%f", &vetor[i]); 
 
                if (vetor[i] == 0) 
                { 
                    printf("Valor invalido Digite um numero valido\n"); 
                    return; 
                } 
            } 
 
            // Selection Sort 
            for (i = 0; i < tamanho - 1; i++) { 
                menor = i; 
 
                for (j = i + 1; j < tamanho; j++) { 
                    if (vetor[j] < vetor[menor]) { 
                        menor = j; 
                    } 
                } 
 
                temp = vetor[i]; 
                vetor[i] = vetor[menor]; 
                vetor[menor] = temp; 
            } 
 
            // mostra os numeros ordenados 
            printf("numeros ordenados: "); 
            for (i = 0; i < tamanho; i++) { 
                printf("%.2f ", vetor[i]); 
            } 
            printf("\n"); 
            break; 
        } 
 
        default: 
            printf("Valor invalido\n"); 
    } 
} 
 
// Funcao da busca sequencial 
void busca_sequencial() 
{ 
    int vetor[100]; 
    int i, tamanho, procurado, encontrado = 0; 
 
    // le a quantidade de numeros 
    printf("Digite a quantidade de numeros do vetor: "); 
    scanf("%d", &tamanho); 
 
    if (tamanho == 0) { 
        printf("Valor invalido! Digite um numero valido.\n"); 
        return; 
    } 
 
    // le os valores do vetor 
    printf("Digite os numeros do vetor: "); 
    for(i = 0; i < tamanho; i++) { 
        scanf("%d", &vetor[i]); 
 
        if (vetor[i] == 0) { 
            printf("Valor invalido! Digite um numero valido.\n"); 
            return; 
        } 
    } 
 
    // le o numero que sera procurado 
    printf("Digite o numero que deseja buscar: "); 
    scanf("%d", &procurado); 
 
    if (procurado == 0) { 
        printf("Valor invalido! Digite um numero valido.\n"); 
        return; 
    } 
 
    // busca sequencial 
    for(i = 0; i < tamanho; i++) { 
        if(vetor[i] == procurado) { 
            printf("Elemento encontrado na posicao %d\n", i); 
            encontrado = 1; 
            break; 
        } 
    } 
 
    // mostra se o elemento nao foi encontrado 
    if(encontrado == 0) { 
        printf("Elemento nao encontrado\n"); 
    } 
} 
 
// Funcao da busca binaria 
void busca_binaria() 
{ 
    int vetor[100]; 
    int i, tamanho, procurado; 
    int inicio, meio, fim, encontrado = 0; 
 
    // le a quantidade de numeros 
    printf("Digite a quantidade de numeros do vetor: "); 
    scanf("%d", &tamanho); 
 
    if (tamanho == 0) { 
        printf("Valor invalido! Digite um numero valido.\n"); 
        return; 
    } 
 
    // le o vetor ja em ordem crescente 
    printf("Digite os numeros do vetor em ordem crescente: "); 
    for(i = 0; i < tamanho; i++) { 
        scanf("%d", &vetor[i]); 
 
        if (vetor[i] == 0) { 
            printf("Valor invalido! Digite um numero valido.\n"); 
            return; 
        } 
    } 
 
    // le o numero que sera procurado 
    printf("Digite o numero que deseja buscar: "); 
    scanf("%d", &procurado); 
 
    if (procurado == 0) { 
        printf("Valor invalido! Digite um numero valido.\n"); 
        return; 
    } 
 
    inicio = 0; 
    fim = tamanho - 1; 
 
    // busca binaria 
    while(inicio <= fim) { 
        meio = (inicio + fim) / 2; 
 
        if(vetor[meio] == procurado) { 
            printf("Elemento encontrado na posicao %d\n", meio); 
            encontrado = 1; 
            break; 
        } 
        else if(procurado < vetor[meio]) { 
            fim = meio - 1; 
        } 
        else { 
            inicio = meio + 1; 
        } 
    } 
 
    // mostra se o elemento nao foi encontrado 
    if(encontrado == 0) { 
        printf("Elemento nao encontrado\n"); 
    } 
} 
 
int main(void) 
{ 
    int valor; 
 
     
    // menu principal 
    printf("Digite um valor: 1-Bubble Sort, 2-Selection Sort, 3-Busca 
sequencial, 4-Busca binaria: "); 
    scanf("%d", &valor); 
 
    switch (valor) 
    { 
        case 1: 
            printf("Bubble Sort\n"); 
            bubble_sort(); 
            break; 
 
        case 2: 
            printf("Selection Sort\n"); 
            selection_sort(); 
            break; 
 
        case 3: 
            printf("Busca sequencial\n"); 
            busca_sequencial(); 
            break; 
 
        case 4: 
            printf("Busca binaria\n"); 
            busca_binaria(); 
            break; 
 
        default: 
            printf("Valor invalido!\n"); 
    } 
 
    return 0;
}