import java.util.Scanner;

public class ScannerMethods {
    public static void main(String[] args) {
        int a,b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        a = s.nextInt();
        b = s.nextInt();
        System.out.println("Sum is: "+(a+b));
        s.close();  // To avoid Resource leak.
    }
}

/*
Method	        Description
nextInt()	    reads an int value from the user
nextFloat()	    reads a float value form the user
nextBoolean()	reads a boolean value from the user
nextLine()	    reads a line of text from the user
next()	        reads a word from the user
nextByte()	    reads a byte value from the user
nextDouble()	reads a double value from the user
nextShort()	    reads a short value from the user
nextLong()	    reads a long value from the user

*/ 
