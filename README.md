# README - Scripts de Manipulação de Texto

## 1. Cortar Texto
### Descrição
Este programa permite ao usuário inserir um texto e realizar cortes em diferentes partes, especificando o início e o fim de cada corte.

### Como Compilar
```sh
gcc -o cortar cortar_texto.c
```

### Como Executar
```sh
./cortar
```

### Exemplo de Uso
**Entrada:**
```
Digite um texto: Exemplo de teste para corte
Digite o número de cortes: 2
Digite o início e o fim do corte 1: 1 7
Digite o início e o fim do corte 2: 11 15
```

**Saída:**
```
Exemplo
teste
```

## 2. Contar Ocorrências de um Padrão
### Descrição
Este programa recebe um texto e um padrão e conta quantas vezes o padrão aparece no texto.

### Como Compilar
```sh
gcc -o contar contar_ocorrencias.c
```

### Como Executar
```sh
./contar
```

### Exemplo de Uso
**Entrada:**
```
Digite um texto: banana banana banana
Digite o padrão a ser buscado: na
```

**Saída:**
```
O padrão 'na' aparece 3 vezes no texto.
```

