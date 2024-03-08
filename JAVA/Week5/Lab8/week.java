class sales extends Thread{
    String[] names =  {"N1","N2","N3","N4","N5"};

    @Override
    public void run(){
        int i = 0;
        while(true){
            i += 1;
            for (String name : names) {
                System.out.print(name+" "); 
            }
            try{
                if(i%7 == 3){
                    Thread.sleep(4000);
                }
                else{
                Thread.sleep(1000);
                 }
            } catch(InterruptedException e){}
        }
    }

}

class Days extends Thread{
    String[] names = {"Mon","Tues","Wed","Thurs","Fri","Sat","Sun"};
    @Override
    public void run(){
        sales s1 = new sales();
        s1.start(); 
        while(true){
            for(int i = 0; i < 7;i++){

                System.out.println(names[i]);
                if(i==3){
           
                }
            
                try{
                     Thread.sleep(1000);
                }catch (InterruptedException e){}
            }
        }
    }
}

public class week{
    public static void main(String[] args) {
        Days d1 = new Days();
        d1.start();
    }
}