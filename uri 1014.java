import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) {
 
    Scanner input = new Scanner(System.in);
    int x;
    float y,h_hacker;
    
    x = input.nextInt();
    y = input.nextFloat();
    h_hacker = (x/y);
    System.out.printf("%.3f km/l\n",h_hacker);
 
    }
 
}