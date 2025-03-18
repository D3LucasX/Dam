function Ejercicio1(){
    alert("Hello World");
}

function Ejercicio2(){
    document.writeln("Hello World <br>");
}

function Ejercicio3(){
    let a = 3;
    let b = 5;
    let resultado = a+b;
    console.log("El resultado es : " + resultado + "<br>");

}

function Ejercicio4(){
    let ejer4 = prompt("Introduce tu nombre de usuario");
    document.writeln("Mi nombre es : " + ejer4 + "<br>");

}

function Ejercicio5(){
    let ejer5 = prompt("introduce el primer número");
    let ejer52 = prompt("Introduce el segundo número");
    let result5 = parseInt(ejer5)+parseInt(ejer52); 
    /* Con parseInyt transformamos una cadena en entero para poder operar
    con los números, si no los tomara como caracteres de una cadena*/
    document.writeln("el resultado de la suma es : " + result5 + "<br>");
}

function Ejercicio6(){
    let ejer6 = parseInt(prompt("Introduce el primer número para la comparación"));
    let ejer62 = parseInt(prompt("Introduce el segundo número para la comparación"));
        if(ejer6 > ejer62){
            document.writeln(ejer6 + " es mayor que " + ejer62 + "<br>");
        }else{
            document.writeln(ejer62 + " es mayor que " + ejer6 + "<br>");
        }
}

function Ejercicio7(){ 
    // No contemplo que los números sean iguales, revisar la correccion que suba Bea.
    let ejer7 = parseInt(prompt("Introduce el primer número para la comparación"));
    let ejer72 = parseInt(prompt("Introduce el segundo número para la comparación"));
    let ejer73 = parseInt(prompt("Introduce el tercer número para la comparación"));
    let mayor;
        if(ejer7 > ejer72){
            mayor = ejer7;
        }else{
            mayor = ejer72;
        }
        if (mayor > ejer73){
            document.writeln("El numero mayor es: " + mayor + "<br>");
        }else{
            document.writeln("El numero mayor es: " + ejer73 + "<br>");
        }
}

function Ejercicio8(){
    // SI QUEREMOS RESTRINGIR QUE LO QUE STAMOS COMPARANDO SEA DEL MISMO TIPO DE
    // DATOS, POR EJEMPLO, SI QUEREMOS COMPARAR UN 0 CHAR CON UN 0 INT
    // NOS DARÍA FALSE, POR QUE EL TIPO DE DATO NO ES EL MISMO
    let ejer8 = parseInt(prompt("Veamos si el numero que escribas es divisible entre 2:"));
    if (ejer8%2 == 0){
        document.writeln("es divisible entre 2 <br>");
    }else{
        document.writeln("No es divisible entre 2 <br>")
    }
}

function Ejercicio9(){
    let contador=0;
    let ejer9 = prompt("Escribe una frase:");
    for(let i = 0; i < ejer9.length; i++){
        if (ejer9[i] == 'a' || ejer9[i] == 'A'){
        // if (ejer[i].toLowerCase()=='a') -> esto sería otra manera
        // Llamando a la funcion lower case te combierte todas las 'a' 
        // mayúsculas a minúsculas y asi te las coge todas.
            contador++;
        }
    }
    document.writeln("La cantidad de total de a`s es: " + contador + "<br>");
}
function Ejercicio9split(){
    //La misma pero utilizando split.
        //Busca el numero de veces que aparece una subcadena dentro de una cadena.
        // o solo con un caracter.
    let ejer9 = prompt("Escribe una frase:");
    let contador=ejer9.onsecuritypolicyviolation('a').length -1;// -1 por que empieza en 0
    // Esta función te devuelve el número de veces que aparece.
    // Normalmente lo utiliza como para formar arrays de cadenas, contar subcadenas y contar ocurrencias.
}
function EjemploSplit(){
    let frase ="Hola que tal estas";
    let palabras = frase.split(" ");
    for (let i = 0 ; i < palabras.length; i ++){
        document.writeln(palabras[i] + "<br>");
    }
    let veces=frase.split(" ").length -1;
    // Esto te devule el número de particiones que tiene la oración, en este 
    // caso las particiones las haciamos por los espacios entonces contamos
    // desde el 0, por lo tanto nos saldria como resultado 3
    document.writeln(veces);
}
function EjemploInclude(){
    // La misma funcion pero utilizando include.
    let frase =prompt ("Hola que tal estas");
    let letra = 'a';
    let contador = 0;
    for (let i of frase){
        if (frase[i].includes(letra)){// DOnde pone letra se habria podido poner directamente la 'a'.
            contador++;
        }
    }
    document.writeln("El total de a´s es: " + contador);
}
function EjemploRecorriendoChars(){
    let frase =prompt ("Hola que tal estas");
    let contador = 0;

    for (let char of frase){
        if(char.toLowerCase() === 'a'){
            contador ++;
        }
    }
    document.writeln("El total de a´s recorriendo una cadena es= " + contador);
}

function Ejercicio10(){
    let frase = prompt("Escribeme una frase");
    let vocales = "aeiouAEIOU";
    let vocalesEncontradas = ""; // La inicializamos a char la variable
                                 // Al poner las comillas ya lo indicámos.

    for(let char of frase){
        if(vocales.includes(char)){
            // Lo que hace esto es que va mirando si el primer caracter de 
            // la cadena esta incluida en la variable Vocales 'aeiouAEIOU'
            if(!vocalesEncontradas.includes(char)){
                // Es lo mismo que la anterior condicion, pero negandolo,
                // así que hace lo contrario, por lo que si en la cadena 
                // se encuentra alguna de las vocales que ya estan en la cadena,
                // no la imprimiría.
                vocalesEncontradas += char;    
            }

        }
    }
    document.writeln("Vocales encontradas: " + vocalesEncontradas);
}
 function Ejercicio11(){
    let frase = prompt("Escribeme una frase");
    let vocales = "aeiouAEIOU";
    let contador = 0;

    for(let char of frase){
        if(vocales.includes(char)){
            // Lo que hace esto es que va mirando si el primer caracter de 
            // la cadena esta incluida en la variable Vocales 'aeiouAEIOU'
            contador++;
        }
    }
    document.writeln("Vocales encontradas: " + contador);
}

function Ejercicio12(){
    let frase = prompt("Escribeme una frase");
    let vocales = "aeiou"; // -> Solo ponemos las mayúsculas ya que con la funcion toLowercase dara igual si son mayúsculas o minúsculas.
    // Definicion de un array:
    let vocalesEncontradas = {a:0, e:0, i:0, o:0, u:0};
    // Indicamos que las posiciones del array son las vocales y ya no son números
    // es decir, ya la primera posición no sería un 0, sería la 'a' y que lo que 
    // contiene cada posicion es un 0.

    for(let char of frase){
        if (vocales.includes(char.toLowerCase())){
            vocalesEncontradas[char.toLowerCase()] ++;
            // Accede en la posicion del array que coincida con la vocal de la cadena, en ese caso incrementara en uno,
            // Por ejemplo si la palabra es Hola, cuando llegue a la 'o', accedera a la posicion 'o' del array, e incrementará en uno.
        }
    }
    document.writeln("Vocales encontradas: " + vocalesEncontradas);
}

function Ejercicio14(){
    let num=parseInt(prompt("Introduce un número"));
    // Hacemos un array dinámico.
    let divisibles = []; // Así se pone un array para saber que es un array sin nada dentro

    if (num % 2 === 0) divisibles.push("2");
    if (num % 3 === 0) divisibles.push("3");
    if (num % 5 === 0) divisibles.push("5");
    if (num % 7 === 0) divisibles.push("7");
    // Lo que hace esto es que cuando es divisible entre dos, el array guardara un 2
    // Cuando es divisible entre 3, en la segunda posición guardara un 3, y así
    // sucesivamente, por lo que cuando imprimamos el array indicara los números por
    // los que son divisibles el numero que hemos introducido.
    if(divisibles.length>0){
        document.writeln(divisibles.join(", "));
        // Recorre el array y entre las distintas posiciones del array imprime la coma.
    }else{
        document.writeln("No es divisible");
    }
}

// Funcion que llama a todas las funciones, es como el main.
function carga(){
    Ejercicio1();
    Ejercicio2();
    Ejercicio3();
    Ejercicio4();
    Ejercicio5();
    Ejercicio6();
    Ejercicio7();
    Ejercicio8();
    Ejercicio9();
    Ejercicio9split();
    EjemploSplit();
    EjemploInclude();
    EjemploRecorriendoChars();
    Ejercicio10();
    Ejercicio11();
    Ejercicio12();
    
    Ejercicio14();
}



window.addEventListener("DOMContentLoaded",carga,false);