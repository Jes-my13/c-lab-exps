import java.util.Scanner;
class Matrix{  
    public static void main(String args[]){  
     System.out.println("name: jeslyn");
     System.out.println("roll no: 40");
     int i,j;
     int [][]a=new int[5][5];
     int [][]b=new int[5][5];
    int [][]c=new int[5][5];
     int [][]tr=new int[5][5];
     Scanner sc = new Scanner(System.in);
     System.out.println("enter number of rows in matrix1");
     int r1=sc.nextInt();
     System.out.println("enter number of columns in matrix1");
     int c1=sc.nextInt();
      System.out.println("enter number of rows in matrix2");
     int r2=sc.nextInt();
     System.out.println("enter number of columns in matrix2");
     int c2=sc.nextInt();
     if(r1==r2 && c1==c2)
       {
     System.out.println("enter elements of matrix1:");
        for(i=0;i<r1;i++)
          { 
            for(j=0;j<c1;j++)
              { a[i][j]=sc.nextInt();}}
     System.out.println("matrix a");
        for(i=0;i<r1;i++)
          { 
            for(j=0;j<c1;j++)
             { System.out.print(a[i][j]+"\t");}
               System.out.print("\n");}
   
    System.out.println("enter elements of matrix2:");
    for(i=0;i<r2;i++)
     { 
        for(j=0;j<c2;j++)
          { b[i][j]=sc.nextInt();}}
   System.out.println("matrix b");
   for(i=0;i<r2;i++)
     { 
        for(j=0;j<c2;j++)
          { System.out.print(b[i][j]+"\t");}
               System.out.println();}
      for(i=0;i<r1;i++)
          { for(j=0;j<c1;j++)
             { c[i][j]=a[i][j]+b[i][j];}}}
System.out.println("matrix sum");
 for(i=0;i<r1;i++)
     { 
        for(j=0;j<c1;j++)
          { System.out.print(c[i][j]+"\t");}
               System.out.println();}
       for(i=0;i<c1;i++)
          { for(j=0;j<r1;j++)
            { tr[i][j]=c[j][i];}}
System.out.println("matrix transpose");
      for(i=0;i<c1;i++)
     { 
        for(j=0;j<r1;j++)
          { System.out.print(tr[i][j]+"\t");}
               System.out.print("\n");}
}}
