Validador de CPF em C
Descrição

Este projeto foi desenvolvido em linguagem C com o objetivo de validar números de CPF utilizando o algoritmo oficial de verificação dos dígitos verificadores.

O programa recebe um CPF digitado pelo usuário, realiza os cálculos dos dois dígitos verificadores e informa se o CPF é válido ou inválido.

Funcionalidades
Leitura de CPF com 11 dígitos
Conversão de caracteres para números inteiros
Cálculo do primeiro dígito verificador
Cálculo do segundo dígito verificador
Verificação da validade do CPF
Exibição do resultado ao usuário
Tecnologias Utilizadas
Linguagem C
Biblioteca stdio.h
Biblioteca stdlib.h
Biblioteca string.h
Como Funciona

O programa segue as regras oficiais de validação do CPF:

Multiplica os 9 primeiros dígitos por pesos decrescentes de 10 a 2.
Calcula o primeiro dígito verificador.
Multiplica os 10 primeiros dígitos por pesos decrescentes de 11 a 2.
Calcula o segundo dígito verificador.
Compara os resultados com os dígitos informados pelo usuário.
Como Executar
Compilar
gcc main.c -o cpf
Executar
./cpf
Exemplo de Uso
Entrada
52998224725
Saída
Seu CPF esta valido!
Entrada
12345678900
Saída
Seu CPF não esta valido!
Conceitos Praticados

Durante o desenvolvimento deste projeto foram praticados:

Vetores
Strings
Conversão de char para int
Estruturas condicionais (if e else)
Estruturas de repetição (for)
Operadores matemáticos
Algoritmos de validação
Melhorias Futuras
Permitir CPF com pontos e traço (000.000.000-00)
Verificar entrada inválida (letras e caracteres especiais)
Criar funções para modularizar o código
Implementar validação de CNPJ
Criar interface gráfica ou versão web
Autor

Italo

Estudante de Engenharia de Software e entusiasta de programação.
