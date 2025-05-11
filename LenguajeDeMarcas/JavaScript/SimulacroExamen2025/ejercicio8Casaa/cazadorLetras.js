let matriz = [
    [0,0,0,0,0],
    [0,0,0,0,0],
    [0,0,0,0,0],
    [0,0,0,0,0],
    [0,0,0,0,0]
];
let letraGenerada = "";
let contadorAciertos = 0;
let contadorFallos = 0;

function random(numero){
    return Math.floor(Math.random()*(numero+1));
}

function generarLetra(){
    const abecedario= "abcdefghijklmnopqrstuvwxyz"
    let indice = random(abecedario.length-1);
    return abecedario[indice];
}

function llenarTabla(){
    for (let i = 0; i < 5; i++){
        for (let j = 0; j < 5 ; j++){
            matriz[i][j] = generarLetra();
            let boton = document.querySelector(`button[value="${i}${j}"]`);
            boton.textContent = "X"; // Muestra "X" en lugar de la letra
        }
    }
    console.log(matriz);
}


function generarLetraEnMatriz(){
    let letra;
    let encontrada = false;
    while (!encontrada){
        letra = generarLetra();
        console.log("Letra generada:", letra); // Depuración
        for (let i = 0; i < 5; i++){
            for (let j = 0; j < 5 ; j++){
                if(matriz[i][j] === letra){
                    encontrada =  true;
                    break;
                }
            }
            if (encontrada) break; // Sal del bucle externo si la letra fue encontrada
        }
    }
    console.log("Letra encontrada en la matriz:", letra); // Depuración
    return letra;
}

function manejarClick(event){
    let i = event.target.value[0];
    let j = event.target.value[1];
        if(matriz[i][j] === letraGenerada){
            event.target.style.backgroundColor = "green";
            contadorAciertos++;
            document.getElementById("aciertos").textContent = `Aciertos: ${contadorAciertos}`;
            setTimeout(() => {
            reiniciarJuego(event);
            }, 1000);
        }else{
            event.target.style.backgroundColor = "red";
            event.target.disabled = true;
            contadorFallos++;
            document.getElementById("fallos").textContent = `Fallos: ${contadorFallos}`;
        }
}

function reiniciarJuego(event){
    llenarTabla();
    letraGenerada = generarLetraEnMatriz();
    document.getElementById("letraBuscada").textContent = `${letraGenerada}`;
    let botones = document.querySelectorAll("#tablaBotones button");
    botones.forEach(boton => {
        boton.style.backgroundColor = "";
        boton.disabled = false; // Habilita el botón nuevamente
    });
}

function main(){
    llenarTabla();
    letraGenerada = generarLetraEnMatriz();
    document.getElementById("letraBuscada").textContent = `${letraGenerada}`;
    let botones = document.querySelectorAll("#tablaBotones button");
    botones.forEach(boton => {
        boton.addEventListener("click", manejarClick);
    });
    
}
window.addEventListener("DOMContentLoaded", main, false);