import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
        int A,B,C,D,E;
        A = input.nextInt();
        B = input.nextInt();
        C = input.nextInt();
        D = input.nextInt();
        E = (A*B)-(C*D);
        System.out.println("DIFERENCA = " +E);
    }
 
}