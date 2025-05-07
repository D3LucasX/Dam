function pedirPalabra(){
    let palabra = document.getElementById("cuadroTexto").value;
    let expreg = /^[a-zA-ZñÑ\s]+$/;;
    let palabraCodificada = "";
    for(let i = 0; i < palabra.length; i++){
        // Validar la palabra completa antes de procesarla
    if (!expreg.test(palabra)) {
        alert("La palabra no es válida, por favor, introduce una palabra que contenga solo letras");
        document.getElementById("cuadroTexto").value = ""; // Limpia el campo de entrada
        document.getElementById("resultado").innerHTML = ""; // Limpia el resultado
        return; // Detiene la ejecución de la función
    }
            if (palabra[i].toLocaleLowerCase() == "a"){
                palabraCodificada += "1";
            }
            else if (palabra[i].toLocaleLowerCase() == "b"){
                palabraCodificada += "2";
            }
            else if (palabra[i].toLocaleLowerCase() == "c"){
                palabraCodificada += "3";
            }
            else if (palabra[i].toLocaleLowerCase() == "d"){
                palabraCodificada += "4";
            }
            else if (palabra[i].toLocaleLowerCase() == "e"){
                palabraCodificada += "5";
            }
            else if (palabra[i].toLocaleLowerCase() == "f"){
                palabraCodificada += "6";
            }
            else if (palabra[i].toLocaleLowerCase() == "g"){
                palabraCodificada += "7";
            }
            else if (palabra[i].toLocaleLowerCase() == "h"){
                palabraCodificada += "8";
            }
            else if (palabra[i].toLocaleLowerCase() == "i"){
                palabraCodificada += "9";
            }
            else if (palabra[i].toLocaleLowerCase() == "j"){
                palabraCodificada += "11";
            }
            else if (palabra[i].toLocaleLowerCase() == "k"){
                palabraCodificada += "12";
            }
            else if (palabra[i].toLocaleLowerCase() == "l"){
                palabraCodificada += "13";
            }
            else if (palabra[i].toLocaleLowerCase() == "m"){
                palabraCodificada += "14";
            }
            else if (palabra[i].toLocaleLowerCase() == "n"){
                palabraCodificada += "15";
            }
            else if (palabra[i].toLocaleLowerCase() == "o"){
                palabraCodificada += "17";
            }
            else if (palabra[i].toLocaleLowerCase() == "p"){
                palabraCodificada += "18";
            }
            else if (palabra[i].toLocaleLowerCase() == "q"){
                palabraCodificada += "19";
            }
            else if (palabra[i].toLocaleLowerCase() == "r"){
                palabraCodificada += "20";
            }
            else if (palabra[i].toLocaleLowerCase() == "s"){
                palabraCodificada += "21";
            }
            else if (palabra[i].toLocaleLowerCase() == "t"){
                palabraCodificada += "22";
            }
            else if (palabra[i].toLocaleLowerCase() == "u"){
                palabraCodificada += "23";
            }
            else if (palabra[i].toLocaleLowerCase() == "v"){
                palabraCodificada += "24";
            }
            else if (palabra[i].toLocaleLowerCase() == "w"){
                palabraCodificada += "25";
            }
            else if (palabra[i].toLocaleLowerCase() == "x"){
                palabraCodificada += "26";
            }
            else if (palabra[i].toLocaleLowerCase() == "y"){
                palabraCodificada += "27";
            }
            else if (palabra[i].toLocaleLowerCase() == "z"){
                palabraCodificada += "28";
            }
            else if (palabra[i].toLocaleLowerCase() == "ñ"){
                palabraCodificada += "16";
            }
            else{
                palabraCodificada += palabra[i];
            }
    }
    let resultadoDiv = document.getElementById("resultado");
    resultadoDiv.innerHTML = `
        <h2>La palabra codificada es:</h2>
        <p>${palabraCodificada}</p>
        <h2>La palabra original es:</h2>
        <p>${palabra}</p>
    `;
}
function main(){
    let boton = document.getElementById("botonCodificar");
    boton.addEventListener("click", pedirPalabra, false);
}
window.addEventListener("DOMContentLoaded", main, false);