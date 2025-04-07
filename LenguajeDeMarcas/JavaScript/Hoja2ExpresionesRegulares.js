//EJERCICIO 1.

function isFecha(fecha){
    //Formato de la fecha dd,mm,aaaa
    const regex = /^(0[1-9]|[1-2][0-9]|3[0-1]),(0[1-9]|1[0-2]),(19|20\d{2})$/; //^[0-9]{2},\d{2},\d{4}$/
    if(regex.test(fecha)){
        return true;
    }else{
        return false;
    }
}

function Ejercicio1(){ 
    let fecha = prompt("Introduce la fecha: ");
        if (isFecha(fecha)){
            document.writeln("<h2> true -->" +fecha+"</h2>");
            let FechaPorPartes = fecha.split(",");
            let day = parseInt(FechaPorPartes[0]);
            let month = parseInt(FechaPorPartes[1]);
            let year = parseInt(FechaPorPartes[2]);

            let dechaIntroducida = new Date(day, month, year)
        }else{
            document.writeln("<h2> false --> " +fecha+ "</h2>");
        }
}

//EJERCICIO 2

function isUserCorrect(usuario){
    let regex= /\b[A-Za-z0-9.&_]\b/;
    if(regex.test(usuario)){
        return true;
    }else{
        return false;
    }
}
function isDominioCorrect(dominio){
    let regex=/\b[A-Za-z]+\.[a-z]{2,3}\b/;
    if(regex.test(dominio)){
        return true;
    }else{
        return false;
    }
}
function isCorreo(correo){
    let regex= /\b[A-Za-z0-9.&_]+\@[A-Za-z]+\.[a-z]{2,3}\b/;
    if(regex.test(correo)){
        return true;
    }else{
        return false;
    }
}

function Ejercicio2(){
    let correo = prompt("Introduce tu correo: ");
    let partesCorreo=correo.split("@");
    if (isCorreo(correo)){
        // El numero de letras del usuario --> partes del correo[0]
        document.writeln("<h2>" + partesCorreo[0].length + "</h2>")
        
    }else{
        if(!isUserCorrect(partesCorreo[0])){
            if(!isDominioCorrect(partesCorreo[1])){
                alert("Tanto el usuario como el dominio no cumplen con las caracteristicas que debe de tener el correo.")
            }else{
                alert("Usuario puede tener letras, numeros y algun caracter especial" + partesCorreo[0]);                       
            }

        }else{
            if(!isDominioCorrect(partesCorreo[1])){
                alert("El dominio solo debe de tener letras y despues del punto solo se permiten hasta tres caracteres" + partesCorreo[1]);
            }else{
                // No entra nunca por que la funcion split divide por el @
                alert("Correo inválido, le falta el @");
            }
        }
    }
}

function isPhone(phone){
    let regex= /\b\d{2}\-\d{3}\-\d{2}\-\d{2}\b/;
    if(regex.test(phone)){
        return true;
    }else{
        return false;
    }
}
function Ejercicio3(){
    let prefijos=[
        {prefijo : '945', ciudad: 'Alava'}, 
        {prefijo : '967', ciudad: 'Albacete'},
        {prefijo : '966', ciudad: 'Alicante'},
        {prefijo : '965', ciudad: 'Alicante'},
        {prefijo : '950', ciudad: 'Almeria'},
        {prefijo : '984', ciudad: 'Asturias'},
        {prefijo : '985', ciudad: 'Asturias'},
        {prefijo : '920', ciudad: 'Avila'},
        {prefijo : '924', ciudad: 'Badajoz'},
        {prefijo : '971', ciudad: 'Baleares'},
        {prefijo : '93', ciudad: 'Barcelona'},
        {prefijo : '947', ciudad: 'Burgos'},
        {prefijo : '927', ciudad: 'Caceres'},
        {prefijo : '956', ciudad: 'cadiz'},
        {prefijo : '91', ciudad: 'Madrid'}];

    let phone = prompt("Introduce tu telefono: ");
    
    if (isPhone(phone)){
        let prefix = phone.split("-")[0];
        let origen = null;

        //Buscamos en el array 
        //for(let i = 0; i < prefix.length; i++) --> en caso de querer recorrerlo con un bucle
        let i = 0;
        while ((origen === null) && (i<prefijos.length)){
            if(prefijos[i].prefijo==prefix){
                origen=prefijos[i].ciudad;
            }
            i ++;
        }
        document.writeln("La ciudad de origen es: " + origen);
    }else{
        let caracteres = phone.replace(/-/g, "");
        if(caracteres > 12){
            document.writeln("Al teléfono le sobran números");
        }else{
            document.writeln("Al teléfono le faltan números");
        }
        
    }
}
function Ejercicio4(){
    // Pasamos todo lo que se ha introducido a minusculas
    let oracion = prompt("Introduce una oracion: ").toLowerCase();
    let palabra = prompt("Introduce una palabra a buscar").toLowerCase();

    let regex = new RegExp(palabra, 'g'); // La 'g' busca todas las correspondencias, si no hubieramos pasado todo a minúsculas, para qu eno importara si son mayus o minus, habria que poner gi
    //usamos la funcion match, que te busca la correspondencia con la cadena y te crea un array con todas las veces que se han encontrado las correspondencias.
    let coincidencias = oracion.match(regex).length;

    document.writeln("La palabra introducida aparece " + coincidencias + " veces");

}
function reemplazarPalabra(palabra, reemplazo, frase){
    return frames.replace(new RegExp(palabra,"gi", reemplazo));
}
function Ejercicio5(){
    let oracion = prompt("Introduce una oracion: ").toLowerCase();
    let remplazo = prompt("Introduce una palabra a buscar").toLowerCase();
    let palabra = prompt("Introduce una palabra a buscar").toLowerCase();
    document.writeln("La frase final "+reemplazarPalabra(palabra, reemplazo,oracion));
}

function Ejercicio6(){
    
}

function load(){
    //Ejercicio1();
    //Ejercicio2();
    //Ejercicio3();
    //Ejercicio4();
    Ejercicio5();
}
window.addEventListener("DOMContentLoaded", load, false);