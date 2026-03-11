
import java.io.FileWriter;
import java.io.IOException;

public class W_F {
    public static void main(String[] args) {

        try {
            FileWriter write = new FileWriter(
                "GithHub Connect C code\\olddddddddddd\\Old Code\\Write.txt"
            );

            write.write("Rose are Red !! ZIDAN\n o nunupakkhhii!!");
            write.close();

            System.out.println("writing is done.");
        }
        catch (IOException e) {
            System.out.println("Something error!");
            e.printStackTrace();
        }
    }
}
