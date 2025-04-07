function random(number){
    return Math.floor(Math.random()*(number + 1)); //La librería devuelve de del 0 al 1, sin estar el 1 incluido, asi que o multiplicamos por el numero que queramos para que nos lo devuelva, si le damos 10, pues sera del 0-9
}                                                  // La librería flor redondea a la parte entera.
function cambiarFondo(){
    document.body.style.background= `rgb(${random(255)},${random(255)},${random(255)})`; //El rgb es una función que recibe 3 valores, el rojo, el verde y el azul, y los valores van del 0 al 255.
    //document.body.style.background='rgb('+random(255)+','+random(255)+','+random(255)+')'; //Otra forma de hacerlo, pero es mas tedioso.
}

function cambiaTexto(){
    document.body.innerHTML= "HOLAS MUNDOS"; //Cambia el texto de la pagina, pero no es lo correcto, ya que se pierde todo el contenido de la pagina.º
}
function load(){
    let boton=document.querySelector("button");
    let boton2 = document.getElementById("boton2");
    let cuadroTexto = document.getElementById("cuadroTexto");
    
    
    //EVENTOS
    boton.addEventListener("click", cambiarFondo, false); // si queremos pasar argumentos, se pondran como tercer parametro, y se llamara a la funcion con el nombre de la funcion, sin los parentesis.
    //boton.addEventListener("click", cambiarFondo(), false); //No se le pone el () porque si no, se ejecuta la funcion al cargar la pagina, y no al hacer click.
    boton2.addEventListener("click", cambiaTexto, false);
    cuadroTexto.addEventListener("keydown", {event} =>);

}

window.addEventListener("DOMContentLoaded", load, false);