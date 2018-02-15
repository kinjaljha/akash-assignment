//COMPLEXITY : O(n)
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        int n = 23,k=0;
        int bn[]=decTobin(n);
        bn = swap_bits(bn);
        n=binTodec(bn);
        System.out.print(n);                

	}
    static int [] swap_bits(int[] bn){
        int temp;
        for(int i=0;i<bn.length;i=i+2){
            temp=bn[i];
            bn[i]=bn[i+1];
            bn[i+1]=temp;
        }
        return bn;
    }
    static int [] decTobin(int n)
    {
        int[] bn = new int[500];
        int i = 0,k=0;
        while (n > 0) 
        {
            bn[i] = n % 2;
            n = n / 2;
            i++;
        }
        //if odd length change it to even by appending a 0
        if(i%2!=0){
            i=i+1;
            bn[i]=0;
        }
        int[] bn1 = new int[i];
        for (int j = i - 1; j >= 0; j--){
            bn1[k]=bn[j];
            k++;
        }
        return bn1;
    }
   static int binTodec(int[] n)
    {
        int dec = 0;
        int base = 1;
        int len = n.length;
        for (int i = len - 1; i >= 0; i--)
        {
            if (n[i] == 0)
            {
                dec += 0 * base;
                base = base * 2;
            }
            else
            {
                dec += 1 * base;
                base = base * 2;
            }
        }
        return dec;
    }
}
