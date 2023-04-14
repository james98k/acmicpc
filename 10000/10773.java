import java.util.*;

class Main {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int length = sc.nextInt();
    
    Stack<Integer> stack = new Stack<>();
    int sum = 0;
    int temp = 0;


    // System.out.println();

    for(int i = 0; i < length; i++){
      temp = sc.nextInt();

      if(temp == 0){
        temp = stack.pop();
        // System.out.println(temp + "has been poped");
      }
      else{
        stack.push(temp);
        // System.out.println(temp +"has been pushed");
      }
      // temp = 0x00;

      // System.out.println(stack[i]);
    }


    int size = stack.size();
    for(int i = 0; i < size; i++){
      temp = stack.pop();
      // System.out.println(temp + "is added");
      sum += temp;      

    }
    System.out.println(sum);
    

    // try {
    
    // } catch (Exception e) {
    //   // TODO: handle exception
    //   return;
    // }
    
    
  }
}
