import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args)  {
 
        Scanner input = new Scanner(System.in);
        int n,y,m,d;
        n = input.nextInt();
        y = n/365;
        n = n%365;
        m = n/30;
        d = n%30;
        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
        
        
    }
 
}