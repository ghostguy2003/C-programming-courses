public class Kata {
  public static int[] Between(int a, int b) {
    int i;
    int count=0;
    int [] omar=new int[b-a+1];
    for (i=a;i<=b;i++){
      omar[count]=i;
      count++;
    }
    return omar;
  }
}
