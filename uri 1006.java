import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) {
   
    Scanner input = new Scanner(System.in);
        double A=input.nextDouble();
        double B =input.nextDouble();
        double c =input.nextDouble();
        double MEDIA = (A*2+B*3+c*5)/(2.0+3.0+5.0);
        System.out.printf("MEDIA = %.1f\n",MEDIA);
    }
 
}