import java.util.Scanner;
public class Main
{
	public static void main(String []args)
	{
  Scanner lex = new Scanner(System.in);
 System.out.print("Input  grade in Intermediate Programming : ");
    int a = lex.nextInt();
 System.out.print("Input  grade in Rhythmic Activities : ");
    int b = lex.nextInt();
 System.out.print("Input  grade in Web Systems : ");
    int c = lex.nextInt();
 System.out.print("Input  grade in College Algebra : ");
    int d = lex.nextInt();
 System.out.print("Input  grade in Contemporary World : ");
    int e = lex.nextInt();
		
  int f, g, h, i, j, average;

  average = (a + b + c + d + e) / 3;
  

  System.out.println("Your average is " + average); 		 
		
		
	}
}
