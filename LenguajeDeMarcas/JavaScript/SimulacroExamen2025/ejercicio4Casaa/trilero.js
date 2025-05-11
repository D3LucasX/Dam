function random(numero){
    return Math.floor(Math.random() * (numero +1));
}

function elegirCasilla(){
    let correcto = random(2);
    let idCorrecto = `0${correcto}`;
    return idCorrecto;
}

function resetearBotones() {
    // Resetea los botones de la tabla para permitir otro intento
    let botones = document.querySelectorAll("#trileroTable button");
    botones.forEach(boton => {
        boton.style.backgroundColor = ""; // Limpia el color de fondo
        boton.innerText = "x"; // Restaura el texto del botón
    });
}

let contadorAciertos = 0;
let contadorFallos = 0;

function main(){
 
    let idCorrecto = elegirCasilla(); // Genera un número aleatorio entre 0 y 3
    console.log(idCorrecto); // Muestra el número correcto en la consola para depuración
    
    let botones = document.querySelectorAll("#trileroTable button");
    botones.forEach(boton =>{
        boton.addEventListener("click", function(){
            if (this.id === idCorrecto){
                this.style.backgroundColor = "green";
                this.textContent = '¡Acertaste!';
                contadorAciertos++;                
                botones.forEach(b => b.disabled = true);
                if (contadorAciertos === 10){
                    alert("¡Has ganado!");
                    resetearBotones(); // Resetea los botones para jugar otra vez
                    contadorAciertos = 0; // Reinicia el contador de aciertos
                    contadorFallos = 0; // Reinicia el contador de fallos
                }
                  // Reseteamos los botones después de 1.5 segundos para permitir otra ronda
                  setTimeout(() => {
                    resetearBotones(); // Resetea los botones para jugar otra vez
                    idCorrecto = elegirCasilla();
                    console.log(idCorrecto); // Muestra el nuevo número correcto en la consola
                    botones.forEach(b => b.disabled = false); // Habilita los botones de nuevo
                }, 1500); // Espera 1.5 segundos para permitir ver el mensaje
            }else{
                this.style.backgroundColor = "red";
                contadorFallos++;
                if(contadorFallos === 10){
                    alert("¡Has perdido!");
                    resetearBotones(); // Resetea los botones para jugar otra vez
                    contadorAciertos = 0; // Reinicia el contador de aciertos
                    contadorFallos = 0; // Reinicia el contador de fallos
                }
            }
            document.getElementById("aciertos").textContent = `${contadorAciertos}`;
            document.getElementById("fallos").textContent = `${contadorFallos}`;
        });
    });
}
window.addEventListener("DOMContentLoaded", main, false);