class first extends Thread {
    @Override
    public void run(){
        while(true){
            System.out.print("An ");
            try{
                Thread.sleep(1000);
            } catch(InterruptedException e){}
        }
    }
}

class second extends Thread {
    @Override
    public void run(){
        while(true){
            System.out.println("B ");
            try{ 
                Thread.sleep(3000);
            }catch(InterruptedException e){}
        }
    }
}

public class wait{
    public static void main(String[] args) {
       first T1 = new first();
       second T2 = new second();

       T1.start();
       T2.start();
    }
}