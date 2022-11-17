public class Main {
	
	private static int SelfNumber(int n) {
		int Dn = n;				// Dn: 생성자, n: 연산의 대상
		while (n!=0) {			// n이 0이 되면 끝난다
			Dn = Dn + n % 10;	// 나머지 : 일의 자리 숫자를 구함
			n = n / 10;			// 몫 : n의 길이를 줄임
		}
		return Dn;
	}
	
	public static void main(String[] args) {
		
		boolean[] SelfNumber_array = new boolean[10001]; // boolean 배열 선언
		
		for (int i=0; i<10000; i++) {
			int Dn = SelfNumber(i);						// Dn = 셀프넘버
			if (Dn<=10000) SelfNumber_array[Dn]=true;	// 셀프넘버를 true로 저장
		}
			
		for (int i=1; i<=10000; i++) {
			if(!SelfNumber_array[i]) System.out.println(i); // !셀프넘버 출력
		}
	}
}