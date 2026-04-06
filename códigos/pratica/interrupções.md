- Coisas que não estão no código principal (esta fora do escopo principal), algo que não era pra acontecer, interrompe o loop infinito
- Um pulso fora do Arduino que chama a interrupção (um botão por exemplo)
- Aperta o botão vai para interrupção
- Faz no PD2 ou PD3 (INT0 ou INT1)
- EICRA (subida ou descida ou os dois)
- EIMSK: Ativar interrupção (ex: EIMSK |= (1 << INT0) ativa o INT0)
- sei() (interrupção global)
- ISR tudo o que quer que aconteça quando acontecer a interrupção (rotina de interrupção)
- Ordem:
	1. Entradas e saidas 
	2. EICRA
	3. EIMSK
	4. sei()
	5. loop (dentro o código com tudo normal)
	6. ISR (dentro código com interrupção)