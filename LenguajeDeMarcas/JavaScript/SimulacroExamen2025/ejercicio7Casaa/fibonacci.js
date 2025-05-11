let intervalo;

function volverFibo(a,b,fibo, botonStart, botonStop){
    
}

function main(){
    let a = 0;
    let b = 1;
    let botonStart = document.getElementById("comenzar");
    botonStart.addEventListener("click", function(){

         if (intervalo) {
            return; // Si ya hay un intervalo, no hace nada
        }

        intervalo = setInterval(function(){
            let fibo = a +b;
            a = b;
            b = fibo;
            let resultado = document.getElementById("resultado");
            resultado.textContent = fibo;
            console.log(fibo);
        },750);
        let botonStop = document.getElementById("detener");
        botonStop.addEventListener("click", function(){
            clearInterval(intervalo);
            intervalo = null; // Reinicia el intervalo, sin esto no se puede volver a iniciar
            let resultado = document.getElementById("resultado");
            resultado.textContent = "0"; // Reinicia el resultado a 0
            a = 0; // Reinicia a y b
            b = 1;
        });
    });
}
window.addEventListener("DOMContentLoaded", main);