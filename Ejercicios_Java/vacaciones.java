import java.util.Scanner;

public class Vacaciones{
  public static void main(String args[]){
  
    Scanner in = new Scanner(System.in);
    String nombre = "";
    int antigüedad = 0, clave = 0;

    System.out.println("*******************************************");
    System.out.println("Bienvenido al sistema de coca-cola company*");
    System.out.println("*******************************************");
    System.out.println("");
    System.out.println("");


    System.out.print("¿Cual es el nombre del trabajador? ");
    nombre = in.nextLine();
    System.out.println("");

    System.out.print("¿Cuantos años llevas en la empresa? ");
    antigüedad = in.nextInt();
    System.out.println("");

    System.out.print("¿Cual es tu clave de departamento? ");
    clave = in.nextInt();
    System.out.println("");

 
    if(clave == 1){

      if(antigüedad == 1){
        System.out.println("El trabajador " + nombre + " tiene derecho a 6 días de vacaciones");
      } else if(antigüedad >= 2 && antigüedad <=6){
        System.out.println("El trabajador " + nombre + " tiene derecho a 14 días de vacaciones");
      } else if(antigüedad >=7){
        System.out.println("El trabajador " + nombre + " tiene derecho a 20 días de vacaciones");
      }
    }else if(clave == 2){

      if(antigüedad == 1){
        System.out.println("El trabajador " + nombre + " tiene derecho a 7 días de vacaciones");
      } else if(antigüedad >= 2 && antigüedad <=6){
        System.out.println("El trabajador " + nombre + " tiene derecho a 15 días de vacaciones");
      } else if(antigüedad >=7){
        System.out.println("El trabajador " + nombre + " tiene derecho a 22 días de vacaciones");
      }
     
    }else if(clave == 3){

      if(antigüedad == 1){
        System.out.println("El trabajador " + nombre + " tiene derecho a 10 días de vacaciones");
      } else if(antigüedad >= 2 && antigüedad <=6){
        System.out.println("El trabajador " + nombre + " tiene derecho a 20 días de vacaciones");
      } else if(antigüedad >=7){
        System.out.println("El trabajador " + nombre + " tiene derecho a 30 días de vacaciones");
      }
    }else{
     System.out.println("La clave de departamento no existe");
    }
 }
}