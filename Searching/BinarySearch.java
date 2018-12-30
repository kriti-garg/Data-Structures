import java.util.Scanner;
public class BinarySearch{
	public static int binarysearch(int arr[],int l,int r,int num){
		int mid;
		while(l<=r)
		{
			mid = (l+r)/2;
			if(num==arr[mid])
			{
				return mid;
			}
			if(num>arr[mid])
			{
				l=mid+1;
			}
			else
				r = mid-1;
		}
		return -1;

	}
	public static void main(String[] args){
		Scanner sc =  new Scanner(System.in);
		int size,num;
		System.out.println("Enter the size of the array");
	    size = sc.nextInt();
	    int arr[] = new int[size];
	    for(int i=0;i<size;i++){
	    	arr[i]=sc.nextInt();
	    }
	    for(int i=0;i<size;i++){
	    	System.out.print(arr[i]+" ");
	    }
	    System.out.println("enter the element to be searched?");
	    num = sc.nextInt();
	    int result = binarysearch(arr,0,size-1,num);
	    if(result!=-1)
	    {
		System.out.println("element found at " + result);
	    }
	    else
		System.out.println("element not found");
}
}