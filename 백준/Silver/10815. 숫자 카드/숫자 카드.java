import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Main {

	static int[] arr;
	static int[] comp;
	
	public static void main(String[] args) throws IOException{	
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		
		// 입력1. N
		int N=Integer.parseInt(bf.readLine());
		arr = new int[N];
		
		// 입력2. 숫자 카드 내용
		// StringTokenizer 클래스: 특정 문자로 문자열 나눔
		StringTokenizer st=null;
		st=new StringTokenizer(bf.readLine(), " ");
		for(int i=0;i<N;i++) arr[i]=Integer.parseInt(st.nextToken());
		
		// 입력3. M
		int M=Integer.parseInt(bf.readLine());
		Arrays.sort(arr);
		
		// 입력4. 수 내용
		st=new StringTokenizer(bf.readLine(), " ");
		for(int i=0;i<M;i++) {
			int output = BS(Integer.parseInt(st.nextToken()));
			
			if (output != -1) System.out.print(1+" ");
			else System.out.print(0+" ");
		}
	}
	
	private static int BS(int num) { // Binary Search
		int min=0, mid;
		int max=arr.length-1;
		
		while(min<=max) {
			mid=(min+max)/2;
			if(arr[mid]<num) min=mid+1;
			else if(arr[mid]>num) max=mid-1;
			else return mid;
		}
		return -1;
	}
}