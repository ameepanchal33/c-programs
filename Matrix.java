import j
ava.util*
 public class Matrix{
    Scanner read=new scanner(System.in);
    int size=2;
    int m1[][]=new int [size][size];
    int m2[][]=new int [size][size];
    System.out.println("enter first the matrix value:");
    for(int i=0;i<size;i++)
   {
      for(j=0;j<size;j++)
      {
        System.out.println("["+(i+1)+","+(j+1)+"]" value:");
        m1[i][j]=read.nextInt()
      }
   }
     System.out.println("enter second the matrix value:");
      for(int i=0;i<size;i++)
   {
      for(j=0;j<size;j++)
      {
        System.out.println("["+(i+1)+","+(j+1)+"]" value:");
        m2[i][j]=read.nextInt();
   }
  
   System.out.println("addition");
   for(int i=0; i<size; i++){
   for(int j=0; j<size; j++){
     System.out.println(m1[i][j]+m2[i][j]+"");
   }
   System.out.println();
 }

    System.out.println("subtracion");
   for(int i=0; i<size; i++){
   for(int j=0; j<size; j++){
     System.out.println(m1[i][j]-m2[i][j]+"");
   }
   System.out.println();
  }

    System.out.println("multiplication");
   for(int i=0; i<size; i++){
   for(int j=0; j<size; j++){
     System.out.println(m1[i][j]*m2[i][j]+"");
   }
   System.out.println();
  }
}