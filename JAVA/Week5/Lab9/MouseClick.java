import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class NameDisplayOnClick extends JFrame {
    public NameDisplayOnClick() {
        setTitle("Name Display On Click");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        JLabel nameLabel = new JLabel("Click Here!");
        nameLabel.setFont(new Font("Arial", Font.PLAIN, 24));
        nameLabel.setForeground(Color.BLUE);
        nameLabel.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                nameLabel.setText("Shaswat Satyam");
            }
        });
        panel.add(nameLabel);
        getContentPane().add(panel);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            NameDisplayOnClick demo = new NameDisplayOnClick();
            demo.setVisible(true);
        });
    }
}
