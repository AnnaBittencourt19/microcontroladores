- Mapeadas pelos portais B,C e D
- Não escolhe int0/int1
- Detecta qualquer nível de interrupção (entende as duas, não só subida ou só descida igual a estudada na aula anterior)
- Desvantagens disso (Detecta qualquer nível de interrupção)(cai na prova): Se for um botão, quando ele aperta e solta detecta interrupção, coloca if (pin) para evitar isso
- PCINT e INT0 diferenças (cai na prova)
- Configurar PCINT é só 2 registradores 
- Qualquer pino do IO (mapeados por meio dos portais) (Grupos: B -> 0, C -> 1 e D -> 2)
- PCICR: Qual grupo vou fazer a interupção
```C
PCICR |= (1<<PCIE1)  //Portal C (1)
```
- PCMSKn: Ativar o pino n (n = numero do portal, ativa o portal). Escolhe o pino da porta
```C
PCMSK1 = (1<<PCINT11) //Vou usar esse pino INT11
```
- Um vetor de interrupção para um grupo de pinos (ISR), aí usa If pin