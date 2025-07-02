# CPP01 - Memory allocation, pointers to members, references, switch statement

Este módulo se centra en el manejo de memoria, punteros a miembros, referencias y la declaración switch en C++.

## 📚 Conceptos Generales de C++ Utilizados

- **Gestión de memoria dinámica** (`new` / `delete`, `new[]` / `delete[]`)
- **Referencias y punteros**
- **Forma canónica ortodoxa** (Orthodox Canonical Form)
- **Punteros a funciones miembro**
- **Switch statement con fall-through**
- **Manipulación de archivos** (`std::ifstream`, `std::ofstream`)
- **Strings y manipulación de texto**

---

## 🧟 EX00 - BraiiiiiiinnnzzzZ

### Descripción
Implementación de una clase `Zombie` con gestión de memoria dinámica usando `new` y `delete`.

### Conceptos de C++ Utilizados
- **Constructores** (por defecto y con parámetros)
- **Destructor**
- **Constructor de copia**
- **Sobrecarga del operador de asignación**
- **Gestión de memoria dinámica** (`new` / `delete`)
- **Punteros vs objetos en stack**
- **Diferencia entre heap y stack allocation**

### Funciones Principales
- `newZombie()`: Crea un zombie en el heap usando `new`
- `randomChump()`: Crea un zombie en el stack (local)

### Aprendizaje Clave
Entender cuándo usar memoria dinámica vs estática y la importancia de liberar memoria correctamente.

---

## 🧟‍♀️ EX01 - Moar brainz!

### Descripción
Creación de una horda de zombies usando arrays dinámicos.

### Conceptos de C++ Utilizados
- **Arrays dinámicos** (`new[]` / `delete[]`)
- **Constructores por defecto en arrays**
- **Inicialización de objetos en arrays**
- **Gestión de memoria para múltiples objetos**
- **Función `setName()` para modificar objetos después de la creación**

### Función Principal
- `zombieHorde()`: Crea un array dinámico de N zombies

### Aprendizaje Clave
Diferencia entre `new`/`delete` y `new[]`/`delete[]` para objetos individuales vs arrays.

---

## 🧠 EX02 - HI THIS IS BRAIN

### Descripción
Demostración práctica de la diferencia entre punteros y referencias.

### Conceptos de C++ Utilizados
- **Referencias** (`&`)
- **Punteros** (`*`)
- **Direcciones de memoria**
- **Diferencias sintácticas entre punteros y referencias**
- **Alias de variables**

### Aprendizaje Clave
- Las referencias son alias de variables existentes
- Los punteros almacenan direcciones de memoria
- Tanto punteros como referencias apuntan a la misma dirección

---

## ⚔️ EX03 - Unnecessary violence

### Descripción
Implementación de clases `HumanA`, `HumanB` y `Weapon` mostrando diferentes formas de asociación.

### Conceptos de C++ Utilizados
- **Referencias como miembros de clase**
- **Punteros como miembros de clase**
- **Inicialización en lista de constructores**
- **Asociación vs composición**
- **Referencias constantes** (`const std::string&`)
- **Diferencias entre referencias y punteros en clases**

### Clases Principales
- `Weapon`: Maneja el tipo de arma
- `HumanA`: Siempre tiene un arma (referencia)
- `HumanB`: Puede o no tener un arma (puntero)

### Aprendizaje Clave
- **HumanA** usa referencias porque siempre debe tener un arma
- **HumanB** usa punteros porque puede no tener arma (nullptr)

---

## 📝 EX04 - Sed is for losers

### Descripción
Recreación del comando `sed` para reemplazar texto en archivos.

### Conceptos de C++ Utilizados
- **Manipulación de archivos** (`std::ifstream`, `std::ofstream`)
- **Manipulación de strings** (`std::string::find()`, `std::string::length()`)
- **Lectura línea por línea** (`std::getline()`)
- **Manejo de errores en archivos** (`is_open()`, `fail()`)
- **Algoritmos de búsqueda y reemplazo**
- **Gestión de recursos** (apertura/cierre de archivos)

### Función Principal
- `findReplaceWrite()`: Busca y reemplaza todas las ocurrencias de una cadena

### Aprendizaje Clave
Manipulación segura de archivos y algoritmos de procesamiento de texto.

---

## 🗣️ EX05 - Harl 2.0

### Descripción
Implementación de un sistema de logging usando punteros a funciones miembro.

### Conceptos de C++ Utilizados
- **Punteros a funciones miembro** (`void (Harl::*)(void)`)
- **Arrays de punteros a funciones**
- **Sintaxis de llamada a función a través de puntero** (`(this->*ptr)()`)
- **Encapsulación** (métodos privados)
- **Entrada interactiva** (`std::getline()`, manejo de EOF)

### Métodos de Logging
- `_debug()`: Información de depuración
- `_info()`: Información general
- `_warning()`: Advertencias
- `_error()`: Errores críticos

### Aprendizaje Clave
Uso avanzado de punteros a funciones miembro para crear sistemas flexibles.

---

## 🔧 EX06 - HarlFilter

### Descripción
Filtro de mensajes de Harl usando switch statement con fall-through.

### Conceptos de C++ Utilizados
- **Switch statement** con fall-through intencional
- **Argumentos de línea de comandos** (`argc`, `argv`)
- **Validación de entrada**
- **Control de flujo avanzado**
- **Comportamiento de cascada** (sin `break` statements)

### Comportamiento del Filtro
- **DEBUG**: Muestra DEBUG → INFO → WARNING → ERROR
- **INFO**: Muestra INFO → WARNING → ERROR  
- **WARNING**: Muestra WARNING → ERROR
- **ERROR**: Muestra solo ERROR
- **Otros**: Mensaje por defecto

### Aprendizaje Clave
Uso estratégico del fall-through en switch para crear comportamiento de cascada.

---

## 🛠️ Compilación

Cada ejercicio incluye un Makefile con:
- **Flags de compilación**: `-Wall -Wextra -Werror -std=c++98`
- **Reglas estándar**: `all`, `clean`, `fclean`, `re`
- **Compilación automática** con dependencias

### Comandos de Compilación
```bash
# Compilar un ejercicio específico
cd ex00 && make

# Limpiar archivos objeto
make clean

# Limpiar todo (objetos + ejecutable)
make fclean

# Recompilar desde cero
make re
```

---

## 🎯 Objetivos de Aprendizaje Alcanzados

1. **Gestión de memoria**: Uso correcto de `new`/`delete` y `new[]`/`delete[]`
2. **Referencias vs Punteros**: Comprensión de cuándo usar cada uno
3. **Punteros a funciones miembro**: Técnica avanzada de C++
4. **Manipulación de archivos**: Lectura/escritura segura
5. **Switch statement**: Uso del fall-through para comportamiento específico
6. **Forma canónica**: Implementación correcta de constructores y operadores

---

## 📋 Criterios de Evaluación 42

- ✅ **Compilación**: Sin errores ni warnings
- ✅ **Norma**: Respeto al coding standard de 42
- ✅ **Funcionalidad**: Comportamiento conforme al subject
- ✅ **Gestión de memoria**: Sin memory leaks
- ✅ **Forma canónica**: Implementada donde sea necesario
- ✅ **Casos extremos**: Manejo correcto de errores

---

## 👨‍💻 Autor

Iker Portillo

*Módulo CPP01 - Fundamentos avanzados de C++*
