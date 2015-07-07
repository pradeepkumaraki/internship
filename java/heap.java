public static int N;
public static void main(String[] args) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    int n,i,j,temp;
    double sum=0;
    Scanner s = new Scanner(System.in);
    n=s.nextInt();
    int a[] = new int[n];
    int b[] = new int[n];
    double out[] = new double[n];
    for(i=0;i<n;i++){
        a[i]=s.nextInt();
        //insertionsort(a,i);
        if(i>=1){
            temp=a[i];
              j=i-1;
              while((j>=0)&&temp<a[j]){

                    a[j + 1] = a[j];
                    a[j] = temp;

                    j--;
              }
        }
        if(!(i%2==0)){
            sum=(double)(a[i/2]+a[(i+1)/2])/2;
        }
        else
            sum=(double)a[i/2];
        out[i]=sum;
    }
    //for(j=0;j<n;j++)
        //System.out.println(a[j]+"");
    for(i=0;i<n;i++)
        System.out.println(out[i]+"");
}