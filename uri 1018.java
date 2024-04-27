import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args)  {
     
     
     Scanner input = new Scanner(System.in);
     
     int h;
     h = input.nextInt();
     System.out.printf("%d\n",h);
     System.out.printf("%d nota(s) de R$ 100,00\n",(h/100));
     h = h%100;
      System.out.printf("%d nota(s) de R$ 50,00\n",(h/50));
      h = h%50;
      System.out.printf("%d nota(s) de R$ 20,00\n",(h/20));
      h = h%20;
       System.out.printf("%d nota(s) de R$ 10,00\n",(h/10));
       h = h%10;
       System.out.printf("%d nota(s) de R$ 5,00\n",(h/5));
       h = h%5;
        System.out.printf("%d nota(s) de R$ 2,00\n",(h/2));
       h = h%2;
       System.out.printf("%d nota(s) de R$ 1,00\n",(h/1));
     
 
    }
 
}