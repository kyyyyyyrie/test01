package edu.neuq.UI;

import edu.neuq.Handler.delAction;
import edu.neuq.课程.Lesson;

import javax.swing.*;

public class delMenu extends JFrame {
    public JFrame jf=new JFrame("删除");
    public int width=getToolkit().getScreenSize().width;
    public int height=getToolkit().getScreenSize().height;
    public JLabel jl1=new JLabel("清输入您要删除的课程的编号: ");
    public JLabel jl2=new JLabel();
    public JButton delBtn=new JButton("查询");
    public JButton bBtn =new JButton("返回");
    public JButton dBtn=new JButton("确认删除");
    public JTextField jt1=new JTextField(15);
    delAction dac;
    public delMenu() {}
    public delMenu(Lesson l1) {
        dac=new delAction(this,l1);
        bBtn.addActionListener(dac);
        delBtn.addActionListener(dac);
        dBtn.addActionListener(dac);
        Box big=Box.createVerticalBox();
        Box one=Box.createHorizontalBox();
        Box two=Box.createHorizontalBox();
        Box three=Box.createHorizontalBox();
        one.add(jl1);
        one.add(jt1);
        one.add(delBtn);
        two.add(bBtn);
        two.add(Box.createHorizontalStrut(50));
        two.add(dBtn);
        three.add(jl2);
        big.add(Box.createVerticalStrut(50));
        big.add(one);
        big.add(Box.createVerticalStrut(30));
        big.add(three);
        big.add(Box.createVerticalStrut(50));
        big.add(two);
        big.add(Box.createVerticalStrut(100));

        jf.add(big);
        jf.setBounds(width/2-250,height/2-150,500,300);
        jf.setVisible(false);
    }
}
