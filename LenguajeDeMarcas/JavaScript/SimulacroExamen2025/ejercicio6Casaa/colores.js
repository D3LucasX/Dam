let contador = 0;

function cambiarColor(){
    let divColor = document.getElementById("colores");

    let intervalo = setInterval(() =>{
    if (contador === 0){
        divColor.style.backgroundColor = "blue";
    }else if (contador === 1){
        divColor.style.backgroundColor = "green";
    }else if (contador === 2){
        divColor.style.backgroundColor = "orange";
    }else if (contador === 3){
        divColor.style.backgroundColor = "pink";
    }else if(contador === 4){
        divColor.style.backgroundColor = "purple";
    }else if(contador === 5){
        divColor.style.backgroundColor = "brown";
    }else if(contador === 6){
        divColor.style.backgroundColor = "cyan";
    }else if (contador === 7){
        divColor.style.backgroundColor = "turquoise";
    }else if (contador === 8){
        divColor.style.backgroundColor = "grey";
    }
        contador++;
        if (contador > 8){
            contador = 0;
        }
    }, 1000);

    
    let botonStop = document.getElementById("stop");
    botonStop.addEventListener("click", function(){
        clearInterval(intervalo);
        contador= 0;
        divColor.style.backgroundColor = "white";
    });
}

function main(){
    cambiarColor();
}
window.addEventListener("DOMContentLoaded", main, false);