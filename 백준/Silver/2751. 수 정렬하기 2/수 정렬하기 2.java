import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException{	
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		ArrayList<Integer> list = new ArrayList<>();
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(bf.readLine()); // 입력 1
		for(int i=0;i<N;i++) list.add(Integer.parseInt(bf.readLine())); // 입력 2
		
		Collections.sort(list); // time sort 오름차순 정렬
		
		for(int num:list) sb.append(num).append('\n');
		System.out.println(sb);
	}
}