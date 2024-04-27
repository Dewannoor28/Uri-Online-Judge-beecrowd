import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args)  {
 
        Scanner input = new Scanner(System.in);
        int c1,u1,c2,u2;
        double p1,p2,sumaiya;
         c1 = input.nextInt();
         u1 = input.nextInt();
         p1 = input.nextDouble();
         c2 = input.nextInt();
         u2 = input.nextInt();
         p2 = input.nextDouble();
         sumaiya = ((u1*p1)+(u2*p2));
         System.out.printf("VALOR A PAGAR: R$ %.2f\n",sumaiya);        
         
    }
 
}