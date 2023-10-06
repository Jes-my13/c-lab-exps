import java.util.Scanner;
class countArray{  
    public static void main(String args[]){  
     System.out.println("name: jeslyn");
     System.out.println("roll no: 40");
     int n,counteven=0,countodd=0,countzero=0,i;
     int []numbers=new int[20];
     Scanner sc = new Scanner(System.in);
     System.out.println("enter number of elements");
     n=sc.nextInt();
   System.out.println("enter elements");
    for(i=0;i<n;i++)
     { numbers[i]=sc.nextInt();}
    for(i=0;i<n;i++)
     { if(numbers[i]%2==0)
       { counteven++;}
      else
     { countodd++;}
      if(numbers[i]==0)
       { countzero++;}}  
    System.out.println("number of even numbers = "+counteven);
    System.out.println("number of odd numbers = "+countodd);
    System.out.println("number of zeroes = "+countzero);
    }
    
}
