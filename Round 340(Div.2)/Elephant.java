import java.util.Scanner;
public class Elephant {
    public static void main(String[] args) {
        int loc;
        Scanner sc = new Scanner(System.in);
        loc = sc.nextInt();
        if(loc<=5)
        {
            System.out.print("1");
        }
        else{
            if(loc%5==0)
            {
                System.out.print(loc/5);
            }
            else if(loc>5)
            {
                System.out.print((loc/5)+1);
            }
        }
    }
    
}