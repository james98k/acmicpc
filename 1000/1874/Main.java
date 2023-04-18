import java.util.Stack;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;


public class Main {

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder result = new StringBuilder();
        Stack<Integer> stack = new Stack<>();
        Stack<Integer> targetStack = new Stack<>();

        int inputLength = Integer.parseInt(br.readLine());
        int temp = 0;
        int max = 0;
        Boolean flag = true;

        for(int i = 0; i < inputLength; i++){
            temp = Integer.parseInt(br.readLine());

            if(temp > max){
                for(int j = max + 1; j <= temp; j++){
                    stack.push(j);
                    // answer += "+";
                    result.append("+");
                }
                max = temp;
            }
            else{
                
                if(!stack.peek().equals(temp)){
                    System.out.println("NO");
                    flag = false;
                    break;
                }
            }
            targetStack.push(stack.pop());
            // answer += "-";
            result.append("-");

        }

        if(flag == true){
            for(int i = 0; i < result.length(); i++){
                System.out.println(result.charAt(i));
            }
        }
        
        
    }
}
