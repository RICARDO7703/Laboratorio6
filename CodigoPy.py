import RPi.GPIO as GPIO
import time

# Definición de constantes para los pines GPIO
pinBoton1 = 2
pinBoton2 = 3
pinBoton3 = 4
pinLed1_1 = 10
pinLed1_2 = 9
pinLed2_1 = 8
pinLed2_2 = 7
pinLed3_1 = 6
pinLed3_2 = 5

# Configuración de la biblioteca GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(pinBoton1, GPIO.IN)
GPIO.setup(pinBoton2, GPIO.IN)
GPIO.setup(pinBoton3, GPIO.IN)
GPIO.setup(pinLed1_1, GPIO.OUT)
GPIO.setup(pinLed1_2, GPIO.OUT)
GPIO.setup(pinLed2_1, GPIO.OUT)
GPIO.setup(pinLed2_2, GPIO.OUT)
GPIO.setup(pinLed3_1, GPIO.OUT)
GPIO.setup(pinLed3_2, GPIO.OUT)

# Función para controlar los LEDs en función del estado del botón
def controlar_leds(estadoBoton, pinLed1, pinLed2):
    if estadoBoton == GPIO.HIGH:
        GPIO.output(pinLed1, GPIO.HIGH)
        GPIO.output(pinLed2, GPIO.HIGH)
    else:
        GPIO.output(pinLed1, GPIO.LOW)
        GPIO.output(pinLed2, GPIO.LOW)

# Bucle principal
try:
    while True:
        # Lee el estado de los botones
        estadoBoton1 = GPIO.input(pinBoton1)
        estadoBoton2 = GPIO.input(pinBoton2)
        estadoBoton3 = GPIO.input(pinBoton3)

        # Reacciona al estado de los botones
        controlar_leds(estadoBoton1, pinLed1_1, pinLed1_2)
        controlar_leds(estadoBoton2, pinLed2_1, pinLed2_2)
        controlar_leds(estadoBoton3, pinLed3_1, pinLed3_2)

        # Pequeño retraso para evitar rebotes de los botones
        time.sleep(0.1)

except KeyboardInterrupt:
    # Limpiar configuración GPIO antes de salir
    GPIO.cleanup()
