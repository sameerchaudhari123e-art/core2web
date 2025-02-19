import java.util.*;
class character{
public static void main(String[] args){
      Scanner scanner= new Scanner(System.in);
      System.out.println("enter the number");
      int x= scanner.nextInt();
      scanner.close();
if(x%3==0&&x%7==0){
System.out.println(x + " is div by 3&7");
}else{ 
System.out.println(x + " is not div by 3&7");
}
}
}
