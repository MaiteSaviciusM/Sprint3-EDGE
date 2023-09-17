#include <WiFi.h>
#include <HTTPClient.h>

// WiFi Configuration
char wifiSsid[] = "WIFI123";     // Nome da rede WiFi
char wifiPass[] = "123SENHA";    // Senha da rede WiFi

// TagoIO Configuration
char serverAddress[] = "https://admin.tago.io/devices/650772f65923c9000f66943d";  // Endereço da API da TagoIO
char contentHeader[] = "application/json";
char tokenHeader[] = "19b31fa1-ae02-4b12-abd7-ecfabfd37124";  // Token de autenticação da TagoIO

// Define o pino do sensor de poluição do ar
const int gasSensorPin = A0;

// Inicializa o cliente HTTP
HTTPClient client;

void setup() {
  Serial.begin(9600);
  init_wifi(); // Inicializa a conexão WiFi
}

void loop() {
  int pollutionValue = analogRead(gasSensorPin); // Leitura do sensor de poluição do ar
  send_pollution_data(pollutionValue); // Envio dos dados de poluição do ar para a TagoIO
  delay(5000); // Aguarda 5 segundos antes de enviar o próximo conjunto de dados
}

void init_wifi() {
  Serial.println("Conectando Wifi...");
  Serial.print("SSID: ");
  Serial.println(wifiSsid);
  Serial.print("PASS: ");
  Serial.println(wifiPass);
  WiFi.begin(wifiSsid, wifiPass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi Conectado!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void send_pollution_data(int pollutionValue) {
  char postData[300];
  int statusCode = 0;
  
  // Construa o JSON com os dados de poluição do ar
  snprintf(postData, sizeof(postData), "{\n\t\"variable\": \"Pollution\",\n\t\"value\": %d,\n\t\"unit\": \"UnidadeDeMedida\"\n\t}\n", pollutionValue);

  client.begin(serverAddress);
  client.addHeader("Content-Type", contentHeader);
  client.addHeader("Device-Token", tokenHeader);
  statusCode = client.POST(postData);
  
  // Leia o código de status e o corpo da resposta
  Serial.print("Status code: ");
  Serial.println(statusCode);
  Serial.println("End of POST to TagoIO");
  Serial.println();
}