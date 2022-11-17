import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		
		long sum = 0; // 예산의 합
		
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt(); // 지방 수
		int[] budget = new int[num];
		
		for(int i=0; i<num; i++) {
			budget[i]=sc.nextInt();
		}
		
		long P = sc.nextInt(); // 가능한 예산
		
		Arrays.sort(budget); // 오름차순
		int max=budget[num-1];
		int min=0;
		int mid=0;
		long tmp=0;
		long answer=0;
		
		for (int j : budget) { // 요청한 예산의 총합
			sum=sum+j;
		}
		
		if(sum<P) {
			System.out.println(max);
			return;
		}
		else {
			while (min <= max) {
	            mid = (min + max) / 2;
	            tmp = 0;
	            
	            for (int money : budget) { // for(변수명:배열)
	                if (money < mid) tmp = tmp + money;
	                else if (money >= mid) tmp = tmp + mid;
	            }
	            
	            if (tmp>P) max=mid-1;
	            else min=mid+1;
	            
	            if (tmp<max) {
	            	break;
	            }
	            
			}
			int total;
            total=(min+max)/2;
            System.out.println(total);
		}
	}
}