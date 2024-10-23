public class AbstractHandler {
    
    public AbstractHandler nextHandler;

    AbstractHandler(AbstractHandler nextHandler){
        this.nextHandler=nextHandler;
    }

    public void handleRequest(AbstractRequest request){
        if(nextHandler!=null){
            nextHandler.handleRequest(request);
        }else{
            System.out.println("ye system se bahar he ise handle nhi kar sakte");
        }
    }
}
