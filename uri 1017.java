import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args)  {
        
        Scanner input = new Scanner(System.in);
        
        int x,y;
        double shatchunni;
        
        x = input.nextInt();
        y = input.nextInt();
        
        shatchunni = ((x*y)/12.0);
        
        System.out.printf("%.3f\n",shatchunni);
        
        
    }
 
}