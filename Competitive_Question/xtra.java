// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

class HelloWorld {
    
    static int solve(char[] a,int n,int no_of_visits_in_town_M,int left,int right){
        
        int levels=1;;
        for(int i=1;i<=n;i++){
            if(i>=left && i<=right){
                continue;
            }
            
            else{
                levels++;
            }
        }
        
        return levels;
        
    }
    
    
    public static void main(String[] args) {
        // System.out.println("Hello, World!");
    Scanner sc = new Scanner(System.in);

      int n;
      n = sc.nextInt();
     
     char[] a=new char[n];
     for(int i=1;i<=n+1;i++){
         a[i]=sc.next().charAt(0);
     }
     
     
     int no_of_visits_in_town_M;
     no_of_visits_in_town_M = sc.nextInt();
     
    //  int[] b=new int[no_of_visits_in_town_M];
    //  for(int i=0;i<no_of_visits_in_town_M;i++){
    //      b[i]=0;
    //  }
     
     int integer_2;
     integer_2 = sc.nextInt();
     
     int ans;
     int left,right,count=1;
     while(count!=no_of_visits_in_town_M+1){    //1 4 2 4 3 4
         left = sc.nextInt();
         right = sc.nextInt();
         
         System.out.println(solve(a,n,no_of_visits_in_town_M,left,right));
         
         count++;
     }
     
     
    }
}