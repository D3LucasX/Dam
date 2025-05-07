function random(number){
    return Math.floor(Math.random()*(number + 1)); //La librería devuelve de del 0 al 1, sin estar el 1 incluido, asi que o multiplicamos por el numero que queramos para que nos lo devuelva, si le damos 10, pues sera del 0-9
}
function generarLetraAleatoria(){
    let letras = "abcdefghijklmnopqrstuvwxyz"; //Cadena de letras
    let letraAleatoria = letras.charAt(random(letras.length - 1)); //Genera una letra aleatoria de la cadena de letras
    return letraAleatoria; //Devuelve la letra aleatoria
}
function seleccionarCasilla(){
    let casillaAleatoria = random(3); //Genera un número aleatorio entre 0 y 8
    let Elegida = document.getElementById("casilla"); //Obtiene el elemento con el ID "casilla" + número aleatorio
    Elegida.textContent = `Coordenada: ${casillaAleatoria}`; // Actualiza el texto con el número generado
    return casillaAleatoria; //Devuelve el número aleatorio

}
/*let letra; // Variable global para la letra generada
let casilla; // Variable global para la casilla generada
let inputCasilla; // Variable global para el input correspondiente*/

function comprobarEvento(event, casilla, letra) {
    if(event.target.id ===`${casilla}`){
        if (event.target.value.toLowerCase() === letra) {
            // Si acierta, limpia el input y genera una nueva letra y casilla después de 2 segundos
            event.target.style.backgroundColor = "lightgreen";
            setTimeout(() => {
                event.target.style.backgroundColor = ""; // Restaura el color original
                event.target.value = ""; // Limpia el input
                main(); // Llama a main para reiniciar el proceso después de 2 segundos
            }, 2000); // Espera 2 segundos
        } else {
            // Si falla, muestra un mensaje de error
            event.target.style.backgroundColor = "red";
            setTimeout(() => {
                event.target.style.backgroundColor = ""; // Restaura el color original
                event.target.value = ""; // Limpia el input
            },1000);
        }
    }else{
         // Si falla, muestra un mensaje de error
         event.target.style.backgroundColor = "red";
         setTimeout(() => {
             event.target.style.backgroundColor = ""; // Restaura el color original
             event.target.value = ""; // Limpia el input
         },1000);
    }
    
}

function crearInputs(casilla, letra) {
    return function(event){
        comprobarEvento(event, casilla, letra); // Llama a la función comprobarEvento con el evento y las variables globales
    };
}

function main() {
    // Genera una nueva letra
    let letra = generarLetraAleatoria();
    let divLetra = document.getElementById("letra"); // Obtén el div con el ID "letra"
    divLetra.textContent = `Letra: ${letra}`; // Actualiza el div con la letra generada

    // Genera una nueva casilla
    let casilla = seleccionarCasilla(); // Obtén el número de la casilla seleccionada

    // Agrega el evento a todas las casillas
    let inputs = document.querySelectorAll("input"); // Selecciona todos los inputs
    inputs.forEach((input) => {
        input.addEventListener("input", crearInputs(casilla, letra)); // Asigna el evento a cada input
    });
}
window.addEventListener("DOMContentLoaded", main, false);