int redPin = 10;      // Define o pino digital para o LED vermelho
int yellowPin = 11;    // Define o pino digital para o LED amarelo
int greenPin = 12;     // Define o pino digital para o LED verde
int buzzerPin = 13;    // Define o pino digital para o buzzer

void setup() {
  Serial.begin(9600);      // Inicia a comunicação serial com uma taxa de transmissão de 9600 bps
  pinMode(redPin, OUTPUT);     // Configura o pino do LED vermelho como saída
  pinMode(yellowPin, OUTPUT);  // Configura o pino do LED amarelo como saída
  pinMode(greenPin, OUTPUT);   // Configura o pino do LED verde como saída
  pinMode(buzzerPin, OUTPUT);  // Configura o pino do buzzer como saída
}

void loop() {
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(buzzerPin, LOW);
  
  int LDR = analogRead(A0);    // Lê o valor do sensor de luminosidade (LDR) conectado ao pino analógico A0
  int luz = map(LDR, 0, 1023, 0, 100);  // Mapeia o valor lido do LDR para uma faixa de 0 a 100
  
  Serial.println(luz);    // Imprime o valor da luz no monitor serial
  
  if (luz <= 40) {    // Se a luz for igual ou inferior a 40
    digitalWrite(greenPin, HIGH);   // Acende o LED verde
    digitalWrite(redPin, LOW);      // Desliga o LED vermelho
    digitalWrite(yellowPin, LOW);   // Desliga o LED amarelo
    noTone(buzzerPin);// Desliga o buzzer (se estiver tocando)
    Serial.println("Luz adequada, seu vinho nao ira sofrer danos");
  } else if (luz > 40 && luz <= 89) {    // Se a luz estiver entre 40 e 89
    digitalWrite(greenPin, LOW);    // Desliga o LED verde
    digitalWrite(redPin, LOW);      // Desliga o LED vermelho
    digitalWrite(yellowPin, HIGH);  // Acende o LED amarelo
    tone(buzzerPin,261);    // Liga o buzzer com frequência de 261 Hz
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    Serial.println("Atencao luminosidade em nivel medio, sua safra corre riscos");
  } else {    // Se a luz for maior que 89
    digitalWrite(greenPin, LOW);    // Desliga o LED verde
    digitalWrite(redPin, HIGH);     // Acende o LED vermelho
    digitalWrite(yellowPin, LOW);   // Desliga o LED amarelo
    tone(buzzerPin,261);    // Liga o buzzer com frequência de 261 Hz
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    tone(buzzerPin,261);    
    delay(300);
    noTone(buzzerPin);   
    tone(buzzerPin,293);             
    delay(300);    
    noTone(buzzerPin);
    Serial.println("Alta luminosidade, nivel: CRITICO. Seu vinho ira ser afetado");
  }
  delay(250);
}
