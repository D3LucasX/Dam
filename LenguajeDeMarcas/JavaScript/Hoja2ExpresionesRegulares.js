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

function isCorreo(correo){
    let expReg= /\b[A-Za-z0-9.&_]+\@[A-Za-z]+\.[a-z]{2,3}\b/;
    if(regex.test(correo)){
        return true;
    }else{
        return false;
    }
}

function Ejercicio2(){
    let correo = prompt("Introduce tu correo: ");
    if (isCorreo(correo)){
        document.writeln("<h2> true -->" +correo +"</h2>");
    }else{
        document.writeln("<h2> false --> " +correo+ "</h2>");
    }
}

function is telefono(telefono){
    let expReg= /\b\d{2}\-\d{3}\-\d{2}\-\d{2}\-\d{2}\b/;
    if(regex.test(telefono)){
        return true;
    }else{
        return false;
    }
}

function Ejercicio3(){
    let telefono = prompt("Introduce tu telefono: ");
    
    if (isCorreo(telefono)){
        document.writeln("<h2> true -->" +telefono +"</h2>");
    }else{
        document.writeln("<h2> false --> " +telefono+ "</h2>");
    }
}

function load(){
    Ejercicio1();
    Ejercicio2();
}
window.addEventListener("DOMContentLoaded", load, false);