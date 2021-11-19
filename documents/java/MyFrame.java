import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

public class MyFrame {
    public static void main(String[] args) {
        java.awt.Frame frame = new java.awt.Frame("MyWindow");
        frame.setSize(500, 500);
        Panel panel = new Panel(new BorderLayout());
        Checkbox checkbox = new Checkbox("CheckBox");
        Checkbox checkbox1 = new Checkbox("CheckBox1");
        Checkbox checkbox2 = new Checkbox("CheckBox2");
        Checkbox checkbox3 = new Checkbox("CheckBox3");
        Panel panelCenter = new Panel(new BorderLayout());
        panelCenter.setBackground(Color.GRAY);
        panelCenter.add(new JLabel("center"), BorderLayout.NORTH);
        TextField textField = new TextField();
        textField.setBounds(new Rectangle(50, 10));
        panelCenter.add(textField, BorderLayout.CENTER);
        panel.add(checkbox, BorderLayout.WEST);
        panel.add(checkbox1, BorderLayout.NORTH);
        panel.add(checkbox2, BorderLayout.EAST);
        panel.add(checkbox3, BorderLayout.SOUTH);
        panel.add(panelCenter, BorderLayout.CENTER);
        frame.add(panel);
		frame.addWindowListener(new WindowListener() {
            @Override
            public void windowOpened(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowOpened");
            }

            @Override
            public void windowClosing(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowClosing");
                System.exit(0);
            }

            @Override
            public void windowClosed(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowOpened");
            }

            @Override
            public void windowIconified(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowClosed");
            }

            @Override
            public void windowDeiconified(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowDeiconified");
            }

            @Override
            public void windowActivated(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowActivated");
            }

            @Override
            public void windowDeactivated(WindowEvent e) {
                java.io.PrintStream printStream = System.out;
                printStream.println("windowDeactivated");
            }
        });
        frame.setVisible(true);
    }
}
