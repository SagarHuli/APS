import java.io.*;
import java.util.*;
public class HelloWorld{

     public static void main(String []args){
       // System.out.println("Hello World");
       Scanner scan = new Scanner(System.in);
       String sub  = scan.next();
       String str = scan.next();
       int sublen = sub.length()+1;
       int strl = str.length()+1;
       int [][] mat = new int[sublen][strl];
       for(int i=0;i<sublen-1;i++)
       {
           for(int j=0;j<strl-1;j++)
           {
               if(sub.charAt(i)==str.charAt(j))
                {
                    mat[i+1][j+1] = mat[i][j]+1;
                }
                else
                {
                    mat[i+1][j+1] = Math.max(mat[i+1][j],mat[i][j+1]);
                }
                //System.out.print(mat[i][j]+" ");
           }
          // System.out.print("\n");
       }
      
       for(int i=0;i<sublen;i++)
       {
           for(int j=0;j<strl;j++)
           {
               System.out.print(mat[i][j]+" ");
           }
           System.out.print("\n");
       }
       
     }
}