public class Operaciones{
  public static void main(String args[]){
   
   int operaciones = 3;
   int num_uno = 6;
   int num_dos = 8;
   int resultado = 0;
  
   if(operaciones == 1){
     resultado = num_uno + num_dos;
     System.out.println("El resultado de su suma es: " + resultado);
  } else if(operaciones == 2){
     resultado = num_uno - num_dos;
     System.out.println("El resultado de su resta es: " + resultado);
  } else if(operaciones == 3){
     resultado = num_uno * num_dos;
     System.out.println("El resultado de su multiplicacion es: " + resultado);
  } else{
     System.out.println("No ha escogido una opcion posible");
  }
 }
}