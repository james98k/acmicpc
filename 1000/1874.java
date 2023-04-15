import java.util.*;

class Main{



    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int inputLength = sc.nextInt();
        int temp = 0;
        String answer = "";

        Stack<Integer> stack = new Stack<>();
        Stack<Integer> targetStack = new Stack<>();

        for(int i = 0; i < inputLength; i++){
            temp = sc.nextInt();

            if(!stack.empty() && stack.peek() != temp){
                for(int j = 1; j <= temp; j++){
                    if(!(targetStack.contains(j))){
                        stack.push(j);
                        answer += "+";
                    }   
                }
            }


            
            
            int targetValue = stack.pop();
            targetStack.push(targetValue);
            answer += "-";
        }
        
        System.out.println(answer);
        



    }
}