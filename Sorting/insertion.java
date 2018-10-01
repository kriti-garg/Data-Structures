import java.util.Scanner;
class insertion{
		public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		int num,size,key,i;
		num = sc.nextInt();
		int arr[] = new int[num];
		for(i=0;i<num;i++){
			arr[i] = sc.nextInt();
		}
		for(int j=1;j<arr.length;j++) {
			key = arr[j];
			i=j-1;
			while(i>=0 && arr[i]>key) {
				arr[i+1]=arr[i];
				i=i-1;
				arr[i+1] = key;
			}
		}
		for(int in=0;in<num;in++) {
			System.out.print(arr[in] + " ");
		}
		sc.close();
	}
}