import java.util.LinkedList;
import java.util.List;
import java.util.Stack;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Stack<String> stack = new Stack<>();        
        String inputString = "";
        Boolean flag = true;
        
        //해결해야 하는 문제 --> input value 를 전체를 가져와서 . 으로 split 한다. split 이후에는 괄호가 나올때 push
       
        String temp = "";

        while(br.ready()) {
            temp = br.readLine();
            inputString += temp;
        }

        
        System.out.println(inputString);
        
        String[] strArr = inputString.split(".");

        System.out.println("start check");

        for(int i = 0; i < strArr.length; i++){

            for(int j = 0; j < strArr[i].length(); j++){
                if(strArr[i].charAt(j) == '('){
                    stack.push("(");
                }
                else if(strArr[i].charAt(j) == '['){
                    stack.push("[");
                }
                else if(strArr[i].charAt(j) == ')'){
                    if(stack.peek() == "("){
                        stack.pop();
                    }
                    else
                        flag = false;
                    
                }
                else if(strArr[i].charAt(j) == ']'){
                    if(stack.peek() == "["){
                        stack.pop();
                    }
                    else
                        flag = false;
                }
            }
        }
        if(flag)
            System.out.println("YES");
        else
            System.out.println("NO");
        
        // 마침표를 찍는순간 남아있는 값이 있다면 NO, stack.empty == true 일 경우에는 TRUE;


    }
}
