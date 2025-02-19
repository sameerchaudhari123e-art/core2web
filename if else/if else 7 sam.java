import java.util.*;
class calender{
public static void main(String[] args){
       Scanner scanner= new Scanner(System.in);
       System.out.println("enter month number");
       int x= scanner.nextInt();
       scanner.close();
       if(x==1){
       System.out.println("January");
        }else if(x==12){
       System.out.println("December");
}else{
    System.out.println("invalid month");
}
}
}


