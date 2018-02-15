//COMPLEXITY : O(n) (iterations <= n)
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
    //    Integer [] arr={15,18,2,3,6,12};
    //    Integer [] arr={7,9,11,12,5};
        Integer [] arr={7,9,11,12,15};
        
        int answer = getRotations(arr);
        System.out.println(answer);
	}
	public static int getRotations(Integer [] arr){
	    int min = 0;
	    for(int i=1;i<arr.length;i++){
	        if(arr[i-1]>arr[i]){
                min=i;break;
	        }
	    }
	    return min;
	}
}
