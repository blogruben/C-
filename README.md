# C++
64

En este repositorio tenemos diferentes ejercicios de introducción al lenguaje C++.

# Historia
C++ nacio en 1979 para extender al lenguaje de programación C, el cual esta en desuso actualmente.
C++ es un lenguaje hibrido (es decir permite la programacion estructurada y orienda a objetos)
C++ destaca por su velocidad, es superior a C#.

# Requisitos
Este código se hay hecho con VSCode y las extensiones `C/C++` y `C/C++ Extension Pack`
Para ejecutarlo necesitamos tener el compilador `g++ --version`

## Instalar compilador C++ en Windows
Para instalarlo usamos el package manager MSYS2 https://www.msys2.org/

1. Descargar instalador `msys2-x86_64-20221216.exe` de https://www.msys2.org/
2. Lo instalamos, por ejemplo en la ruta C:/CPP/msys64, las demás opciones las dejamos por defecto
3. Abrir la terminal MSYS2 en C:/CPP/msys64/msys2.exe
4. Instalamos cpp en la Terminal MSYS2 Ejecutamos
```
#actualizar paquetes
pacman -Syu

#instalar toolchain para compilar
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
#aceptar por defecto para instalarlo todo
```
5. Añadimos al path a Windows
Para Windows 10, Pulsamos `Win`+`R` y ejecutamos `rundll32.exe sysdm.cpl,EditEnvironmentVariables` 
Si no funciona buscar el ventana de "Editar las variables de entorno del sistema" y en variables del sistema
añadimos a la variable Path, la ruta de los binarios  `C:/CPP/msys64/mingw64/bin`

6. Comprobamos la instalación del compilador
```cmd
cd C:/CPP/msys64/mingw64/bin
gcc --version
g++ --version
gdb --version
```

## Instalar compilador C++ en Ubuntu
1. Instalar
```
$ sudo apt-get update
$ sudo apt-get install build-essential manpages-dev
```
2. COmprobar
```
$ whereis gcc
$ which gcc
$ gcc --version
```


## Ejemplo de compilar en C++ 
1. Crear carpeta CPP_PROYECTO
2. Arrastramos carpeta a VSCode
3. Anadimos el archivo
```holaMundo.cpp
#include <stdio.h>
int main() {
    printf("Hola Mundo!\n");
    return 0;
}
```
Compilamos y ejecutamos
```
#En cmd
g++ -o hello.exe holaMundo.cpp  
hello.exe
> Hola Mundo!

#PS
g++ -o hello.exe holaMundo.cpp  
./hello.exe
> Hola Mundo!
```