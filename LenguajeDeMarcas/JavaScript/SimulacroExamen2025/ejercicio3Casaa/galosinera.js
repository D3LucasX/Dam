function comprobarMatricula(matricula){
    const regExpMatricula = /^[0-9]{4}([BCDEFGHIJKLMNOPKRSTUVWXYZ]{3})$/;
    if (regExpMatricula.test(matricula)){
        return true;
    }else{
        alert("El formato de la matrícula no es correcto en la matricula");
        return false;
    }
}

function comprobarLitros(litros){
    const regExpLitros =  /^[0-9]{1,3}(\.[0-9]{1,2})$/;
    if (regExpLitros.test(litros)){
        return true;
    }else{
        alert("no ha introducido un valor válido en los litros");
        return false;
    }
}

function calcularPrecio(litros, precioLitro){
    let precio = litros * precioLitro;
    return precio.toFixed(2);
}

function main(){
   const form = document.getElementById("gasolineraForm");
   const divCosteFinal = document.getElementById("costeFinal");
    form.addEventListener("submit", function(event){
        event.preventDefault(); // Evita el envío del formulario
        let matriculaValida = document.getElementById("matricula").value.trim();
        let litros = document.getElementById("litros").value.trim();
        const precioLitro = 1.23;

        if(comprobarMatricula(matriculaValida) && comprobarLitros(litros)){
        let costeFinal = calcularPrecio(parseFloat(litros), precioLitro);
        divCosteFinal.textContent = `El coste final es :${costeFinal} €`;
        }
    });
}
window.addEventListener("DOMContentLoaded", main, false);