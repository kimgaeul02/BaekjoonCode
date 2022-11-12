import java.util.Scanner;
public class Main {
	static long num;
	static long sum;
	static int cnt;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		num = sc.nextLong();
		cnt=0;
		
		while(true) {
			cnt++;
			sum += cnt;
			if(sum>num) {cnt--; break;}
		}
		System.out.println(cnt);
	}
}