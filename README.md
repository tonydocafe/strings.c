# README - Text Manipulation Scripts

## 1. Cut Text
### Description
This program allows the user to enter text and make cuts in different parts, specifying the beginning and end of each cut.

### How to Compile
```sh
gcc -o cortar cortar_texto.c
```

### How to run
```sh
./cortar
```

### Usage Example
**Input:**
```
Digite um texto: Exemplo de teste para corte
Digite o número de cortes: 2
Digite o início e o fim do corte 1: 1 7
Digite o início e o fim do corte 2: 11 15
```

**Out:**
```
Example
teste
```

## 2. Count Occurrences of a Pattern
### Description
This program takes a text and a pattern and counts how many times the pattern appears in the text.

### How to Compile
```sh
gcc -o contar contar_ocorrencias.c
```

### How to run
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

