package unknown;
import java.awt.*;  
import java.awt.event.*;  

public class SimpleLabelAWT {  
    public static void main(String[] args) {  
        // Create a frame
        Frame frame = new Frame("AWT Label Example");  

        // Create a label
        Label label = new Label("Hello, this is a label!");  
        label.setBounds(50, 100, 200, 30);  

        // Add label to the frame
        frame.add(label);  

        // Set frame size, layout, and visibility
        frame.setSize(300, 200);  
        frame.setLayout(null);  
        frame.setVisible(true);  

        // Close the frame on window close
        frame.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                frame.dispose();
            }
        });
    }  
}
