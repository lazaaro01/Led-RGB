void setup() {
  pinMode(13, OUTPUT);  // Led vermelho
  pinMode(12, OUTPUT);  // Led amarelo
  pinMode(11, OUTPUT);  // Led verde
  pinMode(10, OUTPUT);  // Led azul
  pinMode(9, OUTPUT);   // Led branco
  
  // Ativa o LED azul para indicar que a função setup() está sendo executada
  digitalWrite(10, HIGH);
}

void loop() {
  // Ativa o LED branco para indicar que a função loop() está sendo executada
  digitalWrite(9, HIGH);
  
  digitalWrite(13, HIGH);  // Liga o led vermelho
  delay(5000);             // 5000 MS
  digitalWrite(13, LOW);   // Desliga o led vermelho
  
  digitalWrite(12, HIGH);  // Liga o led amarelo
  delay(2000);             // 2000 MS
  digitalWrite(12, LOW);   // Desliga o led amarelo
  
  digitalWrite(11, HIGH);  // Liga o led verde
  delay(7000);             // 7000 MS
  digitalWrite(11, LOW);   // Desliga o led verde
  
  // Desativa o LED branco para indicar que a função loop() terminou
  digitalWrite(9, LOW);
}
