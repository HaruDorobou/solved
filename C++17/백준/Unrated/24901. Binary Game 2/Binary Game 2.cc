//; # \u000a import java.util.*;public class Main {public static void main(String args[]) {Scanner sc = new Scanner(System.in);int a;a = sc.nextInt();String s="";for(int i = 0; i<a+1;i++){s=s+Integer.toBinaryString(i) ;}System.out.println(s);}}/*
#if true /*
N=gets 
S='' 
i=0 
while i <= N.to_i do
S+=i.to_s(2).chomp('0b')
i+=1 
end
puts S
=begin
/* */ // \u000a /*
#import<ios>
void recur(int n) {if (n == 0) return;else{recur(n / 2);printf("%d", n % 2);}}
int main() {int n, c = 0;scanf("%d", &n);printf("0");for (int i = 0; i <= n; i++) {recur(c);c++;}}
// */
/* */
// */ import Foundation; var n = Int(readLine()!)!; var R=""; for i in 0...n{R=R+String(i,radix:2);};print(R); // \u000a /*
#endif
/* *//*
=end
#*/