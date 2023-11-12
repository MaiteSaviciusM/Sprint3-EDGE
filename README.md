# InfoAir - monitoramento da qualidade do ar


**Descrição do Projeto**

Este projeto tem como objetivo criar uma solução de monitoramento ambiental usando dispositivos IoT para coletar dados de sensores de temperatura, umidade e qualidade do ar. Os dados são enviados para o servidor back-end através da plataforma Wowki, onde são armazenados de forma segura e disponibilizados para visualização em tempo real no aplicativo InfoAir.

**Arquitetura Proposta**

A arquitetura da solução envolve três principais componentes: IoT devices, Back-end (integrado à plataforma Wowki) e Front-end.
**IoT Devices**

Os dispositivos IoT utilizam as bibliotecas ArduinoJson.h e EspMQTTClient.h para facilitar a comunicação e são executados na plataforma Wowki. Eles incluem sensores de temperatura, umidade e qualidade do ar conectados ao Arduino.

Os dispositivos são programados para coletar dados dos sensores e enviá-los para o servidor back-end na plataforma Wowki a cada 5 segundos por meio de uma conexão Wi-Fi da prórpia plataforma.

**Back-end**


O servidor back-end recebe os dados dos dispositivos IoT e os armazena em um banco de dados localizado na nuvem, que também é responsável pela segurança dos dados.

**Front-end**


O aplicativo exibe os dados coletados em tempo real através de gráficos, tabelas e ilustrações.
Os usuários podem visualizar tendências de temperatura, umidade e qualidade do ar ao longo do tempo.

**Recursos Necessários**

- Dispositivos IoT (Wowki compatível)
- Placas de desenvolvimento IoT (por exemplo, Arduino).
- Sensores de temperatura, umidade e qualidade do ar.
- Conexão Wi-Fi para comunicação com a plataforma Wowki.
Front-end
-Navegador web para visualização do aplicativo.
-HTML, CSS e JavaScript para desenvolvimento do front-end.


**Requisitos e Dependências**
- Sensores de temperatura, umidade e qualidade do ar.
- Placas de desenvolvimento IoT compatíveis com a plataforma Wowki.

**Links**
Wowki: [https://wokwi.com/projects/380692559773788161](https://wokwi.com/projects/380692559773788161)
YouTube: [https://www.youtube.com/watch?v=nEu8SIgbOzQ&feature=youtu.be](https://www.youtube.com/watch?v=nEu8SIgbOzQ&feature=youtu.be)

Nome dos componentes – 1ESPX
• Gabriel Pacheco – RM550191
• Gustavo Veríssimo de Paulo Alves –RM551244
• Maitê Savicius – RM98435
• Murilo Henrique – RM99855
