package edu.neuq.Handler;

import edu.neuq.UI.MainMenu;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MainAction02 implements ActionListener {
    MainMenu mm;
    Lesson l1;

    public MainAction02() {}
    public MainAction02(MainMenu mm, Lesson y,JTable z) {this.mm=mm;this.l1=y;}
    @Override
    public void actionPerformed(ActionEvent e) {
        for(int i=0;i<mm.Mainl2;++i){
            for(int j=0;j<5;++j)mm.Maindata02[i][j]="";
        }
        mm.Mainl2=0;
        System.out.println("02");
        JComboBox cb = (JComboBox) e.getSource();
        String name = (String) cb.getSelectedItem();
        if(name.equals("全部")){
            for(int i=0;i< mm.Mainl1;++i){
                for(int j=0;j<5;++j){
                    mm.Maindata02[i][j]=mm.Maindata01[i][j];
                }
                mm.Mainl2=mm.Mainl1;
            }
        }
        else{
            for(int i=0;i< mm.Mainl1;++i){
                if(mm.Maindata01[i][3].equals(name)){
                    for(int j=0;j<5;++j){mm.Maindata02[mm.Mainl2][j]=mm.Maindata01[i][j];}
                    mm.Mainl2++;
                }
            }
        }
        mm.liebiao.setRowHeight(30);
        mm.liebiao=new JTable(mm.Maindata02,mm.title){
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };
      }
}
