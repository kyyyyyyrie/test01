package edu.neuq.Handler;

import edu.neuq.UI.MainMenu;
import edu.neuq.UI.addMenu;
import edu.neuq.UI.delMenu;
import edu.neuq.UI.updateMenu;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;
import java.util.Vector;

public class MainAction implements ActionListener {
MainMenu mm;
addMenu am;
delMenu dm;
updateMenu um;
Lesson l1;
public MainAction() {}
public MainAction(MainMenu x, addMenu y,delMenu xx,updateMenu yy,Lesson z) {this.mm = x;this.am = y;this.dm=xx;this.um=yy;this.l1 = z;}
    @Override
    public void actionPerformed(ActionEvent e) {
JButton button = (JButton) e.getSource();
String name = button.getText();
if(name.equals("添加")) {
am.jf.setVisible(true);
} else if(name.equals("删除")){
dm.jf.setVisible(true);
} else if (name.equals("修改")) {
um.jf.setVisible(true);
} else if (name.equals("搜索")) {
    MainMenu.searchMenu sm=new MainMenu.searchMenu();
    String s = mm.searchtf.getText();
    for(int i=0;i<l1.lenth;i++){
        for(int j=0;j<5;++j){
            if(l1.data[i][j].equals(s)){
                for(int k=0;k<5;++k){
                    sm.searchData[sm.lenth][k]=l1.data[i][k];
                }
                sm.lenth++;
                break;
            }
        }
    }
    sm.search=new JTable(sm.searchData,mm.title);
    sm.search.setRowHeight(30);
    sm.jf.add(new JScrollPane(sm.search));
    mm.searchtf.setText("");
sm.jf.setVisible(true);
} else if (name.equals("退出")) {
    try {
        mm.outname(l1);
        mm.outID(l1);
        mm.outtype(l1);
        mm.outgrade(l1);
        mm.outteacher(l1);
    } catch (IOException ex) {
        throw new RuntimeException(ex);
    }
    System.exit(1);
}
    }
}
