# Algoritmos de Ordenação e Busca — AED N2

> Aplicação em C com algoritmos de ordenação e busca, containerizada com Docker e publicada na AWS EC2.
> PUC Goiás / FPM — Arquitetura de Computadores II —

---

## Sobre a Aplicação

Programa interativo de linha de comando desenvolvido em **C**, compilado com **GCC**, que implementa quatro algoritmos clássicos de estrutura de dados:

| Algoritmo | Descrição |
|---|---|
| **Bubble Sort** | Ordenação por troca — inteiros separados, inteiros juntos e flutuantes |
| **Selection Sort** | Ordenação por seleção — inteiros separados, inteiros juntos e flutuantes |
| **Busca Sequencial** | Percorre o vetor elemento a elemento até encontrar o valor |
| **Busca Binária** | Divide o vetor ao meio sucessivamente (requer vetor ordenado) |

---

## Pré-requisitos

### Para rodar localmente
- GCC instalado (`gcc --version`)
- Linux, macOS ou Windows com WSL

### Para rodar com Docker
- Docker instalado e em execução (`docker --version`)

### Para rodar na AWS
- Conta AWS com instância EC2 ativa
- Docker instalado na instância
- Porta 22 liberada no Security Group (para SSH)

---

## Rodando Localmente (sem Docker)

```bash
# 1. Clone o repositório
git clone [text](https://github.com/rebeccaherenio/AED-n2)
cd seu-repo

# 2. Compile o programa
gcc -o algoritmos algoritmos.c

# 3. Execute
./algoritmos
```

Ao executar, o menu principal aparece:

```
Digite um valor: 1-Bubble Sort, 2-Selection Sort, 3-Busca sequencial, 4-Busca binaria:
```

---

## Rodando com Docker (localmente)

### Dockerfile

```dockerfile
FROM gcc:latest

WORKDIR /app

COPY algoritmos.c .

RUN gcc -o algoritmos algoritmos.c

CMD ["./algoritmos"]
```

### Comandos

```bash
# 1. Build da imagem
docker build -t algoritmos-aed .

# 2. Executar o container (modo interativo — obrigatório para o menu funcionar)
docker run -it algoritmos-aed
```

> ** Importante:** use a flag `-it` (interactive + tty) — sem ela o programa não consegue receber entrada do teclado.

---

##  Rodando na AWS EC2

### 1. Conectar à instância via SSH

```bash
ssh -i "sua-chave.pem" ec2-user@<IP-PUBLICO-DA-INSTANCIA>
```

### 2. Instalar o Docker na instância (se ainda não tiver)

```bash
sudo yum update -y
sudo yum install docker -y
sudo service docker start
sudo usermod -a -G docker ec2-user
```

### 3. Clonar o repositório e fazer o build

```bash
git clone https://github.com/seu-usuario/seu-repo.git
cd seu-repo
docker build -t algoritmos-aed .
```

### 4. Executar

```bash
docker run -it algoritmos-aed
```

---

## Exemplos de Uso

### Bubble Sort — inteiros separados (opção 1 → 1)
```
Digite um valor: 1-Bubble Sort, 2-Selection Sort, 3-Busca sequencial, 4-Busca binaria: 1
Bubble Sort
Digite um valor: 1-Bubble Sort para numeros inteiros separador, ...: 1
Bubble Sort para numeros inteiros separador
digite quantos numeros deseja ordenar: 3
digite os numeros separados por espaco: 88 900 7
seu numero ordenado: 7 88 900
```

### Selection Sort — flutuantes (opção 2 → 3)
```
Digite um valor: ...: 2
Selection Sort
Digite um valor: ...: 3
Selection Sort para numeros flutuantes
digite quantos numeros deseja ordenar: 2
digite os numeros flutuantes separados por espaco: 2.2 0.1
numeros ordenados: 0.10 2.20
```

### Busca Sequencial (opção 3)
```
Digite um valor: ...: 3
Busca sequencial
Digite a quantidade de numeros do vetor: 5
Digite os numeros do vetor: 7 8 9 5 1
Digite o numero que deseja buscar: 5
Elemento encontrado na posicao 3
```

### Busca Binária (opção 4)
```
Digite um valor: ...: 4
Busca binaria
Digite a quantidade de numeros do vetor: 3
Digite os numeros do vetor em ordem crescente: 8 9 10
Digite o numero que deseja buscar: 10
Elemento encontrado na posicao 2
```

---

##  Estrutura do Repositório

```
.
├── algoritmos.c      # Código-fonte principal em C
├── Dockerfile        # Containerização com GCC
└── README.md         # Este arquivo
```

---

## Justificativa Arquitetural

| Decisão | Escolha | Motivo |
| **Linguagem** | C | Controle direto de memória, sem overhead de runtime — ideal para demonstrar algoritmos puros |
| **Compilador** | GCC | Padrão da indústria para C/C++, suporte nativo na imagem Docker oficial |
| **Container** | Docker com imagem `gcc:latest` | Garante ambiente de compilação idêntico em qualquer máquina |
| **Provider** | AWS EC2 | Free Tier disponível, controle total da instância, fácil acesso via SSH |
| **Tipo de instância** | t2.micro / t3.micro | Aplicação I/O-bound (espera entrada do usuário) — não exige CPU ou memória elevados |

---

## Grupo

- [Andressa Ferreira]
- [Lucas Almeida]
- [Rebeca Beatriz]

PUC Goiás — Arquitetura de Computadores II -
