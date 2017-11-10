import java.io.*;
import java.util.*;
public class palabra_a_binario {
   public static void main (String args[]){
      System.out.println("Ingrese Cadena");
      Scanner sc= new Scanner (System.in);
      String letras =sc.nextLine(),jhos;
      int b=0;
      for (int i=0; i<letras.length(); i++){
      b=letras.charAt(i);
      jhos=Integer.toBinaryString(b);
      System.out.println(letras.charAt(i));
      System.out.println(jhos+"\n");
      }
   }
}       
