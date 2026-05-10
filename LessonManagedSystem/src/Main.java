import edu.neuq.课程.start;
import javax.swing.*;
import java.io.IOException;

public class Main {
public static void main(String[] args) {
    start s=new start();
    try {
        s.play();
    } catch (IOException e) {
        throw new RuntimeException(e);
    }
}
}