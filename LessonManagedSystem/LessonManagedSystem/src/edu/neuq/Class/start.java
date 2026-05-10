package edu.neuq.课程;
import edu.neuq.UI.MainMenu;
import edu.neuq.UI.addMenu;
import edu.neuq.UI.delMenu;
import edu.neuq.UI.updateMenu;

import javax.swing.*;
import java.io.*;

public class start {
     private MainMenu m1=new MainMenu();
     private addMenu am=new addMenu();
     private delMenu dm=new delMenu();
     private updateMenu um=new updateMenu();
     Lesson l1=new Lesson();
     public void play() throws IOException {
          readname();
          readID();
          readtype();
          readgrade();
          readteacher();
          outCla();
          dm=new delMenu(l1);
          am=new addMenu(l1);
          um=new updateMenu(l1);
          m1=new MainMenu(am,dm,um,l1);
     }
     public void readname() throws IOException {
          BufferedReader br=new BufferedReader(new FileReader("E:\\javacode\\LessonManagedSystem\\data\\name.txt"));
          String name;
          int l=0;
          while((name=br.readLine())!=null){
               l1.data[l][0]=name;
               ++l;
          }
          br.close();
     }
     public void readID() throws IOException {
          BufferedReader br=new BufferedReader(new FileReader("E:\\javacode\\LessonManagedSystem\\data\\ID.txt"));
          String id;
          int l=0;
          while((id=br.readLine())!=null){
               l1.data[l][1]=id;
               ++l;
          }
          br.close();
     }
     public void readtype() throws IOException {
          BufferedReader br=new BufferedReader(new FileReader("E:\\javacode\\LessonManagedSystem\\data\\type.txt"));
          String type;
          int l=0;
          while((type=br.readLine())!=null){
               l1.data[l][2]=type;
               ++l;
          }
          l1.lenth=l;
          br.close();
     }
     public void readgrade() throws IOException {
          BufferedReader br=new BufferedReader(new FileReader("E:\\javacode\\LessonManagedSystem\\data\\grade.txt"));
          String grade;
          int l=0;
          while((grade=br.readLine())!=null){
               l1.data[l][3]=grade;
               ++l;
          }
          br.close();
     }
     public void readteacher() throws IOException {
          BufferedReader br=new BufferedReader(new FileReader("E:\\javacode\\LessonManagedSystem\\data\\teacher.txt"));
          String teacher;
          int l=0;
          while((teacher=br.readLine())!=null){
               l1.data[l][4]=teacher;
               ++l;
          }
          br.close();
     }

     public void outCla(){
         for(int i=0;i<l1.lenth;i++){
              Cla tmp=new Cla();
              tmp.name= l1.data[i][0].toString();
              tmp.ID= l1.data[i][1].toString();
              tmp.type= l1.data[i][2].toString();
              tmp.grade= l1.data[i][3].toString();
              tmp.teacher= l1.data[i][4].toString();
              l1.c[i]=tmp;
         }
     }
}
