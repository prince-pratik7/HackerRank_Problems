import java.io.*;
import java.util.*;

class Solution{ 
 	 
 	public static void main(String args[]){ 
 		Scanner in = new Scanner(System.in); 
 		int t = in.nextInt(); 
 		 
 		for(int i=0;i<t;i++){ 
 			int n = in.nextInt(); 
 			int c = in.nextInt(); 
 			int m = in.nextInt(); 
 			 
 			int totalWrappers = n/c; 
 			int wrappersRemaining = totalWrappers; 
 			int ans = totalWrappers; 
 			while(wrappersRemaining>=m){ 
 				ans+=(wrappersRemaining/m); 
 				wrappersRemaining = wrappersRemaining%m + wrappersRemaining/m; 
 			} 
 			 
 			System.out.println(ans); 
 		} 
 		 
 	} 
}