import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args)  {
 
        Scanner sc = new Scanner (System.in);
        int n,h;
        double m,salary;
        n = sc.nextInt();
        h = sc.nextInt();
        m = sc.nextDouble();
        salary = h*m;
        System.out.println("NUMBER = "+n);
        System.out.printf("SALARY = U$ %.2f\n",salary);
 
    }
 
}