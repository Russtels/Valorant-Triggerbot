## ⚠️ ADVERTENCIA MUY IMPORTANTE

> **El uso de CUALQUIER tipo de software que automatice acciones en el juego es una violación directa de los Términos de Servicio de Valorant y de la política anti-trampas de Riot Vanguard. La detección de este programa resultará en una SUSPENSIÓN PERMANENTE e inapelable de tu cuenta. Este proyecto fue desarrollado con fines puramente educativos para explorar la programación a bajo nivel. NO LO USES .**

# 👾 Triggerbot para Valorant en Ensamblador (x86/x64)

![Assembly](https://img.shields.io/badge/Language-Assembly%20(MASM)-752F8A?style=for-the-badge&logo=c)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows)

Un triggerbot para Valorant escrito en puro lenguaje ensamblador (MASM), diseñado para ofrecer el **máximo rendimiento posible** y una **huella de memoria casi inexistente**. Este proyecto es un ejercicio de programación a bajo nivel que interactúa directamente con la API de Windows para lograr su objetivo sin dependencias ni librerías externas.

*(Aquí puedes insertar un GIF demostrando el programa en acción)*

---

## ✨ Características Clave

* **Puro Ensamblador**: Sin dependencias, sin runtimes, sin frameworks. Solo código máquina que se ejecuta directamente sobre el procesador.
* **Rendimiento Extremo**: El uso de CPU es prácticamente nulo, garantizando cero impacto en los FPS del juego.
* **Huella Mínima**: El archivo ejecutable resultante es increíblemente pequeño (del orden de pocos kilobytes).
* **Detección Directa por API**: Utiliza llamadas directas a la WinAPI (`gdi32.dll`, `user32.dll`) para un control total y eficiente del sistema.
* **Sin Interfaz Gráfica**: La configuración se realiza directamente en el código fuente antes del ensamblaje, adhiriéndose a una filosofía minimalista.

## 🎮 Configuración Obligatoria en Valorant

Para que el bot funcione, es **indispensable** realizar el siguiente ajuste dentro del juego:

> **Ajustes > General > Accesibilidad > Color de Resaltado de Enemigos: Púrpura (Protanopia)**

El valor del color a detectar está hardcodeado en el código fuente para que coincida con esta configuración.

## ⚙️ Funcionamiento a Bajo Nivel

El programa opera en un bucle simple y altamente optimizado:

1.  **Bucle Principal**: El corazón del programa es un bucle infinito que se ejecuta continuamente.
2.  **Verificación de Tecla (`GetAsyncKeyState`)**: En cada iteración, se llama a la función de la API de Windows `GetAsyncKeyState` para comprobar si la tecla de activación (definida en el código) está siendo presionada.
3.  **Captura del Píxel**: Si la tecla está presionada, el programa:
    * Obtiene el "Device Context" de toda la pantalla usando `GetDC(NULL)`.
    * Obtiene la posición actual del cursor con `GetCursorPos`.
    * Llama a `GetPixel` para leer el valor de color del píxel que se encuentra exactamente debajo del cursor.
4.  **Comparación de Color**: El valor del color obtenido se compara directamente con el valor del color objetivo (púrpura) definido en el código.
5.  **Simulación de Clic (`mouse_event`)**: Si los colores coinciden, se llama a la función `mouse_event` para simular un clic del botón izquierdo del mouse (un evento de "botón abajo" seguido de un evento de "botón arriba").
6.  **Pausa Breve (`Sleep`)**: Se realiza una pequeña pausa con la función `Sleep` para evitar que el bucle consuma todos los recursos del sistema y para controlar la cadencia de disparo.

## 🔧 Configuración y Personalización

Toda la configuración se realiza modificando las constantes (`equ`) en la parte superior del archivo `.asm` antes de ensamblarlo.

* `TRIGGER_KEY`: Define la tecla virtual que activará el bot (por defecto `VK_MENU` para la tecla Alt).
* `TARGET_COLOR`: Define el valor de color en formato BGR que el programa buscará (por defecto `0xBC00BC` para el púrpura de Valorant).

## 🚀 Ensamblaje y Uso

### Requisitos
* **MASM (ml64.exe)**: El ensamblador de Microsoft, que se incluye con la instalación de Visual Studio (en las herramientas de C++).
* **Linker (link.exe)**: El enlazador de Microsoft, también incluido con Visual Studio.

### Pasos para Ensamblar
1.  **Abre una Terminal de Desarrollador**: Abre "x64 Native Tools Command Prompt for VS" desde el menú de inicio.
2.  **Navega a la Carpeta del Proyecto**:
    ```cmd
    cd ruta\a\tu\proyecto\Valorant-Triggerbot
    ```
3.  **Ensambla y Enlaza**:
    Ejecuta el siguiente comando para ensamblar el código `.asm` en un archivo objeto `.obj` y luego enlazarlo con las librerías necesarias para crear el `.exe` final.
    ```cmd
    ml64.exe tu_archivo.asm /link /SUBSYSTEM:WINDOWS /entry:start user32.lib gdi32.lib kernel32.lib
    ```
4.  **Ejecuta**:
    Se generará un archivo `.exe` en la misma carpeta. Ejecútalo mientras Valorant está abierto.

---

