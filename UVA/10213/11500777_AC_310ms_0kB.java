/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
 public static void main (String[] args) {
  Scanner sc = new Scanner(System.in);
  int nn;
  nn=sc.nextInt();
  sc.nextLine();
 // System.out.println(nn);
  for(int i=0;i<nn;i++){
   String a;
   a=sc.nextLine();
   BigInteger n=new BigInteger(a);
   BigInteger a1=new BigInteger("-1");
   BigInteger a2=new BigInteger("-2");
    //System.out.println(a2);
   BigInteger a3=new BigInteger("-3");
    //System.out.println(a3);
   BigInteger one=new BigInteger("1");
   BigInteger two=new BigInteger("2");
   BigInteger twofour=new BigInteger("24");
   
   BigInteger temp1= new BigInteger("99");
   BigInteger temp2= new BigInteger("99");
   BigInteger temp3= new BigInteger("99");
   BigInteger temp4= new BigInteger("99");
   BigInteger temp5= new BigInteger("99");
   BigInteger temp6= new BigInteger("99");
   
   temp1=n.add(a1);//(n-1)
   temp2=temp1.multiply(n);//n(n-1)
   temp3=temp2.divide(two);//n(n-1)/2
   
   temp4=n.add(a2);//(n-2);
   temp5=n.add(a3);//(n-3)
   temp6=temp4.multiply(temp5);//(n-2)*(n-3)
   temp6=temp6.multiply(temp1);//(n-2)*(n-3)*(n-1)
   temp6=temp6.multiply(n);//n*(n-1)(n-2)(n-3)
   temp6=temp6.divide(twofour);//n*(n-1)(n-2)(n-3)/24
   temp6=temp6.add(one);
   temp6=temp6.add(temp3);
   
   System.out.println(temp6);
   
   
   
  }
  // your code goes here
 }
}