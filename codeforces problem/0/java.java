import java.util.Scanner;

public class java
{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);
        int t ;
        t = input.nextInt();
        
        for(int i =0 ; i<=t;i++)
        {
            String a;
            a = input.nextLine();
            int s = a.length();
            if(s>10)
            {
                System.out.print(a.charAt(0));
                System.out.print(s-2);
                System.out.print(a.charAt(s-1));
                System.out.println();
            }
            else 
            {
                System.out.println(a);
            }
        }
    }
}