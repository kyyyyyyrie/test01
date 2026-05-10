package edu.neuq.Handler;

import edu.neuq.UI.delMenu;
import edu.neuq.课程.Cla;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class delAction implements ActionListener {
    delMenu dm;
 Lesson l1;
    public delAction(delMenu dm,Lesson y) { this.dm = dm;this.l1 = y;}
    @Override
    public void actionPerformed(ActionEvent e) {
JButton b = (JButton)e.getSource();
String name = b.getText();
int i=0;
if (name.equals("查询")) {
    Boolean isser=false;
String s=dm.jt1.getText();
System.out.println(s);
for(i=0;i<l1.lenth;i++){
    if(l1.data[i][1].equals(s)){
        dm.jl2.setText("  名称:"+l1.c[i].name+"  编号:"+l1.c[i].ID+"  类别:"+l1.c[i].type+"  年级:"+l1.c[i].grade+"  老师:"+l1.c[i].teacher);
        isser=true;
        System.out.println(s+" "+i);
        break;
    }
}
if(!isser){JOptionPane.showMessageDialog(null,"无法查询到此课程编号","消息提示",JOptionPane.WARNING_MESSAGE);}
} else if (name.equals("返回")) {
    dm.jt1.setText("");
    dm.jl2.setText("");
    dm.jf.setVisible(false);
} else if(name.equals("确认删除")){
    String s=dm.jt1.getText();
    for(i=0;i<l1.lenth;i++){
       if(l1.data[i][1].equals(s)){break;}
        }
l1.c[i]=l1.c[l1.lenth-1];
l1.data[i][0]=l1.c[i].name;
l1.data[i][1]=l1.c[i].ID;
l1.data[i][2]=l1.c[i].type;
l1.data[i][3]=l1.c[i].grade;
l1.data[i][4]=l1.c[i].teacher;
for(i=0;i<5;i++){l1.data[l1.lenth-1][i]="";}
l1.lenth--;
dm.jt1.setText("");
dm.jl2.setText("");

//dm.jf.setVisible(false);
}
    }
}
