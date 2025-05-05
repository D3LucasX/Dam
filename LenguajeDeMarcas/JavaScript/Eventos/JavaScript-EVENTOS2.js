let numeroAdivinar = 0;
let veces = 0; // Contador de veces en la que aparece el numero a adivinar en la matriz.
let matriz = [[0,0,0],[0,0,0],[0,0,0]]; //Matriz de 3x3
let intentos  = 3; //Contador de intentos, empieza en 3, y se va restando cada vez que se pulsa un boton.
function random(numero){
    return Math.floor(Math.random()*(numero+1));
}
function generarNumeroAdivinar(){
    numeroAdivinar = random(9); 
    document.getElementById("numeroAdivinar").textContent = numeroAdivinar; //Muestra el numero a adivinar en la etiqueta con id "numeroAdivinar"
    //Muestra el contador de veces en la etiqueta con id "veces"
}
function rellenarVeces(){
    document.getElementById("veces").textContent = veces;
}
function visualizarMatriz(){
    for (let i = 0;i < 3;i++){
        for (let j = 0;j < 3;j++){
            console.log(matriz[i][j]); //Muestra la matriz en la consola para saber que valor tiene cada posicion
        }
    }
}
function rellenarMatriz(){
    for (let i = 0;i < 3;i++){
        for (let j = 0;j < 3;j++){
            matriz[i][j] = random(9); //Rellena la matriz con numeros aleatorios del 0 al 9
            if (matriz[i][j] === numeroAdivinar){ //Si el numero de la matriz es igual al numero a adivinar, suma 1 al contador de veces.
                veces++;
            }
            //console.log(matriz[i][j]); //Muestra la matriz en la consola para saber que valor tiene cada posicion
        }
    }
    if (veces === 0){ //Si el numero a adivinar no aparece en la matriz, vuelve a rellenar la matriz.
        console.log("No sale el numero a adivinar, vuelve a rellenar la matriz");
        let a= random(2); //Genera un numero aleatorio del 0 al 2, para rellenar la matriz con el numero a adivinar.
        let b= random(2); //Genera un numero aleatorio del 0 al 2, para rellenar la matriz con el numero a adivinar.
        matriz[a][b] = numeroAdivinar; //Rellena una posicion aleatoria de la matriz con el numero a adivinar.
        console.log(`El numero a adivinar es: ${matriz[a][b]} y se encuentra en la posicion [${a}][${b}]`); //Muestra en la consola la posicion del numero a adivinar.
        veces = 1;
    }
    visualizarMatriz();
}
function comprobarNumero(event){
    let i = event.target.value[0];
    let j = event.target.value[1]; //El valor del boton es el indice de la matriz, por ejemplo, el boton 00 es la posicion [0][0] de la matriz.

    if (matriz[i][j] === numeroAdivinar){
        document.getElementById(event.target.value).textContent = matriz[i][j]; 
        document.getElementById(event.target.value).style.backgroundColor = "green"; //Si el numero es correcto, cambia el color de fondo del boton a verde
    }else{
        alert("No acertaste, vuelve a intentarlo"); //Si el numero no es correcto, muestra un mensaje de error
        console.log("Valor de la matriz:" + matriz[i][j]); //Muestra el valor de la matriz en la consola para saber que valor tiene cada posicion

        document.getElementById(event.target.value).style.backgroundColor = "red"; //Si el numero no es correcto, cambia el color de fondo del boton a rojo
        event.target.disabled = true; //Desactiva el boton para que no se pueda volver a pulsar
    }
    document.getElementById("intentos").textContent = --intentos; //Resta 1 al contador de intentos y lo muestra en la etiqueta con id "intentos"
    if(intentos == 0){
        alert("Se acabaron los intentos, vuelve a empezar"); //Si se acaban los intentos, muestra un mensaje de error
        document.querySelectorAll(".boton").forEach(boton => boton.disabled = true); // Desactiva todos los botones
    }
}
function principal(){
    generarNumeroAdivinar();
    rellenarMatriz();
    rellenarVeces();
    let botonesNumeros = document.querySelectorAll(".boton"); //Devuelve todos los elementos que tengan la clase boton, y los guarda en un array.
    botonesNumeros.forEach(boton => boton.addEventListener("click", comprobarNumero)); //Recorre el array de botones y le asigna el evento click a cada boton, y llama a la funcion comprobarNumero.
}

window.addEventListener("DOMContentLoaded", principal, false);
