package edu.neuq.UI;
import edu.neuq.Handler.MainAction;
import edu.neuq.Handler.MainAction01;
import edu.neuq.Handler.MainAction02;
import edu.neuq.课程.Lesson;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Vector;



public class MainMenu extends JFrame {

    public static class searchMenu extends JFrame {
        public JFrame jf=new JFrame();
        public JTable search=new JTable();
        public Object[][] searchData=new Object[200][5];
        public int lenth=0;
        public int width=getToolkit().getScreenSize().width;
        public int height=getToolkit().getScreenSize().height;
        public searchMenu() {
            lenth=0;
jf.setBounds(width/2-250,height/2-350,500,700);
jf.setVisible(false);
        }
    }
    public JFrame jf=new JFrame("课程管理系统");
    public int width=getToolkit().getScreenSize().width;
    public int height=getToolkit().getScreenSize().height;
    public JPanel northPanel = new JPanel();
    public JButton addBtn = new JButton("添加");
    public JButton delBtn=new JButton("删除");
    public JButton updateBtn =new JButton("修改");
    public JButton searchBtn=new JButton("搜索");
    public JTextField searchtf = new JTextField(15);

    public JPanel southPanel = new JPanel();
    public JButton exit=new JButton("退出");
    public JTable liebiao=new JTable(){
        @Override
        public boolean isCellEditable(int row, int column) {
            return false;
        }
    };

    public Object[] title={"课程名","课程编号","课程类别","开课年级","老师姓名"};
    public  Object[] select2={"全部","必修","选修"};
    public  Object[] select1={"全部","大一","大二","大三","大四"};
    public JComboBox choice1=new JComboBox(select1);
    public JComboBox choice2=new JComboBox(select2);
    public Object[][] Maindata01=new Object[200][5];
    public Object[][] Maindata02=new Object[200][5];
    public int Mainl1=0;
    public int Mainl2=0;
    MainAction ma=new MainAction();
    MainAction01 ma01=new MainAction01();
    MainAction02 ma02=new MainAction02();
    public MainMenu(){}
    public MainMenu(addMenu am,delMenu dm,updateMenu um, Lesson l1) {
        liebiao=new JTable(Maindata02,title);
        ma01=new MainAction01(this,l1);
        ma02=new MainAction02(this,l1,liebiao);
        choice1.addActionListener(ma02);
        choice2.addActionListener(ma01);
        ma=new MainAction(this,am,dm,um,l1);
        northPanel.add((choice2));
        northPanel.add(choice1);
        addBtn.addActionListener(ma);
        delBtn.addActionListener(ma);
        updateBtn.addActionListener(ma);
        searchBtn.addActionListener(ma);
        exit.addActionListener(ma);
northPanel.add(addBtn);
northPanel.add(delBtn);
northPanel.add(updateBtn);
northPanel.add(searchtf);
northPanel.add(searchBtn);
southPanel.add(exit);
jf.add(northPanel, BorderLayout.NORTH);
jf.add(southPanel, BorderLayout.SOUTH);
jf.add(new JScrollPane(liebiao));
jf.setVisible(true);
jf.setDefaultCloseOperation(EXIT_ON_CLOSE);
jf.setBounds(150,75,width-300,height-150);
    }

    public void outname(Lesson l1) throws IOException {
        BufferedWriter br=new BufferedWriter(new FileWriter("E:\\javacode\\LessonManagedSystem\\data\\name.txt"));
        String s;
        for(int i=0;i<l1.lenth;++i){
            s= l1.data[i][0].toString();
            br.write(s);
            br.newLine();
        }
        br.close();
    }
    public void outID(Lesson l1) throws IOException {
        BufferedWriter br=new BufferedWriter(new FileWriter("E:\\javacode\\LessonManagedSystem\\data\\ID.txt"));
        String s;
        for(int i=0;i<l1.lenth;++i){
            s= l1.data[i][1].toString();
            br.write(s);
            br.newLine();
        }
        br.close();
    }
    public void outtype(Lesson l1) throws IOException {
        BufferedWriter br=new BufferedWriter(new FileWriter("E:\\javacode\\LessonManagedSystem\\data\\type.txt"));
        String s;
        for(int i=0;i<l1.lenth;++i){
            s= l1.data[i][2].toString();
            br.write(s);
            br.newLine();
        }
        br.close();
    }
    public void outgrade(Lesson l1) throws IOException {
        BufferedWriter br=new BufferedWriter(new FileWriter("E:\\javacode\\LessonManagedSystem\\data\\grade.txt"));
        String s;
        for(int i=0;i<l1.lenth;++i){
            s= l1.data[i][3].toString();
            br.write(s);
            br.newLine();
        }
        br.close();
    }
    public void outteacher(Lesson l1) throws IOException {
        BufferedWriter br=new BufferedWriter(new FileWriter("E:\\javacode\\LessonManagedSystem\\data\\teacher.txt"));
        String s;
        for(int i=0;i<l1.lenth;++i){
            s= l1.data[i][4].toString();
            br.write(s);
            br.newLine();
        }
        br.close();
    }
}
