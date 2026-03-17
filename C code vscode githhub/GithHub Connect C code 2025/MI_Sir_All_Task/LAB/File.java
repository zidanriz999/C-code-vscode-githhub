import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class File {
    public static void main(String[] args) {

        String filePath = "C:\\Users\\BM COMPUTERS\\OneDrive\\Desktop\\LAB\\Plm_03Output.txt";
        int lineC = 0;
        int charC = 0;

        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) 
        {
        String line;

        while ((line = reader.readLine()) != null) 
           {
                lineC++;
                charC = charC+line.length();
           }

            System.out.println("Lines: " + lineC);
            System.out.println("Characters: " + charC);

        } 
        catch (IOException e)
        {
            System.out.println("Error file: " + e.getMessage());
        }
        
    }
    
}





