public class proo{
  public static void main (String []args){
  int n=Integer.parseInt(args[0]);
  int count=0;
  for(int i=2; i<=n; i++)
  {
    if(n%i==0){
      count++;  
  
     }
}
   if(count==1)
{
System.out.println("prime"+n); 

}
   else{

      System.out.println("not prime"+n); 
     }
  
   }
  }