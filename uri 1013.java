import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args)  {
 
       Scanner input = new Scanner(System.in);
       int a,b,c,d,e;
       a =input.nextInt();
       b =input.nextInt();
       c =input.nextInt();
       
       d = (a+b+Math.abs(a-b))/2;
       e = (d+c+Math.abs(d-c))/2;
       
       System.out.printf("%d eh o maior\n",e);
       
       
       
       
       
    }
 
}