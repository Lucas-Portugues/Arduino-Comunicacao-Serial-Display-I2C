# Mensagens no Display LCD via Monitor Serial

Este projeto permite enviar mensagens de texto do computador direto para uma tela LCD de 16 colunas e 2 linhas conectada ao Arduino.

## Como Funciona?
* Assim que o circuito liga, a tela exibe a mensagem "Em espera...".
* Ao abrir o **Monitor Serial** no computador, digite uma frase e aperte Enter.
* O Arduino recebe esse texto e mostra na tela.
* Se a frase for muito grande (mais de 16 letras), o texto ocupa a segunda linha do display automaticamente.

## Componentes Usados
* 1x Arduino Uno
* 1x Display LCD 16x2 com Módulo I2C integrado
  
## Link do projeto:
https://www.tinkercad.com/things/9B7LQjUEfvN-comunicacao-serial-display-i2c?sharecode=KtrRO1v6se12UVgq--hkwOaDNf2jK8XOJcFNVI2ndmY
