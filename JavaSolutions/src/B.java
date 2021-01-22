import java.io.DataInputStream;
import java.io.IOException;
import java.util.ArrayList;

public class B {
  public static void main(String[] args) throws IOException {
    Reader r = new Reader();
    int n = r.nextInt(), t = n;
    ArrayList<Integer> l = new ArrayList<>();
    while (n > 0) {
      l.add(r.nextInt());
      n--;
    }
    while (n < t) {
      int v = l.get(n), id_1 = l.lastIndexOf(1), id_2 = l.lastIndexOf(2), id_3 = l.lastIndexOf(3), id_t = -1, id_n = -1, num = -1;
      if (v == 1) {
        if (id_3 >= 0 && id_3 != n) {
          l.remove(id_3);
          l.remove(n);
          l.add(n, 4);
        } else if (id_2 >= 0 && id_2 != n) {
          l.remove(id_2);
          l.remove(n);
          l.add(n, 3);
        } else if (id_1 >= 0 && id_1 != n) {
          l.remove(id_1);
          l.remove(n);
          l.add(n, 2);
        }
      } else if (v == 2) {
        if (id_2 >= 0 && id_2 != n) {
          l.remove(id_2);
          l.remove(n);
          l.add(n, 4);
        } else if (id_1 >= 0 && id_1 != n) {
          l.remove(id_1);
          l.remove(n);
          l.add(n, 3);
        }
      } else if (v == 3) {
        if (id_1 >= 0 && id_1 != n) {
          l.remove(id_1);
          l.remove(n);
          l.add(n, 4);
        }
      }
      n++;
      t = l.size();
    }
    System.out.println(l.size());
    r.close();
  }

  //https://www.geeksforgeeks.org/fast-io-in-java-in-competitive-programming/
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
