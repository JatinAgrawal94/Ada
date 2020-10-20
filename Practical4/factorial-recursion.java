import java.util.*;
public class Main
{
    public int factorial(int n){
        if(n==1 || n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Main m=new Main();
		int n=sc.nextInt();
		System.out.println(m.factorial(n));
	}
}
