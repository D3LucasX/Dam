
function random(max) {
    return Math.floor(Math.random() * (max + 1)); // Genera un número aleatorio entre 0 y max
}
function cambiarFondo(){
    let contenedor = document.getElementById("contenedorColorido"); //Se le asigna el valor del id contenedorColorido a la variable contenedor.
    contenedor.style.background= `rgb(${random(255)},${random(255)},${random(255)})`; //El rgb es una función que recibe 3 valores, el rojo, el verde y el azul, y los valores van del 0 al 255.
    //document.body.style.background='rgb('+random(255)+','+random(255)+','+random(255)+')'; //Otra forma de hacerlo, pero es mas tedioso.
}
function rellenarTabla2(){
    let celdas = document.querySelectorAll("#tablaSegunda td"); //Se le asigna el valor de todas las celdas de la tabla a la variable celdas.
    celdas.forEach((td,i) => td.textContent = i+1);

}
function rellenarTabla(){
    //console.log(document.getElementById("1"). innerHTML); //Se obtiene el valor del id 1 de la tabla con lo del innerHTML.
    let numero = 9; // numero de td que tengo en la tabla
    //let numero = document.querySelectorAll("#tablaPrimera td").length; //Se le asigna el valor de la cantidad de td que hay en la tabla a la variable numero por si no sabemos el numero de casillas que tiene la tabla.
    for (let i = 1; i <= numero; i++){ // Siempre empezara en 1, ya que el valor 0 no esta en la tabla, la primera casilla es la numero 1.
    document.getElementById(`${i}`). textContent = i; //Se le asigna el valor de i al id i de la tabla.
    }
}
function seleccionarPalabra(){
    let palabras = ["Perro", "Gato", "Elefante", "Rinoceronte", "Hipopotamo", "Tigre", "León", "Cebra", "Jirafa", "Canguro"];
    let palabraAleatoria = palabras[Math.floor(Math.random() * palabras.length)]; //Math.floor redondea hacia abajo el resultado de la multiplicacion de Math.random() por la longitud del array.
    document.getElementById("palabraSeleccionada").textContent = palabraAleatoria; //Se le asigna el valor de la palabra aleatoria al elemento con id palabraSeleccionada.
    return palabraAleatoria;
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
    
    /*Ejercicio 3*/
    document.getElementById("tabla").addEventListener("click", rellenarTabla);
    document.getElementById("tabla2").addEventListener("click", rellenarTabla2); //Se le asigna el evento click a la tablaSegunda, para que al hacer click se ejecute la funcion rellenarTabla2.
    /*Ejercicio 4*/
    let boton=document.getElementById("colorFondo"); //Se le asigna el valor del id botonFondo a la variable boton.
    boton.addEventListener("click", cambiarFondo, false);
    /*Ejercicio 5*/
    let palabraSeleccionada = seleccionarPalabra();
    const comprobarLetra = (event) =>{
        let letra = event.target.textContent;
        let contador = 0;

        // Contar cuántas veces aparece la letra en la palabra seleccionada
    for (let char of palabraSeleccionada) {
        if (char.toLowerCase() === letra.toLowerCase()) { // Comparar correctamente
            contador++;
        }
    }

    // Mostrar el resultado
    let resultado = document.getElementById("Resultado");
    if (contador > 0) {
        resultado.textContent = `La letra "${letra}" aparece ${contador} vez/veces.`;
    } else {
        resultado.textContent = `La letra "${letra}" no aparece en la palabra.`;
    }

    // Desactivar el botón para que no pueda usarse nuevamente
    event.target.disabled = true;
};
// Seleccionar todos los botones de letras y asignarles el evento "click"
let botones = document.querySelectorAll("button[id]");
botones.forEach((boton) => {
    if (boton.id.length === 1) { // Solo botones con IDs de una letra
        boton.addEventListener("click", comprobarLetra);
    }
});
}
window.addEventListener("DOMContentLoaded", load, false);