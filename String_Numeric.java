import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String s=sc.nextLine();
	    boolean flag =true;
	    try{
	        Double d=Double.parseDouble(s);
	    }
	    catch(NumberFormatException e){
	        flag=false;
	    }
	    if(flag)
		System.out.print("yes");
		else
		System.out.print("no");
	}
}
