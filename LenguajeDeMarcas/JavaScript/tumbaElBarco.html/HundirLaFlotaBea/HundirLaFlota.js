// El índice es el número de cuadrados de cada barco?
let barcos = [4,3,2,1];
// Tablerto del usuario => matriz que guarda los barcos = m
let tableroUsuario;
// Posicion es la cadena que nos devuelve el id id 01t1
/*function esBarco2(posicion1, posicion2, m){
    if (m [i][j] == m [][])
}*/
function guardarBarco(event, tableroUsuario){
    // con i [2] diferenciamos la matriz del jugador o de la máquina
    alert("Guardando barco"); //Muestra el valor de la matriz en la consola para saber que valor tiene cada posicion
    let i = event.target.name[0]; 
    let j = event.target.name[1]; 
    if(i = event.target.id[0] === 'u'){
        tableroUsuario[i][j] = 'x';
    }
    console.log("La posicin guardada es: " + i +" " + j); //Muestra el valor de la matriz en la consola para saber que valor tiene cada posicion 

}
function esBarco4(){

}
function principal(){
    let celdasTabla = document.querySelectorAll(".celda"); // Devuelve el array de elementos que tengan la clase celda.
    celdasTabla.forEach(i => i.addEventListener("keydown", guardarBarco))
}
window.addEventListener("DOMContentLoaded", principal, false);