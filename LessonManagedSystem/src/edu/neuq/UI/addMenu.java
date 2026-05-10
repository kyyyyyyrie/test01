package edu.neuq.UI;


import edu.neuq.Handler.addAction;
import edu.neuq.课程.Lesson;

import javax.swing.*;

public class addMenu extends JFrame {
    public JFrame jf=new JFrame("添加课程");
    public int width= getToolkit().getScreenSize().width;
    public int height= getToolkit().getScreenSize().height;

    public Box big=Box.createVerticalBox();
    public Box one=Box.createHorizontalBox();
    public Box two=Box.createHorizontalBox();
    public Box three=Box.createHorizontalBox();
    public Box four=Box.createHorizontalBox();
    public Box five=Box.createHorizontalBox();
    public Box six=Box.createHorizontalBox();

    public JTextField jf1=new JTextField(15);
    public JTextField jf2=new JTextField(15);
    public JTextField jf3=new JTextField(15);
    public JTextField jf4=new JTextField(15);
    public JTextField jf5=new JTextField(15);

    public JButton bBtn=new JButton("返回");
    public JButton yesBtn=new JButton("确定");
    addAction adda;
    public addMenu(){};
    public addMenu(Lesson l1) {
        adda=new addAction(this,l1);
        bBtn.addActionListener(adda);
        yesBtn.addActionListener(adda);
        jf.setBounds(width/2-250,height/2-150,700,500);
        JLabel jl1=new JLabel("课程名称:");
        JLabel jl2=new JLabel("课程编号:");
        JLabel jl3=new JLabel("课程类别:");
        JLabel jl4=new JLabel("开课年级:");
        JLabel jl5=new JLabel("老师姓名:");
        one.add(jl1);
        one.add(jf1);
        two.add(jl2);
        two.add(jf2);
        three.add(jl3);
        three.add(jf3);
        four.add(jl4);
        four.add(jf4);
        five.add(jl5);
        five.add(jf5);
        six.add(bBtn);
        six.add(Box.createHorizontalStrut(100));
        six.add(yesBtn);
        big.add(Box.createVerticalStrut(70));
        big.add(one);
        big.add(Box.createVerticalStrut(30));
        big.add(two);
        big.add(Box.createVerticalStrut(30));
        big.add(three);
        big.add(Box.createVerticalStrut(30));
        big.add(four);
        big.add(Box.createVerticalStrut(30));
        big.add(five);
        big.add(Box.createVerticalStrut(30));
        big.add(six);
        big.add(Box.createVerticalStrut(70));
        jf.add(big);
        jf.setVisible(false);
    }
}
