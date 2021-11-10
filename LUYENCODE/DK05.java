import java.lang.Math;
import java.util.Scanner;

public class DK05{
    public static void main(String[] args){
    	Scanner input = new Scanner(System.in);
    	long n = input.nextLong();
    	int can = (int)Math.sqrt(n);
    	if(can*can==n){
    		System.out.print("YES");
    	}else {
    		System.out.print("NO");
    	}
    }
}