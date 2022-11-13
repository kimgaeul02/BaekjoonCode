import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		String[][] arr = new String[num][2];
		
		for(int i=0;i<num;i++) {
			arr[i][0]=sc.next();
			arr[i][1]=sc.next();
		}
		
		// 2차원 배열: Array.sort 사용 불가능 => Comparator 이용
		// 첫번째 원소를 기준으로 정렬
		
		Arrays.sort(arr, new Comparator<String[]>() {
			@Override
			public int compare(String[] N1, String[] N2) {
				return Integer.parseInt(N1[0])-Integer.parseInt(N2[0]);
				// 반대는 내림차순: N2[0]-N1[0]
			}
		});
		
		for(int i=0;i<num;i++) {
			System.out.println(arr[i][0]+" "+arr[i][1]);
		}
		
	}
}
