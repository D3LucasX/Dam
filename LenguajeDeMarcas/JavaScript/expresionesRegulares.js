function exp1(){
/*Empieza por A*/

let expReg= /[^A|a]/;
let palabra = "hola";

if (expReg.test(palabra)){
    document.writeln("<h2> Empieza por A -->" +palabra +"</h2>");
}else{
    document.writeln("<h2> No empieza por A --> " +palabra+ "</h2>");
}
}

function exp2(){
    /*Cadena que termina por o*/
    let expReg= /o$/;
    let palabra = "arbol";

        if (expReg.test(palabra)){
            document.writeln("<h2> true -->" +palabra +"</h2>");
        }else{
            document.writeln("<h2> false --> " +palabra+ "</h2>");
        }
}

function exp3(){
    /*Limite de palabra \b iniciar y finalizar */
    let expReg= /\bhola\b/; // La cadena que sea contiene en cualquier posición hola
    let palabra = "Fulanito, hola como estas";

        if (expReg.test(palabra)){
            document.writeln("<h2> true -->" +palabra +"</h2>");
        }else{
            document.writeln("<h2> false --> " +palabra+ "</h2>");
        }
}

function exp4(){
    /*Diferencia de \B y \b*/
    let expReg= /\Bhola\B/; // dentro de una palabra existe hola
    let palabra = "Fulanito, hola123 como estas";

        if (expReg.test(palabra)){
            document.writeln("<h2> true -->" +palabra +"</h2>");
        }else{
            document.writeln("<h2> false --> " +palabra+ "</h2>");
        }
}
//CARACTERES
function exp5(){
    /*Cadena alfabética con mayúsculas y con minúsculas*/
    let expReg= /[A-Za-z]+/;
    let palabra = "Fulanito hola como estas";

        if (expReg.test(palabra)){
            document.writeln("<h2> true -->" +palabra +"</h2>");
        }else{
            document.writeln("<h2> false --> " +palabra+ "</h2>");
        }
}

function exp6(){
    /*Definir una cadena numérica*/
    let expReg= /\b[0-9]{2,}\b/; // Decimos que el número tenga entre 2 y 4 caracteres, es lo mismo que esto --> /\b\d{2,4}\b/
    //Conocemos el numero de caracteres que queremos{2}
    //Conocemos el rango {2,4}
    //A partir de dos números {2,}
    let palabra = "13422";

        if (expReg.test(palabra)){
            document.writeln("<h2> true -->" +palabra +"</h2>");
        }else{
            document.writeln("<h2> false --> " +palabra+ "</h2>");
        }
}

function load(){
    exp1();
    exp2();
    exp3();
    exp4();
    exp5();
    exp6();

}
window.addEventListener("DOMContentLoaded", load, false);