import java.util.Scanner;

class selection{
	public static void main(String []args){
		int size,min_idx;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the size of the array");
		size =sc.nextInt();
		int arr[] = new int[size];
		for(int i=0;i<size;i++){
			arr[i] = sc.nextInt();
		}
		for(int i=0;i<size;i++){
			System.out.print(arr[i] + " ");
		}
		System.out.println(" ");
			for(int i=0;i<size;i++){
				min_idx=i;
				for(int j=i+1;j<size;j++){
					if(arr[j]<arr[min_idx]){
						min_idx = j;
					}
                    int temp;
                    temp = arr[min_idx];
                    arr[min_idx] = arr[i];
                    arr[i] = temp;
				}
			}
		for(int i=0;i<size;i++){
			System.out.print(arr[i] + " ");
		}	
	}
}