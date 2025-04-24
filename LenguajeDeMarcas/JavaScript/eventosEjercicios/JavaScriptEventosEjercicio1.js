function cuentaAtras(){
    let cuenta = 0;
    clearInterval(cuenta);

    let valorrTiempo = document.getElementById("tiempo").value; // .value devuelve el valor del input, y se le asigna a la variable valorrTiempo. Que es el valor que le deimos en la Hoja de HTML.
    let contador = document.getElementById("contador"); //Se le asigna el valor del id contador a la variable contador.

    let tiempo = setInterval(tiempo,1000); //setInterval ejecuta la funcion cada 1000 milisegundos, osea, cada segundo.
 }
function load(){
    /*Ejercicio 1*/
    let botonNumero=document.getElementById("numeroAleatorio");
    botonNumero.addEventListener("click", ()=>{
        let numero =Math.floor(Math.random()*100);
        console.log(numero);
        document.getElementById("mostrarNumero").textContent=numero;
        }
    );
    /*Ejercicio 2*/
    let botonAtras = document.getElementById("cuentaAtras");
    botonAtras.addEventListener("submit", cuentaAtras);
}
window.addEventListener("DOMContentLoaded", load, false);