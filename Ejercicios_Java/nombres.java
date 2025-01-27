import java.util.scanner;

public class Nombres{
  public static void main(String args[]){
 
  String nombre_uno = "", nombre_dos = "";
  Scanner entrada = new Scanner(System.in);

  System.out.print("Porfavor ingresa el primer nombre: ");
  nombre_uno = entrada.nextLine();

  System.out.print("porfavor, ingrese el segundo nombre: ");
  nombre_dos = entrada.nextLine();

  if(nombre_uno.equals(nombre_dos) ){
   System.out.println("Los nombres coinciden");
  } else{
   System.out.println("Los nombres no coinciden");
  }
 }
}