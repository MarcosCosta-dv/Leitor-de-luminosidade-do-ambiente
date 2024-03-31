# Leitor-de-luminosidade-do-ambiente
Código de implementação de um leito de luminosidade (LDR) feito no tinnkercad

# Controle de Iluminação para Armazenamento de Vinho

Este é um projeto em Arduino que visa controlar a iluminação em um ambiente de armazenamento de vinho com base na luminosidade detectada por um sensor de luz.

## Requisitos

- Placa Arduino Uno (ou compatível)
- Sensor de luminosidade (LDR)
- LEDs nas cores vermelho, amarelo e verde
- Buzzer (opcional)
- Cabos de conexão

## Como Funciona

O código realiza as seguintes operações:

1. Inicializa os pinos digitais para os LEDs vermelho, amarelo e verde, assim como para o buzzer.
2. Lê continuamente o valor do sensor de luminosidade conectado ao pino analógico A0.
3. Mapeia o valor lido do sensor para uma faixa de 0 a 100.
4. Com base no valor da luminosidade, controla os LEDs e, opcionalmente, o buzzer, de acordo com as seguintes condições:
   - Se a luminosidade for baixa (<= 40), o LED verde é aceso.
   - Se a luminosidade estiver entre 40 e 89, o LED amarelo é aceso.
   - Se a luminosidade for alta (> 89), o LED vermelho é aceso e o buzzer pode ser ativado.
5. Imprime mensagens no monitor serial para indicar o estado da luminosidade e possíveis ações a serem tomadas.

## Instalação e Uso

1. Conecte os componentes conforme descrito no código.
2. Carregue o código para a placa Arduino.
3. Abra o monitor serial para visualizar as mensagens de saída e monitorar o comportamento do sistema.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues relatando problemas ou propor melhorias. Pull requests também são aceitos.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
