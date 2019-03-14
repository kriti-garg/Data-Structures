import java.util.*;
public class CoinChange{
    static int getWays(int num,int[] coins){
        int[] ways = new int[num+1];
        ways[0] = 1;
        for(int i=0;i<coins.length;i++){
            for(int j=0;j<ways.length;j++){
                if(coins[i]<=j)
                ways[j] = ways[j] + ways[j-coins[i]];
            }
        }
        return ways[num];
    }
    static void printArray(int[] coins){
        for(int k:coins)
        System.out.println(k);
    }
    public static void main(String[] args){
        int[] coins = {1,5,10};
        System.out.println("Array is:");
        printArray(coins);
        System.out.println("ways are:");
        System.out.println(getWays(12, coins));
    }
}