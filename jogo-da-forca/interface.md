# Interface
## Como ele ficará?
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
