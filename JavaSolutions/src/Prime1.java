import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

/**
 * https://www.spoj.com/problems/PRIME1/
 */
public class Prime1 {
  private static void generatePrimes(int x, int y) {
    boolean prime = true;
    if (x == 1) x++;
    for (; x <= y; x++) {
      if (x % 2 != 0) {
        int i;
        int limit = (int) Math.ceil(Math.sqrt(x));
        for (i = 2; i <= limit; i++) {
          if (x % i == 0) {
            prime = false;
          }
        }
        if (prime) {
          System.out.println(x);
        }
      }
      if (x == 2)
        System.out.println(x);
    }
  }

  public static void main(String[] args) throws IOException {
    Reader r = new Reader();
    int n = r.nextInt();
    int data[][] = new int[n][2];
    for (int i = 0; i < n; i++) {
      data[i][0] = r.nextInt();
      data[i][1] = r.nextInt();
    }
    for (int i = 0; i < n; i++) {
      generatePrimes(data[i][0], data[i][1]);
    }
  }

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

    public Reader(String file_name) throws IOException {
      din = new DataInputStream(new FileInputStream(file_name));
      buffer = new byte[BUFFER_SIZE];
      bufferPointer = bytesRead = 0;
    }

    public String readLine() throws IOException {
      byte[] buf = new byte[64]; // line length
      int cnt = 0, c;
      while ((c = read()) != -1) {
        if (c == '\n')
          break;
        buf[cnt++] = (byte) c;
      }
      return new String(buf, 0, cnt);
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

    public long nextLong() throws IOException {
      long ret = 0;
      byte c = read();
      while (c <= ' ')
        c = read();
      boolean neg = (c == '-');
      if (neg)
        c = read();
      do {
        ret = ret * 10 + c - '0';
      }
      while ((c = read()) >= '0' && c <= '9');
      if (neg)
        return -ret;
      return ret;
    }

    public double nextDouble() throws IOException {
      double ret = 0, div = 1;
      byte c = read();
      while (c <= ' ')
        c = read();
      boolean neg = (c == '-');
      if (neg)
        c = read();

      do {
        ret = ret * 10 + c - '0';
      }
      while ((c = read()) >= '0' && c <= '9');

      if (c == '.') {
        while ((c = read()) >= '0' && c <= '9') {
          ret += (c - '0') / (div *= 10);
        }
      }

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
