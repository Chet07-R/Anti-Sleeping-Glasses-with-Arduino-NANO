# 🕶️ Anti-Sleep Glasses – Drowsiness Detection System

This Arduino-based project is designed to help prevent accidents caused by drowsy driving. Using an infrared (IR) sensor, the system detects if the user's eyes remain closed for more than a set duration. If so, it triggers a buzzer alert and cuts power to a motor (simulating vehicle stop).

## 🚀 Features

- Eye-closure detection using an IR sensor
- Alerts the user with a buzzer after 3 seconds of continuous eye closure
- Cuts power to a motor (via relay) to simulate engine shutdown
- Real-time monitoring with reset upon eye reopening
- Built using Arduino Nano and basic electronic components

## 🧰 Components Used

- Arduino Nano (or Uno)
- IR Sensor module
- Piezoelectric Buzzer
- Relay Module
- DC Motor (or simulation)
- Jumper wires and breadboard
- Power supply (5V)

## 📝 Circuit Connections

| Component     | Arduino Pin |
|---------------|-------------|
| IR Sensor OUT | D2          |
| Relay IN      | D8          |
| Buzzer        | D9 (PWM)    |
| VCC           | 5V          |
| GND           | GND         |

## 🧠 Working Principle

- The IR sensor continuously checks if the eyes are open or closed.
- If eyes are closed (`sensorValue == LOW`), a timer starts.
- After 3 seconds, a buzzer is activated and the motor is shut off via the relay.
- If the eyes open again, the system resets and resumes normal operation.

## 🧪 Result

The system works reliably in real-time scenarios:
- Successfully detects eye closure duration
- Accurately triggers alerts
- Works well under proper lighting and sensor alignment

## 📸 Prototype Image

> *(Add image of your hardware setup here)*

## 📌 Applications

- Driver fatigue detection systems
- Night shift worker monitoring
- Heavy machinery safety enhancement
- Medical use for sleep disorder tracking

## 📈 Future Scope

- Add Bluetooth module for mobile alerts
- Use ML/AI for better eye tracking
- Add OLED display for system feedback

## 🧑‍💻 Author

**Chetan**  
B.Tech CSE (Core)  
Chitkara University, Punjab

---

### 📂 License

This project is open-source under the [MIT License](LICENSE).

