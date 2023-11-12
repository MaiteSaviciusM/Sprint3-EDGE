#include "ArduinoJson.h"
#include "EspMQTTClient.h"
// MQTT Configuracoes
EspMQTTClient client{
  "Wokwi-GUEST", //SSID do WiFi
  "",     // Senha do wifi
  "mqtt.tago.io",  // Endereço do servidor
  "Default",       // Usuario
  "5bfdba81-5080-456e-ad16-bcc86a7c75aa",         // Token do device
  "AAAAAAA",           // Nome do device
  1883             // Porta de comunicação
};
void setup() {
  Serial.begin(9600);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}
// Callback da EspMQTTClient
void onConnectionEstablished() {}
 
char bufferJson[100];
int temperatura = 0;
int poluicao = 0;  // Adicione a variável de poluição
int umidade = 0;   // Adicione a variável de umidade
 
void loop() {
  temperatura = random(10, 30);
  poluicao = random(0, 100);  // Gere um valor aleatório para poluição (ajuste os limites conforme necessário)
  umidade = random(20, 80);   // Gere um valor aleatório para umidade (ajuste os limites conforme necessário)
 
  StaticJsonDocument<300> documentoJson;
  documentoJson["variable"] = "temperatura";
  documentoJson["value"] = temperatura;
  documentoJson["unit"] = "celsius";
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("topicoTDSPI", bufferJson);
  delay(5000);
  client.loop();
 
  // Agora, crie um JSON para poluição e publique os dados
  documentoJson["variable"] = "poluicao";
  documentoJson["value"] = poluicao;
  documentoJson["unit"] = "ppm";  // Unidade apropriada para poluição
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("topicoTDSPI", bufferJson);
  delay(5000);
  client.loop();
 
  // Repita o processo para umidade
  documentoJson["variable"] = "umidade";
  documentoJson["value"] = umidade;
  documentoJson["unit"] = "%";  // Unidade apropriada para umidade
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("topicoTDSPI", bufferJson);
  delay(5000);
  client.loop();
}
