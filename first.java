
import java.util.Scanner;
public class first
{
private static final String Sout = null;

public static void main(String[] args)
  {
	
	Scanner sc=new Scanner(System.in);
	System.out.println("small size pizza (small)");
	System.out.println("medium size pizza(medium)");
	System.out.println("large size pizza(large)");
	System.out.println("monster size pizza(monster)");
	System.out.println("select a model:");
	String model=sc.next();
	int i,coc=0,ice_cream=0,brownie=0;
	int amount;
	int s=250;
	int m=350;
	int l=400;
	int M=500;
	 
	
	switch (model)
	{
	   
		  case "small":
			  
		   Scanner obj=new Scanner(System.in);
		   System.out.println("enter your quanity of pizza::");
		   int q=obj.nextInt();
			if(q>=4)
			{
			  for(i=q;i>0;i--) 
			  {
				  if(i%4==0)
				  {
			        coc++;
				  }
			    
			  }
			  
	 	     }
			   amount=s*q;
			System.out.println("your total amount  is %d::"+amount);
			System.out.println("cocacola free"+coc);
		    break;
		    
		  case "medium":
			  Scanner ob=new Scanner(System.in);
			  System.out.println("enter your quantity::");
			  int qu=ob.nextInt();
			  if(qu>=3) 
			  {
				  for(i=qu;i>0;i--) 
				  {
					  if(i%3==0)
					  {
						  ice_cream++;
					  }
				  }
			  }
			  amount=m*qu;
			  System.out.println("your total amount is %d::"+amount);
			  System.out.println("ice cream free"+ice_cream);
			  break;
			  
		  case "large":
			  Scanner se=new Scanner(System.in);
			  System.out.println("enter your quanity of pizza::");
			  int quu=se.nextInt();
			  if(quu>2) 
			  {
				  for(i=quu;i>0;i--)
				  {
					  if(i%2==0)
					  {
						  coc++;
						  ice_cream++;
					  }
				  }
				  
			  }
			  amount=l*quu;
			  System.out.println("your total amount is %d::"+amount);
			  System.out.println("coc free"+coc);
			  System.out.println("ice_cream"+ice_cream);
			  break;
			
		  case "monster":
			  Scanner ser= new Scanner(System.in);
			  System.out.println("enter your quanity of pizza::");
			  int qe=ser.nextInt();
			  if(qe>1) 
			  {
				  for(i=qe;i>0;i--)
				  {
					  if(qe%1==0)
					  {
						  coc++;
						  ice_cream++;
						  brownie++;
					  }
				  }
				  
			  }
			   amount=M*qe;
			   System.out.println("your total amount is::"+amount);
			   System.out.println(":500 ml coc free"+coc);
			   System.out.println("ice_cream free:"+ice_cream);
			   break;
			
	   }
			
	
	
  }
}
