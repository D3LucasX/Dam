function generarLetra() {
    const abecedario = "abcdefghijklmnopqrstuvwxyz";
    const indice = Math.floor(Math.random() * abecedario.length);
    return abecedario[indice];
}

function llenarTabla() {
    let letrasUnicas = [];
    let matriz = Array(2).fill(null).map(() => Array(5).fill(null)); // Matriz de 2x5

    // Generar 5 letras únicas
    while (letrasUnicas.length < 5) {
        let letra = generarLetra();
        if (!letrasUnicas.includes(letra)) {
            letrasUnicas.push(letra);
        }
    }

    // Duplicar las letras para formar las parejas
    let letrasDuplicadas = [...letrasUnicas, ...letrasUnicas];

    // Barajar las letras
    letrasDuplicadas.sort(() => Math.random() - 0.5);

    // Llenar la matriz con las letras barajadas
    let index = 0;
    for (let i = 0; i < 2; i++) {
        for (let j = 0; j < 5; j++) {
            matriz[i][j] = letrasDuplicadas[index];
            index++;
        }
    }

    console.log("Matriz generada con parejas:", matriz);

    // Mostrar "X" en los botones y asignar las letras a la matriz
    for (let i = 0; i < 2; i++) {
        for (let j = 0; j < 5; j++) {
            let boton = document.querySelector(`#tablaBotones button[value="${i}${j}"]`);
            boton.textContent = "X"; // Oculta la letra
            boton.dataset.letra = matriz[i][j]; // Asigna la letra como un atributo de datos
        }
    }
}
function main(){

}
window.addEventListener("DOMContentLoaded", main, false);