function random(number){
    return Math.floor(Math.random()*(number + 1)); //La librería devuelve de del 0 al 1, sin estar el 1 incluido, asi que o multiplicamos por el numero que queramos para que nos lo devuelva, si le damos 10, pues sera del 0-9
}
                                                  // La librería flor redondea a la parte entera.
function cambiarFondo(){
    let divColorido = document.getElementById("zona");
    divColorido.style.background= `rgb(${random(255)},${random(255)},${random(255)})`; //El rgb es una función que recibe 3 valores, el rojo, el verde y el azul, y los valores van del 0 al 255.
    //document.body.style.background='rgb('+random(255)+','+random(255)+','+random(255)+')'; //Otra forma de hacerlo, pero es mas tedioso.
}

function cambiaTexto(){
    document.body.innerHTML= "HOLAS MUNDOS"; //Cambia el texto de la pagina, pero no es lo correcto, ya que se pierde todo el contenido de la pagina.º
}

function mostrarDatos(event){
    event.preventDefault(); //Evita que se recargue la pagina al enviar el formulario, ya que por defecto, al enviar un formulario, se recarga la pagina.
    let nombre=document.getElementById("nombre").value; //El value es el valor que tiene el input, y se le asigna a la variable nombre.
    let apellidos=document.getElementById("apellidos").value; //El value es el valor que tiene el input, y se le asigna a la variable apellidos.
    let edad=document.getElementById("edad").value; //El value es el valor que tiene el input, y se le asigna a la variable edad.
    document.getElementById("resultado").innerHTML=`Nombre: ${nombre} <br> Apellidos: ${apellidos} <br> Edad: ${edad}`; //Se le asigna el valor de las variables a la etiqueta resultado, y se le da formato con el <br> para que salgan en lineas diferentes.
}

function load(){
    let boton=document.querySelector("button"); // Devuelve solo la primera etiquueta HTML que encuentre, si hay mas botones,
                                                // se usara querySelectorAll("button") y se le pasara el indice del boton que queremos usar.
    let boton2 = document.getElementById("boton2");
    let boton3 = document.getElementById("boton3");
    let cuadroTexto = document.getElementById("cuadroTexto");
    let zona = document.getElementById("zona");
    let formulario = document.getElementById("formulario");
    
    
    //EVENTOS
    boton.addEventListener("click", cambiarFondo, false); // si queremos pasar argumentos, se pondran como tercer parametro, y se llamara a la funcion con el nombre de la funcion, sin los parentesis.
    //boton.addEventListener("click", cambiarFondo(), false); //No se le pone el () porque si no, se ejecuta la funcion al cargar la pagina, y no al hacer click.
    boton2.addEventListener("click", cambiaTexto, false);
    boton3.addEventListener("click", (event)=> console.log(event)); 
    cuadroTexto.addEventListener("keydown", (event)=>(document.getElementById("textoSalida").textContent += `${event.key}`));
    zona.addEventListener("mousemove", cambiarFondo,false);
    formulario.addEventListener("submit", mostrarDatos);
}

window.addEventListener("DOMContentLoaded", load, false);