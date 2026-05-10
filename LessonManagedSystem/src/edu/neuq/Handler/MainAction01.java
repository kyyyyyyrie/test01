package edu.neuq.Handler;

import edu.neuq.UI.MainMenu;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public  class MainAction01 implements ActionListener {
MainMenu mm;
Lesson l1;
public MainAction01(){}
public MainAction01(MainMenu mm, Lesson y) {this.mm=mm;this.l1=y;}
    @Override
    public void actionPerformed(ActionEvent e) {
        for(int i=0;i<mm.Mainl1;++i)
        {
            for(int j=0;j<5;++j)mm.Maindata01[i][j]="";
        }
    mm.Mainl1=0;
    System.out.println("01");
        JComboBox cb = (JComboBox) e.getSource();
        String name = (String) cb.getSelectedItem();
        if(name.equals("全部"))
        {
            for(int i=0;i<l1.lenth;++i)
            {
                for(int j=0;j<5;++j){
                    mm.Maindata01[i][j]=l1.data[i][j];
                }
                mm.Mainl1++;
            }
        }else{
            for(int i=0;i<l1.lenth;++i) {
                if(l1.data[i][2].equals(name)){
                    for(int j=0;j<5;++j){mm.Maindata01[mm.Mainl1][j]=l1.data[i][j];}
                    mm.Mainl1++;
                }
            }
        }
        System.out.println("main1:"+mm.Mainl1);
            }
}
