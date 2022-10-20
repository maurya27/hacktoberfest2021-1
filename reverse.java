public class Reverse
{
public static void Reverse_Array(int num[]) {
    int first = 0, last = num.length - 1;
     // Swap numbers
     while(first < last)
     {
        int tmp = num[last];
        num[last] = num[first];
        num[first] = tmp;

        first ++;
        last --;
     }
    }
    public static void main(String[] args) {
        int num[]={2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        Reverse_Array(num); //Invoking method
        //This for loop is to print reverse of array num[], NOTE: As call by reference applies for arrays; any changes made in method reflects even in main method.
        for (int i=0; i<num.length; i++)
        {
            System.out.print(num[i]+" ");
        }
        System.out.println();
    }
    
}
