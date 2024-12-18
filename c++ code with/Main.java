import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String[] name=new String[10];
        int[] sallary=new int[10];
        int[] ID=new int[10];
        int n;
        System.out.println("Enter the employee work in company");
        n=sc.nextInt();
        System.out.println("Enter the detail of "+n+"employee:-");
        for(int i=0;i<n;i++)
        {
            System.out.println("enter the name of the emplyee:"+(i+1));
            name[i]=sc.next();
            System.out.println("enter the sallary of the emplyee:"+(i+1));
            sallary[i]=sc.nextInt();
            System.out.println("enter the ID of the emplyee:"+(i+1));
            ID[i]=sc.nextInt();
        }
        System.out.println("Emplyee detail is:");

        System.out.println("name:\t"+"sallary\t"+"ID");
        for(int i=0;i<n;i++)
        {
            System.out.print(name[i]+":\t");
            System.out.print(sallary[i]+":\t");
            System.out.print(+ID[i]+":");
            System.out.println("\n");
            
        }

    }
}