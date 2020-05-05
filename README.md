# Jogos com "C"

Projeto simples e totalmente focado no aprendizado. 
Inicialmente baseado no curso online da plataforma de cursos online [Alura](https://alura.com.br).

Este repositório conta com jogos simples e bastante conhecidos pela sociedade. A escolha de tais jogos é devido ao fato de fornecer as habilidades necessárias para a introdução de alguma linguagem de programação. 

#### Jogos:
* Jogo de advinhação
* Jogo da Forca
* Jogo do Pacmano (baseado no clássico jogo de atari [Pacman](https://www.google.com/doodles/30th-anniversary-of-pac-man)

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
* `$ gcc main.c -o game`
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

Jogo simples de advinhação, em que a máquina *"pensa"* em um número de 1 até 100, e você tem que chutar um número e tentar acertar, implementado o mecanismo de dificuldade, da qual temos **3 níveis: fácil, médio e difícil**, em que o modo fácil você tem 20 chances de acertar o número (lembrando que o programa vai informar se o número é maior ou menor do que o número digitado pelo usuário), já o modo médio lhe disponibiliza 12 chances, e o modo difícil lhe disponibiliza apenas 6 chances para acertar o número "pensado" pela máquina.

Habilidades treinadas:

- [x] Variáveis e constantes
- [x] Entrada e saída de dados
- [x] Miniartes
- [x] Como gerar valores *semi*-aleatórios
- [x] Operações
- [x] Estruturas de selecão (if-else-elseif-switch)
- [x] Estruturas de repetição (for-while)

## Jogo-da-forca

**_O computador escolherá, de maneira randômica, uma palavra que está salva em um arquivo de palavras, e o jogador deve chutar, letra por letra, até adivinhar a palavra._**

**_Se o jogador chutar 5 letras erradas, ele perde. Ao final, o computador oferecerá a possibilidade do usuário inserir uma nova palavra no banco de dados._**

Com o jogo feito, a ideia é aprender em linguagem C:

- [x] Criar, varrer e manipular arrays de diferentes tipos.
- [x] Usar arrays de chars (strings) e funções para manipulá-los.
- [x] Entender e criar funções que recebem parâmetros e devolvem valores.
- [x] Ler e escrever arquivos com formatos específicos.
- [x] Aprender mais boas práticas de código, como a criação e extração de funções para evitar repetição de código.
- [x] Criar header files.

Como ele ficará?
Nosso jogo também terá uma interface amigável. Ao iniciar, ele nos dará um boas vindas, e imprimirá a forca, por enquanto, sem ninguém:

```
/****************/
/ Jogo de Forca */
/****************/

  _______       
 |/      |      
 |           
 |           
 |             
 |            
 |              
_|___          
``` 


> _ _ _ _ _ _ _ _ _ 

Qual letra?

#### Se você chutar uma letra errada, ele o avisará e o homenzinho comecará a aparecer na forca:

```

Você errou: a palavra NÃO tem a letra X

  _______       
 |/      |      
 |      (_)  
 |           
 |             
 |            
 |              
_|___           

```


> _ _ _ _ _ _ _ _ _ 

Qual letra?

#### Se você chutar uma letra certa, a letra aparece entre o vazado:


Qual letra? A

```

Você acertou: a palavra tem a letra A
  _______       
 |/      |      
 |           
 |           
 |             
 |            
 |              
_|___           

```

> _ _ _ _ _ A _ _ A

Qual letra?

#### Se você perder, ele te enforcará por completo:

```
  _______       
 |/      |      
 |      (_)  
 |      \|/  
 |       |     
 |      / \   
 |              
_|___

```

#### Uma caveira também aparecerá, avisando que o jogo acabou:

```

Puxa, você foi enforcado!

    _______________         
   /               \       
  /                 \      
//                   \/\  
\|   XXXX     XXXX   | /   
 |   XXXX     XXXX   |/     
 |   XXX       XXX   |      
 |                   |      
 \__      XXX      __/     
   |\     XXX     /|       
   | |           | |        
   | I I I I I I I |        
   |  I I I I I I  |        
   \_             _/       
     \_         _/         
       \_______/

```

#### Se você ganhar, um troféu aparecerá:


```
Parabéns, você ganhou!
       ___________      
      '._==_==_=_.'     
      .-\:      /-.    
     | (|:.     |) |    
      '-|:.     |-'     
        \::.    /      
         '::. .'        
           ) (          
         _.' '._        
        '-------'
```
## Jogo do Pacmano

