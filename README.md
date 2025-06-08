# Valorant Triggerbot
Un triggerbot simple y configurable para Valorant, desarrollado en Python. Este script dispara automáticamente cuando tu mira detecta el contorno de un enemigo.

Reemplaza el enlace de arriba con un GIF de tu programa.

# ✨ Características
Detección por Color: Utiliza la detección de color del contorno de los enemigos en Valorant.

Configurable: Permite ajustar la tecla de activación (trigger key), la tolerancia de color y el área de detección a través de una interfaz gráfica.

Interfaz Gráfica (GUI): Interfaz simple creada con PyQt5 para facilitar la configuración.

Ligero: Bajo consumo de recursos para no impactar el rendimiento del juego.

⚙️ ¿Cómo Funciona?
El script monitorea constantemente un área pequeña de píxeles alrededor del centro de la pantalla (donde se encuentra tu mira). Cuando detecta el color específico del contorno de los enemigos (configurable, por defecto es magenta/púrpura), simula un clic del mouse para disparar.

La tecla de activación (por defecto alt) debe mantenerse presionada para que el triggerbot esté activo.

📋 Requisitos
Python 3.x

Windows 10 / 11

Configurar el color del contorno de los enemigos en Valorant a Púrpura (Protanopia).

🚀 Instalación y Uso
1. Clona el Repositorio:

git clone https://github.com/Russtels/Valorant-Triggerbot.git
cd Valorant-Triggerbot

2. Instala las Dependencias:
Abre una terminal en la carpeta del proyecto y ejecuta:

pip install -r requirements.txt

Esto instalará las librerías necesarias: keyboard, mouse, Pillow y PyQt5.

3. Ejecuta el Script:

python main.py

4. Configura y Juega:

Se abrirá una ventana de configuración.

Ajusta la tecla de activación y la tolerancia de color si es necesario.

Haz clic en "Start".

Abre Valorant y mantén presionada la tecla de activación para que el triggerbot funcione.

🔧 Configuración
Trigger Key: La tecla que debes mantener presionada para activar la detección.

Color Tolerance: Un valor que define qué tan similar debe ser el color detectado al color objetivo. Un valor más alto puede ayudar en diferentes condiciones de iluminación, pero también puede causar falsos positivos.

Center Box (X, Y): Define el tamaño del área de detección alrededor de tu mira (en píxeles).

⚠️ Advertencia Importante
El uso de este tipo de software va en contra de los Términos de Servicio de Valorant y de Riot Games. Su uso puede resultar en una suspensión permanente de tu cuenta. Utilízalo bajo tu propio riesgo. Este proyecto fue creado con fines puramente educativos.

📄 Licencia
Este proyecto está bajo la Licencia MIT. Consulta el archivo LICENSE para más detalles.
