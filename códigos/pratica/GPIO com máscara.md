- Sem mascara não muda um pino só, na mascara dá para editar apenas um, 2, 3

- Com mascara (ativar porta):
```C
PORTD = PORTD | 0b00000001;
```
- Com mascara desativar a porta
```C
PORTD &=˜(0b00000001);
```
- Pin fazer a leitura
- Só vamos usar mascara na sala