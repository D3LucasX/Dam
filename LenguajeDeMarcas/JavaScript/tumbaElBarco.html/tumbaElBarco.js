function random(numero){
    return Math.floor(Math.random()*(numero+1));
}
function comprobarCasilla(event, tableroJ2){
    let boton = event.currentTarget; // Asegura que siempre se refiere al botón que tiene el evento
    let value = boton.value; // Obtiene el value del botón

    let fila = parseInt(value.match(/^\d+/)[0]); // Extrae los números iniciales (fila)
    let columna = value[1]; // Obtiene la letra que representa la columna
    console.log("Fila (i):", i);
    console.log("Columna (j):", j);
    if (tableroJ2[i][j] === 1){
        document.getElementById(value).textContent = tableroJ2[i][j]; 
        document.getElementById(value).style.backgroundColor = "green"; // Si el número es correcto, cambia el color de fondo del botón a verde
    }else{
        alert("No acertaste, vuelve a intentarlo"); //Si el numero no es correcto, muestra un mensaje de error
        console.log("Valor de la tableroJ2:" + tableroJ2[i][j]); //Muestra el valor de la matriz en la consola para saber que valor tiene cada posicion

        document.getElementById(event.target.value).style.backgroundColor = "red"; //Si el numero no es correcto, cambia el color de fondo del boton a rojo
        event.target.disabled = true; //Desactiva el boton para que no se pueda volver a pulsar
    }
}

function alojarBarcos4() {
    let tableroJ1 = crearTableroVacio(10, 10); // Tablero de 10x10
    let tableroJ2 = crearTableroVacio(10, 10);

    colocarBarco(tableroJ1, 4); // Coloca un barco de 4 casillas en el tablero del jugador 1
    colocarBarco(tableroJ2, 4); // Coloca un barco de 4 casillas en el tablero del jugador 2

    for (let i = 0; i < 2; i++) {
        colocarBarco(tableroJ1, 3);
        colocarBarco(tableroJ2, 3);
    }
    for (let i = 0; i < 3; i++) {
        colocarBarco(tableroJ1, 2);
        colocarBarco(tableroJ2, 2);
    }
    for (let i = 0; i < 4; i++) {
        colocarBarco(tableroJ1, 1);
        colocarBarco(tableroJ2, 1);
    }
    // Mostrar tableros en la consola para verificar la colocación de barcos


    console.log("Tablero Jugador 1:", tableroJ1);
    console.log("Tablero Jugador 2:", tableroJ2);
}


function crearTableroVacio(filas, columnas) {
    let tablero = new Array(filas);
    for (let i = 0; i < filas; i++) {
        tablero[i] = new Array(columnas).fill(0); // Llena el tablero con ceros (0 = agua)
    }
    return tablero;
}

function colocarBarco(tablero, tamañoBarco) {
    let colocado = false;

    while (!colocado) {
        let orientacion = random(1); // 0 = horizontal, 1 = vertical
        let fila = random(9); // Filas del 0 al 9
        let columna = random(9); // Columnas del 0 al 9

        if (orientacion === 0) {
            // Horizontal
            if (columna + tamañoBarco <= 10 && verificarEspacio(tablero, fila, columna, tamañoBarco, orientacion)) {
                for (let i = 0; i < tamañoBarco; i++) {
                    tablero[fila][columna + i] = 1; // Marca las casillas del barco con 1
                }
                colocado = true;
            }
        } else {
            // Vertical
            if (fila + tamañoBarco <= 10 && verificarEspacio(tablero, fila, columna, tamañoBarco, orientacion)) {
                for (let i = 0; i < tamañoBarco; i++) {
                    tablero[fila + i][columna] = 1; // Marca las casillas del barco con 1
                }
                colocado = true;
            }
        }
    }
}

function verificarEspacio(tablero, fila, columna, tamañoBarco, orientacion) {
    for (let i = 0; i < tamañoBarco; i++) {
        if (orientacion === 0) {
            // Horizontal
            if (tablero[fila][columna + i] !== 0) {
                return false; // Espacio ocupado
            }
        } else {
            // Vertical
            if (tablero[fila + i][columna] !== 0) {
                return false; // Espacio ocupado
            }
        }
    }
    return true; // Espacio libre
}

function principal() {
    alojarBarcos4();
    comprobarCasilla();
    let botones = document.querySelectorAll(".boton"); // Selecciona todos los botones con la clase "boton"
    botones.forEach(boton => {
        boton.addEventListener("click", comprobarCasilla, false); // Añade el evento click a cada botón
    });
}
window.addEventListener("DOMContentLoaded", principal, false);