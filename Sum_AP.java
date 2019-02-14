import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner sc= new Scanner(System.in);
    	int a[] = new int[3]; 
    	for(int i=0;i<3;i++)
    	a[i] = sc.nextInt();
    	int q=(2*a[1])+((a[0]-1)*a[2]);
    	int ans=(a[0]*q)/2;
	System.out.println(ans);
	}
}

