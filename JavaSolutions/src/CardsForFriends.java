import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

public class CardsForFriends {
  public static void main(String[] args) throws IOException {
    Reader r = new Reader();
    int tt = r.nextInt();
    while (tt > 0) {
      int w = r.nextInt();
      int h = r.nextInt();
      int n = r.nextInt();
      int w_e = 0, h_e = 0, ans = 1;
      if (w % 2 == 0) {
        while (w % 2 == 0) {
          w /= 2;
          w_e++;
        }
        ans = w_e * 2;
      }
      if (h % 2 == 0) {
        while (h % 2 == 0) {
          h /= 2;
          h_e++;
        }
        ans = ans + (h_e * 2);
      }
      if (ans >= n) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
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
