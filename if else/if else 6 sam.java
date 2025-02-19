import java.util.*;
class character{
public static void main(String[] args){
      Scanner scanner= new Scanner(System.in);
      System.out.println("enter the number");
      int x= scanner.nextInt();
      scanner.close();
if(x%2==0&&x%5==0&&x%10==0){
System.out.println(x + " is div by 2,5&10");
}else{ 
System.out.println(x + " is not div by 2,5&10");
}
}
}
