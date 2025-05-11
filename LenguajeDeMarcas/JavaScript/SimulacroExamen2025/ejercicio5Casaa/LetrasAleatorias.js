// Creamos variables gloibales para que se puedan usar en todo el codigo y su valor se mantenga
let numero = 0;
let contador = 0;
let letraBuena = "";
let matriz = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]
];

// Funcion random para generar un número del 1 al número que le pasemos como parámetro
function random(number) {
    return Math.floor(Math.random() * (number + 1));
}

// Genera una letra aleatroria entre a y z
function generarLetra() {
    const letras = "abcdefghijklmnopqrstuvwxyz";
    let indice = random(letras.length - 1); // índice entre 0 y 25
    return letras[indice];
}

// Utilizando la funcion anterior, generamos una letra y comprobamos que este en la matriz.
function generarLetraQueEsteEnMatriz() {
    let letra;
    let encontrada = false;

    while (!encontrada) {
        letra = generarLetra();
        for (let i = 0; i < 3; i++) {
            for (let j = 0; j < 3; j++) {
                if (matriz[i][j] === letra) {
                    encontrada = true;
                    break;
                }
            }
        }
    }

    return letra;
}

// Rellenamos la matriz con letras aleatorias y mostrandolas en los botones.
function llenarTabla() {
    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < 3; j++) {
            matriz[i][j] = generarLetra();
            let boton = document.querySelector(`button[value="${i}${j}"]`);
            boton.textContent = matriz[i][j];
        }
    }
}

// Funcion para que cuando aciertes los botones que se reinicie todo y puedas volver a jugar.
function reiniciarJuego(event){
    llenarTabla();
    numero = random(5) + 1; //número entre 1 y 6
    letraBuena = generarLetraQueEsteEnMatriz();
    document.getElementById("letraBuscada").textContent = `${letraBuena}`;
    document.getElementById("cumeroClicks").textContent = `${numero}`;
    contador = 0; //Reinicia el contador
    let botones = document.querySelectorAll(".botonTabla");
    botones.forEach(boton => {
        boton.style.backgroundColor = "";
    });
}

// Funcion que maneja el evento click de los botones para que si aciertas se ponga verde y vuelvas a jugar y si no aciertas el boton se ponga rojo.
function manejarClick(event) {
    let i = event.target.value[0];
    let j = event.target.value[1];

    if (matriz[i][j] === letraBuena) {
        event.target.style.backgroundColor = "green";
        contador++;
    } else {
        event.target.style.backgroundColor = "red";
        alert("Te has equivocado");
    }


    if (contador === numero) {
        alert("¡Muy bien! Has encontrado todas.");
        reiniciarJuego(event); // Reinicia el juego
        // Aquí podrías reiniciar el juego si quieres
    }
}

//Funcion principal que se ejecuta al cargar la página
function main() {
    llenarTabla();                                                         //1. LLena la tabla
    numero = random(5) + 1;                                                // 2. número entre 1 y 6
    letraBuena = generarLetraQueEsteEnMatriz();                            // 3. Genera una letra que esté en la matriz
    console.log("Letra que debes encontrar:", letraBuena);                 // 4. Muestra la letra en la consola
    console.log("Número de veces a encontrar:", numero);                   // 5. Muestra el número en la consola
    document.getElementById("letraBuscada").textContent = `${letraBuena}`; // 6. Muestra la letra en el HTML
    document.getElementById("cumeroClicks").textContent = `${numero}`;     // 7. Muestra el número en el HTML

    let botones = document.querySelectorAll(".botonTabla");                // 8. Selecciona todos los botones de la tabla
    botones.forEach(boton => {                                             // 9. Recorre todos los botones
        boton.addEventListener("click", manejarClick);                     // 10. Añade el evento click a cada botón
    });
}

window.addEventListener("DOMContentLoaded", main);

