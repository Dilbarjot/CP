package CF26;

import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

public class B {
  public static void main(String[] args) throws IOException {
    Reader r = new Reader();
    String line = r.readLine();
    r.close();
    int length = line.length(), ans = 0, br = 0;
    for (int i = 0; i < length; i++) {
      char ch = line.charAt(i);
      if (ch == '(')
        br++;
      else {
        br--;
        if (br >= 0) {
          ans++;
        }
      }
    }
    System.out.println(ans * 2);
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