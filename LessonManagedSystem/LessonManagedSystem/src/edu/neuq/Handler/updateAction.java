package edu.neuq.Handler;

import edu.neuq.UI.updateMenu;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

public class updateAction implements ActionListener {
    updateMenu um;
    Lesson l1;
    public updateAction(updateMenu x,Lesson y) {this.um = x;this.l1 = y;}
    @Override
    public void actionPerformed(ActionEvent e) {
        JButton b = (JButton)e.getSource();
        String name = b.getText();
        int i=0;
        if(name.equals("查询")) {
            Boolean isser=false;
            String s=um.jt1.getText();
            for(i=0;i<l1.lenth;++i){
                if(l1.data[i][1].equals(s)){
                    um.two.setVisible(true);
                    um.three.setVisible(true);
                    um.four.setVisible(true);
                    um.five.setVisible(true);
                    um.six.setVisible(true);
                    um.jl2.setText("课程名:"+l1.data[i][0]);
                    um.jl3.setText("编号:"+l1.data[i][1]);
                    um.jl4.setText("类别:"+l1.data[i][2]);
                    um.jl5.setText("年级:"+l1.data[i][3]);
                    um.jl6.setText("老师:"+l1.data[i][4]);
                    isser=true;
                }
            } if(!isser){JOptionPane.showMessageDialog(null,"无法查询到此课程编号","消息提示",JOptionPane.WARNING_MESSAGE);}
        } else if (name.equals("返回")) {
            um.jf.setVisible(false);
            um.jt1.setText("");
            um.jt2.setText("");
            um.jt3.setText("");
            um.jt4.setText("");
            um.jt5.setText("");
            um.jt6.setText("");
            um.two.setVisible(false);
            um.three.setVisible(false);
            um.four.setVisible(false);
            um.five.setVisible(false);
            um.six.setVisible(false);
        } else if (name.equals("确认修改")) {
            String x=um.jt1.getText();
            for(i=0;i<l1.lenth;++i){
                if(l1.data[i][1].equals(x)){break;}
            }
            Vector<String> s=new Vector();
            s.add(um.jt2.getText());
            s.add(um.jt3.getText());
            s.add(um.jt4.getText());
            s.add(um.jt5.getText());
            s.add(um.jt6.getText());
            boolean b1=true;
            for(int j=0;j<5;++j){
                if(s.get(j).equals(""))continue;
                else{
                    switch(j){
                        case 0:l1.c[i].name=s.get(0);break;
                        case 1:{
                            for(int k=0;k<l1.lenth;++k){
                                if(s.get(1).equals(l1.data[k][1])){
                                    b1=false;
                                    JOptionPane.showMessageDialog(null,"此编号已存在，无法修改","消息提示",JOptionPane.WARNING_MESSAGE);
                                }
                            }
                            if(b1){l1.c[i].ID=s.get(1);}
                            break;
                        }
                        case 2:l1.c[i].type=s.get(2);break;
                        case 3:l1.c[i].grade=s.get(3);break;
                        case 4:l1.c[i].teacher=s.get(4);break;
                        default:break;
                    }
                    if(j==1){
                        if(b1)l1.data[i][j]=s.get(j);
                        else continue;
                    }
                    l1.data[i][j]=s.get(j);
                }
            }
            um.jf.setVisible(false);
            um.jt1.setText("");
            um.jt2.setText("");
            um.jt3.setText("");
            um.jt4.setText("");
            um.jt5.setText("");
            um.jt6.setText("");
            um.two.setVisible(false);
            um.three.setVisible(false);
            um.four.setVisible(false);
            um.five.setVisible(false);
            um.six.setVisible(false);
        }
    }
}
