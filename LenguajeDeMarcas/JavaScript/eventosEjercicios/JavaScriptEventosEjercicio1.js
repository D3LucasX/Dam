function comprobarLetra
function seleccionarPalabra(){
    let palabras = ["Perro", "Gato", "Elefante", "Rinoceronte", "Hipopotamo", "Tigre", "León", "Cebra", "Jirafa", "Canguro"];
    let palabraAleatoria[Math.floor(Math.random() * palabras.length)]; //Math.floor redondea hacia abajo el resultado de la multiplicacion de Math.random() por la longitud del array.
    document.getElementById("palabraSeleccionada").textContent = palabraAleatoria; //Se le asigna el valor de la palabra aleatoria al elemento con id palabraSeleccionada.
}
function cuentaAtras(event){
    let cuenta = 0;
    clearInterval(cuenta);// Desvincula la variable de la funcion setInterval, para que no se ejecute mas de una vez.
    event.preventDefault(); // Evita que el formulario se envíe y la página se recargue.
    let valorTiempo = document.getElementById("tiempo").value; // .value devuelve el valor del input, y se le asigna a la variable valorrTiempo. Que es el valor que le deimos en la Hoja de HTML.
    let contador = document.getElementById("contador"); //Se le asigna el valor del id contador a la variable contador.
    cuenta = setInterval(()=>{
        if (valorTiempo > 0){
            contador.textContent = valorTiempo-- + "Segundos";
        }else{
            clearInterval(cuenta); //Cuando el valor de tiempo es 0, se limpia el intervalo.

            contador.textContent = "El tiempo ha expirado";
        }
    },1000); //setInterval ejecuta la funcion de ir restando el tiempo cada 1000 milisegundos, osea, cada segundo.
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
    botonAtras.addEventListener("click", cuentaAtras);

    /*Ejercicio 5*/
    let palabraSeleccionada = seleccionarPalabra();
    const comprobarLetra = (event) =>{
        let letra = event.target.textContent;
        let contador = 0;

        for(let char of palabraSeleccionada){
            if (char.toLowerCase() ===comprobarLetra.toLowerCase()){
            contador ++;
            }
        }
        let resultado = document.getElementById("Resultado");
        if (contador > 0){
            resultado.textContent = `La letra "${letra}" aparece ${contador} vez/veces.`;
        }

}
window.addEventListener("DOMContentLoaded", load, false);