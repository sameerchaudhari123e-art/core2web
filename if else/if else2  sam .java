import java.util.*;
class evenodd{
public static  void main (String[] args){
       Scanner scanner= new Scanner(System.in);
       System.out.println("enter a number");
       int x=scanner.nextInt();
       scanner.close();
if(x%2==0){
 System.out.println(x + "is even number");
}else{
 System.out.println(x + "is odd number");
}
}
}
