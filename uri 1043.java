import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     double a,b,c,Perimetro,Area;
      a = input.nextDouble();
      b = input.nextDouble();
      c = input.nextDouble();
      Perimetro = (a+b+c);
       Area = (((a+b)*c)/2);
      if((a+b)>c && (b+c)>a && (c+a)>b)
      System.out.printf("Perimetro = %.1f\n",Perimetro);
      else 
      System.out.printf("Area = %.1f\n",Area);
    }
 
}