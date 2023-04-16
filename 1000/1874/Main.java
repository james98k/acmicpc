import java.util.*;

// 8
// 4
// 3
// 6
// 8
// 7
// 5
// 2
// 1

class Main{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int inputLength = sc.nextInt();
        int temp = 0;
        boolean flag = true;
        String answer = "";

        Stack<Integer> stack = new Stack<>();
        Stack<Integer> targetStack = new Stack<>();


        for(int i = 0; i < inputLength; i++){
            temp = sc.nextInt();
            // System.out.println("target");
            // System.out.println(targetStack);
            
            for(int j = 1; j <= temp; j++){
                if(stack.contains(j) || targetStack.contains(j)){
                    continue;
                }

                else{
                    stack.push(j);
                    answer += "+";
                }
                
            }
            if(stack.contains(temp) && stack.peek() != temp){
                // answer = "NO";
                System.out.println("NO");
                flag = false;
                break;
            }
            targetStack.push(stack.pop());
            answer += "-";
            
            // System.out.println("stack");
            // System.out.println(stack);
            
           
        }
        if(flag == true){
            for(int i = 0; i < answer.length(); i++){
                System.out.println(answer.charAt(i));
            }
        }
       
    
    }
}