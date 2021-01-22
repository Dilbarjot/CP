import java.io.DataInputStream;
import java.io.IOException;

public class FD {
  public static void main(String[] args) throws IOException {
    Reader r = new Reader();
    int tt = r.nextInt();
    while (tt > 0) {
      int n = r.nextInt();
      int sum = 0, ones = 0, twos = 0, x;
      while (n > 0) {
        x = r.nextInt();
        sum += x;
        if ((x % 2 == 0)) {
          twos++;
        } else {
          ones++;
        }
        n--;
      }

      if (sum % 2 == 0) {
        if (twos % 2 == 0) {
          System.out.println("YES");
        } else {
          int two_s_sum = twos * 2;
          int one_s_sum = ones;
          int diff;
          if (two_s_sum > one_s_sum) {
            diff = two_s_sum - one_s_sum;
            int values_needed = diff / 2;
            int two_s_needed = 0, one_s_needed = 0;
            if (twos > ones) {
              two_s_needed = values_needed / 2;
            } else {
              one_s_needed = values_needed / 2;
            }
            int left_val = (twos - two_s_needed) * 2;
            int right_val = (two_s_needed) * 2;
            if (left_val == right_val && right_val == sum / 2) {
              System.out.println("YES");
            } else System.out.println("NO");
          } else if (one_s_sum > two_s_sum) {
            diff = one_s_sum - two_s_sum;
            int ones_needed = diff / 2;
            int left_val = two_s_sum + ones_needed;
            int right_val = one_s_sum - ones_needed;
            if (left_val == right_val && right_val == sum / 2) {
              System.out.println("YES");
            } else System.out.println("NO");
          } else System.out.println("YES");
        }
      } else {
        System.out.println("NO");
      }
      tt--;
    }
    r.close();
  }

  //from geeksforgeeks
  public static class Reader {
    final private int BUFFER_SIZE = 1 << 16;
    private DataInputStream din;
    private byte[] buffer;
    private int bufferPointer, bytesRead;

    public Reader() {
      din = new DataInputStream(System.in);
      buffer = new byte[BUFFER_SIZE];
      bufferPointer = bytesRead = 0;
    }

    public int nextInt() throws IOException {
      int ret = 0;
      byte c = read();
      while (c <= ' ')
        c = read();
      boolean neg = (c == '-');
      if (neg)
        c = read();
      do {
        ret = ret * 10 + c - '0';
      } while ((c = read()) >= '0' && c <= '9');

      if (neg)
        return -ret;
      return ret;
    }

    private void fillBuffer() throws IOException {
      bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
      if (bytesRead == -1)
        buffer[0] = -1;
    }

    private byte read() throws IOException {
      if (bufferPointer == bytesRead)
        fillBuffer();
      return buffer[bufferPointer++];
    }

    public void close() throws IOException {
      if (din == null)
        return;
      din.close();
    }
  }

}
