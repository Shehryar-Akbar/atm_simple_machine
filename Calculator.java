import java.util.Scanner;
public class Calculator
{
	public static void main(String[] fst)
	{
		System.out.println("This is my first program ever in java");
		
		start:
		System.out.println("This is my first program ever in java");
		System.out.println("1 for adding the numbers numbers");
		System.out.println("2 for multiplying the numbers");
		System.out.println("3 for dividing the numbers");
		System.out.println("4 for subtracting the two numbers");
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		
		switch(a)
		{
			case 1:
			{
				System.out.println("Enter the numbers");
				int n1=sc.nextInt();
				int n2=sc.nextInt();
				int res1=n1+n2;
				System.out.println("The result of the numbers is "+res1);
				System.out.println("press 1 to go back to the top or 0 to exit");
				break;
				
			}
			case 2:
			{
				System.out.println("Enter the numbers");
				int n3=sc.nextInt();
				int n4=sc.nextInt();
				int res2=n3*n4;
				System.out.println("the result of the numbers is "+res2);
				System.out.println("press 1 to go back to the top or 0 to exit");
				break;
				
			}
			case 3:
			{
				System.out.println("Enter the numbers");
				int n5=sc.nextInt();
				int n6=sc.nextInt();
				int res3=n5/n6;
				System.out.println("The result of the numbers is "+res3);
				System.out.println("press 1 to go back to the top or 0 to exit");
				break;
				
			}
			case 4:
			{
				System.out.println("Enter the numbers");
				int n7=sc.nextInt();
				int n8=sc.nextInt();
				int res4=n7-n8;
				System.out.println("the result of the numbers is "+res4);
				System.out.println("press 1 to go back to the top or 0 to exit");
				break;
			}
		}
		
	}
}