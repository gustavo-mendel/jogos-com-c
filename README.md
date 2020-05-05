# Jogos com "C"

Projeto simples e totalmente focado no aprendizado. 
Inicialmente baseado no curso online da plataforma de cursos online [Alura](https://alura.com.br).

Este repositório conta com jogos simples e bastante conhecidos pela sociedade. A escolha de tais jogos é devido ao fato de fornecer as habilidades necessárias para a introdução de alguma linguagem de programação. 

#### Jogos:
* Jogo de advinhação
* Jogo da Forca
* Jogo do Pacmano (baseado no clássico jogo de atari [Pacman](https://www.google.com/doodles/30th-anniversary-of-pac-man))

## Habilidades treinadas em geral com este repositório:

1. Controlador de versionamento Git/GitHub:
* como clonar projetos
* comandos do git no terminal bash
* adicionando, comitando arquivos
* o que é uma branch?
* push request, subindo arquivos diretamente no repositório
2. Linguagem de marcação MarkDown
3. Linguagem de programação C

## Executando os projetos

* Necessário:
*  Alguma IDE com a capacidade de executar códicos C/C++ **ou**
*  [GCC](https://gcc.gnu.org), o compilador da linguagem C

Para instalar o gcc clique [aqui](https://gcc.gnu.org/install/)
            ou
mundo unix (debian base): 
`sudo apt-get install gcc`

* Clone o projeto para a sua máquina
* Entre na pasta do jogo desejado pelo terminal

1. jogo da **_advinhação_**:

* `$ gcc main.c -o game`
* `$ ./game`

2. jogo da **_forca_**:

* `$ gcc main.c interface.c -o game`
* `$ ./game`

3. jogo do **_pacmano_**:

* `$ gcc main.c mapa.c ui.c -o game`
* `$ ./game`


* E então é só jogar.

## Contribuindo

  - :star2: Coloca esse projeto nos seus favoritos com um Star
  - :fork_and_knife: Faça um Fork do projeto
  - :computer: Clone o repositório para o seu computador
  - :wrench: Contribua no código ou na documentação do Projeto
  - :point_right: Crie um commit com as mudanças e faça um Pull Request (PR)

[Artigo](https://blog.da2k.com.br/2015/02/04/git-e-github-do-clone-ao-pull-request/) da da2k sobre como fazer Pull Rrequests.

## Jogo-da-advinhação

**_Jogo simples de advinhação, em que a máquina *"pensa"* em um número de 1 até 100, e você tem que chutar um número e tentar acertar, implementado o mecanismo de dificuldade, da qual temos 3 níveis: fácil, médio e difícil_**

Em que o modo fácil você tem 20 chances de acertar o número (lembrando que o programa vai informar se o número é maior ou menor do que o número digitado pelo usuário), já o modo médio lhe disponibiliza 12 chances, e o modo difícil lhe disponibiliza apenas 6 chances para acertar o número "pensado" pela máquina. Além de contar com um sistema de contagem de pontos simples, em que quando mais distante seu chute do número correto, mais você perde pontos.

Habilidades treinadas:

- Variáveis e constantes
- Entrada e saída de dados
- Miniartes
- Como gerar valores *semi*-aleatórios
- Operações
- Estruturas de selecão (if-else-elseif-switch)
- Estruturas de repetição (for-while)

[Interface do jogo](https://github.com/gustavo-mendel/jogos-com-c/blob/master/jogo-da-adivinhacao/interface.md)

## Jogo-da-forca

**_O computador escolherá, de maneira randômica, uma palavra que está salva em um arquivo de palavras, e o jogador deve chutar, letra por letra, até adivinhar a palavra._**

_Se o jogador chutar 5 letras erradas, ele perde. Ao final, o computador oferecerá a possibilidade do usuário inserir uma nova palavra no banco de dados._

Com o jogo feito, a ideia é aprender em linguagem C:

- Criar, varrer e manipular arrays de diferentes tipos.
- Usar arrays de chars (strings) e funções para manipulá-los.
- Entender e criar funções que recebem parâmetros e devolvem valores.
- Ler e escrever arquivos com formatos específicos.
- Aprender mais boas práticas de código, como a criação e extração de funções para evitar repetição de código.
- Criar header files.

[Interface do jogo](https://github.com/gustavo-mendel/jogos-com-c/blob/master/jogo-da-forca/interface.md)

## Jogo do Pacmano

**_Jogo baseado no Pacman de atari. O programa irá carregar um mapa pré-definido no arquivo `mapa.txt`, em que qualquer um poderá alterar o mapa como quiser, e colocar os inimigos/paredes/bombas onde quiser. Depois de começado o jogo, o usuário poderá usar os comandos w,a,s,d para mover o Pacmano._**

Habilidades:

-Escreva funções recursivas
-Manipule matrizes
-Defina tipos e estruturas
-Lide com diretivas de compilação
-Divida o código em múltiplos arquivos
-Crie um jogo de Pac Man completo

Mapa inicial:

```
10 20
____________________
|...#..|........|.#|
|.F.|...|...|...|..|
|____..F.|..|.F#|..|
|...|.......|___|..|
|...|...F..........|
|@....#..|......F..|
|________|......___|
|..F....F.......#..|
|__________________|

```

Legenda:
```
10 e 20 são as linhas e colunas
- e | são as paredes
@ é o Pacmano
F são os inimigos
# são os poderes
```

[Interface do jogo](https://github.com/gustavo-mendel/jogos-com-c/edit/master/jogo-do-pacmano/interface.md)

## Créditos

Copyright (C) 2020 by Gustavo Mendel
