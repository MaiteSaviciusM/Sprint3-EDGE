Projeto IoT - Monitoramento Ambiental
Descrição do Projeto
Este projeto tem como objetivo criar uma solução de monitoramento ambiental usando dispositivos IoT para coletar dados de sensores de temperatura, umidade e qualidade do ar, disponibilizando essas informações em um aplicativo (InfoAir) para visualização em tempo real. Os dispositivos IoT enviarão os dados coletados para um servidor back-end que os armazenará e os disponibilizará para o front-end.

Arquitetura Proposta
A arquitetura da solução envolve três principais componentes: IoT devices, Back-end e Front-end.

IoT Devices
Os dispositivos IoT incluem sensores de temperatura, umidade e qualidade do ar conectados ao arduino.
Os dispositivos são programados para coletar dados dos sensores e enviar esses dados para o servidor back-end a cada 5 segundos por meio de uma conexão Wi-Fi.

Back-end
O servidor back-end recebe os dados dos dispositivos IoT e os armazena em um banco de dados localizado na nuvem, que também é responsável pela segurança dos dados.

Front-end
O aplicativo exibe os dados coletados em tempo real através de gráficos, tabelas e ilustrações.
Os usuários podem visualizar tendências de temperatura, umidade e qualidade do ar ao longo do tempo.

Recursos Necessários
Dispositivos IoT
Placas de desenvolvimento IoT (por exemplo, Arduino).
Sensores de temperatura, umidade e qualidade do ar.
Conexão Wi-Fi para comunicação com o back-end.
Back-end
Servidor web.
Banco de dados para armazenamento de dados.
Medidas de segurança (autenticação, criptografia).
Front-end
Navegador web para visualização do aplicativo.
HTML, CSS e JavaScript para desenvolvimento do front-end.
Bibliotecas e frameworks para criação de gráficos interativos (por exemplo, D3.js, Chart.js).
Instruções de Uso
Configuração dos Dispositivos IoT:

Conecte os sensores de temperatura, umidade e qualidade do ar aos dispositivos IoT.
Programe os dispositivos IoT para coletar dados dos sensores e enviá-los para o servidor back-end.
Configuração do Back-end:

Configure um servidor web para receber os dados dos dispositivos IoT.
Crie um banco de dados para armazenar os dados coletados.
Implemente as APIs necessárias para acessar os dados e controlar os dispositivos.
Desenvolvimento do Front-end:

Desenvolva o aplicativo web front-end para exibir os dados em tempo real.
Integre gráficos e tabelas para apresentar as informações para o usuário.


Requisitos e Dependências
Banco de dados
Sensores de temperatura, umidade e qualidade do ar
Placas de desenvolvimento IoT compatíveis