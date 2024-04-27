import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args)  {
     
     Scanner input=new Scanner(System.in);
     double a,b,c,d,e,f,g,h;
     a = input.nextDouble();
     b = input.nextDouble();
     c = input.nextDouble();
     
     d = (0.5*a*c);
     e = (3.14159*c*c);
     f = ((0.5*(a+b))*c);
     g = (b*b);
     h  =(a*b);
     
     System.out.printf("TRIANGULO: %.3f\n",d);
     System.out.printf("CIRCULO: %.3f\n",e);
     System.out.printf("TRAPEZIO: %.3f\n",f);
     System.out.printf("QUADRADO: %.3f\n",g);
     System.out.printf("RETANGULO: %.3f\n",h);
     
       
    }
 
}