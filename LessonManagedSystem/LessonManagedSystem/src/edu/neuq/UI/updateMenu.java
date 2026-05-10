package edu.neuq.UI;

import edu.neuq.Handler.updateAction;
import edu.neuq.课程.Lesson;

import javax.swing.*;

public class updateMenu extends JFrame {
    public int width=getToolkit().getScreenSize().width;
    public int height=getToolkit().getScreenSize().height;

    public JFrame jf= new JFrame("修改");
    public JButton bBtn=new JButton("返回");
    public JButton upBtn=new JButton("确认修改");
    public JButton serBtn=new JButton("查询");

    public JLabel jl1=new JLabel("输入您要修改的课程的编号:");
    public JLabel jl2=new JLabel("");
    public JLabel jl3=new JLabel("");
    public JLabel jl4=new JLabel("");
    public JLabel jl5=new JLabel("");
    public JLabel jl6=new JLabel("");
    public JLabel jl01=new JLabel("您要修改为:");
    public JLabel jl02=new JLabel("您要修改为:");
    public JLabel jl03=new JLabel("您要修改为:");
    public JLabel jl04=new JLabel("您要修改为:");
    public JLabel jl05 =new JLabel("您要修改为:");

    public JTextField jt1=new JTextField(15);
    public JTextField jt2=new JTextField(15);
    public JTextField jt3=new JTextField(15);
    public JTextField jt4=new JTextField(15);
    public JTextField jt5=new JTextField(15);
    public JTextField jt6=new JTextField(15);

    public Box big=Box.createVerticalBox();
    public Box one=Box.createHorizontalBox();
    public Box two=Box.createHorizontalBox();
    public Box three=Box.createHorizontalBox();
    public Box four=Box.createHorizontalBox();
    public Box five=Box.createHorizontalBox();
    public Box six=Box.createHorizontalBox();
    public Box seven=Box.createHorizontalBox();
updateAction uda;
public updateMenu(){}
    public updateMenu(Lesson l1) {
        uda=new updateAction(this,l1);
        bBtn.addActionListener(uda);
        upBtn.addActionListener(uda);
        serBtn.addActionListener(uda);
        one.add(jl1);
        one.add(jt1);
        one.add(serBtn);
        two.add(jl2);
        two.add(Box.createHorizontalStrut(10));
        two.add(jl01);
        two.add(jt2);
        three.add(jl3);
        three.add(Box.createHorizontalStrut(10));
        three.add(jl02);
        three.add(jt3);
        four.add(jl4);
        four.add(Box.createHorizontalStrut(10));
        four.add(jl03);
        four.add(jt4);
        five.add(jl5);
        five.add(Box.createHorizontalStrut(10));
        five.add(jl04);
        five.add(jt5);
        six.add(jl6);
        six.add(Box.createHorizontalStrut(10));
        six.add(jl05);
        six.add(jt6);
        seven.add(bBtn);
        seven.add(Box.createHorizontalStrut(20));
        seven.add(upBtn);
        big.add(Box.createVerticalStrut(50));
        big.add(one);
        big.add(Box.createVerticalStrut(100));
        big.add(two);
        big.add(Box.createVerticalStrut(20));
        big.add(three);
        big.add(Box.createVerticalStrut(20));
        big.add(four);
        big.add(Box.createVerticalStrut(20));
        big.add(five);
        big.add(Box.createVerticalStrut(20));
        big.add(six);
        big.add(Box.createVerticalStrut(20));
        big.add(seven);
        big.add(Box.createVerticalStrut(100));
        two.setVisible(false);
        three.setVisible(false);
        four.setVisible(false);
        five.setVisible(false);
        six.setVisible(false);
        jf.add(big);
        jf.setBounds(width/2-200,height/2-250,400,500);
        jf.setVisible(false);
    }
}
