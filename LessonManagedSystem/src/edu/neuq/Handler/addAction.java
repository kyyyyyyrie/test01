package edu.neuq.Handler;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

import edu.neuq.UI.MainMenu;
import edu.neuq.UI.addMenu;
import edu.neuq.课程.Cla;
import edu.neuq.课程.Lesson;

public class addAction implements ActionListener {
    addMenu am;
    Lesson l1;

    public addAction(addMenu x,Lesson y) {this.am = x;this.l1 = y;}
    @Override
    public void actionPerformed(ActionEvent e) {
        JButton b=(JButton)e.getSource();
        String name = b.getText();
        if(name.equals("返回")){
            am.jf.setVisible(false);
        } else if (name.equals("确定")) {
            boolean isAdd=true;
            Vector<String> a=new Vector<>();
            a.add(am.jf1.getText());
            a.add(am.jf2.getText());
            a.add(am.jf3.getText());
            a.add(am.jf4.getText());
            a.add(am.jf5.getText());
            if(a.get(0).isEmpty() || a.get(1).isEmpty() || a.get(2).isEmpty() || a.get(3).isEmpty() || a.get(4).isEmpty()){
                isAdd=false;
            }
            else if(l1.lenth>=1){
                for(int i=0;i< l1.lenth;i++){
                    if(l1.data[i][1].equals(a.get(1))){
                        JOptionPane.showMessageDialog(null,"课程编号重复，无法添加","消息提示",JOptionPane.WARNING_MESSAGE);
                        isAdd=false;
                    }
                }
            }
            if(isAdd) {
                Cla tmp=new Cla();
                tmp.name=a.get(0);
                tmp.ID=a.get(1);
                tmp.type=a.get(2);
                tmp.grade=a.get(3);
                tmp.teacher=a.get(4);
                l1.c[l1.lenth]=tmp;
                for (int i = 0; i < a.size(); i++) {
                    l1.data[l1.lenth][i] = a.get(i);
                }
                l1.lenth++;
                //am.jf.setVisible(false);
                am.jf1.setText("");
                am.jf2.setText("");
                am.jf3.setText("");
                am.jf4.setText("");
                am.jf5.setText("");
            }
        }
    }
}
