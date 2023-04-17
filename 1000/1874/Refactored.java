import java.util.*;

public class Refactored {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int inputLength = sc.nextInt(); 
        int temp = 0;
        int max = 0;
        StringBuilder result = new StringBuilder();
        // String answer = "";

        Stack<Integer> stack = new Stack<>();
        Stack<Integer> targetStack = new Stack<>();

        for(int i = 0; i < inputLength; i++){
            temp = sc.nextInt();

            if(temp > max){
                for(int j = max + 1; j <= temp; j++){
                    stack.push(j);
                    // answer += "+";
                    result.append("+");
                }
                max = temp;
            }
            else{
                if(stack.peek().intValue()!= temp){
                    System.out.println("NO");
                    break;
                }
            }
            targetStack.push(stack.pop());
            // answer += "-";
            result.append("-");

        }

        for(int i = 0; i < result.length(); i++){
            System.out.println(result.charAt(i));
        }
        
    }
}
