// El índice es el número de cuadrados de cada barco
let barcos = [4,3,2,1];
// Tablerto del usuario => matriz que guarda los barcos = m
let tableroUsuario =[
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u'],
    ['u','u','u','u','u','u','u','u','u','u']
];
let barcoActual = []; // Coordenadas del barco que se está colocando
let tamañoBarcoActual = []; 
let tamaño = 0;

function seleccionarTamaño(){
    tamaño = parseInt(prompt("Selecciona el tamaño del barco: 4, 3, 2 o 1"));
    switch(tamaño){
        case 4:
            return tamaño;
        case 3:
            return tamaño;
        case 2:
            return tamaño;
        case 1:
            return tamaño;
        default:
            alert("Tamaño no válido");
            return seleccionarTamaño();
    }
}

function iniciarColocacionBarco(tamaño) {
    barcoActual = []; // Reinicia las coordenadas del barco actual
    tamañoBarcoActual = tamaño; // Establece el tamaño del barco actual
    alert(`Coloca un barco de ${tamaño} casillas.`);
}

function esContigua(i,j){
    if(barcoActual.length === 0){
        return true;
    }

    // Obtén las coordenadas de la última celda seleccionada
    const [lastI, lastJ] = barcoActual[barcoActual.length - 1];
    if(
        (i ===lastI && (j === lastJ +1 || j === lastJ -1))||
        (j === lastJ && (i === lastI +1 || i === lastI -1))||
        ((i === lastI +1 || i === lastI -1) && (j === lastJ +1 || j === lastJ -1))
    ){
        return true;
    }else{
        return false;
    }
}

function guardarBarco(event){
    // con i [2] diferenciamos la matriz del jugador o de la máquina
    let i = parseInt(event.target.name.substring(1,2));
    let j = parseInt(event.target.name.substring(2,3)); 
    if(tableroUsuario[i][j] === 'B'){
        alert("Ya hay un barco en esa posicion");
        return;
    }

    // Verifica si el barco actual tiene el tamaño correcto
    if (!esContigua(i, j)) {
        alert("Las celdas deben ser contiguas (horizontal, vertical o diagonal).");
        return;
    }

    // Marca la celda como parte del barco
    tableroUsuario[i][j] = 'B';
    barcoActual.push([i, j]); // Agrega las coordenadas al barco actual
    event.target.classList.add('barco'); // Opcional: Cambia el estilo de la celda

    // Verifica si el barco está completo
    if (barcoActual.length === tamañoBarcoActual) {
        alert(`Barco de ${tamañoBarcoActual} casillas colocado.`);
        barcoActual = []; // Reinicia el barco actual
        tamañoBarcoActual = 0; // Reinicia el tamaño del barco actual

        // Opcional: Preguntar si se desea colocar otro barco
        if (confirm("¿Quieres colocar otro barco?")) {
            let nuevoTamaño = parseInt(prompt("Elige el tamaño del próximo barco (1, 2, 3 o 4):"));
            iniciarColocacionBarco(nuevoTamaño);
        }
    }
}

function principal(){
    let celdasTabla = document.querySelectorAll(".celda"); // Devuelve el array de elementos que tengan la clase celda.
    celdasTabla.forEach(celda => celda.addEventListener("click", guardarBarco))
    // Inicia la colocación del primer barco
    let tamañoInicial = parseInt(prompt("Elige el tamaño del primer barco (1, 2, 3 o 4):"));
    iniciarColocacionBarco(tamañoInicial);
}
window.addEventListener("DOMContentLoaded", principal, false);