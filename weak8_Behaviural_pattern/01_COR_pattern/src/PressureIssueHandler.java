public class PressureIssueHandler extends AbstractHandler{
    
    public static int code=303;
    public PressureIssueHandler(AbstractHandler handler){
        super(handler);
    }

    public void handleRequest(AbstractRequest request){
        if(request.getReqCode()==code){
            System.out.println("PressureHandler is handling request");
        }
        else{
            super.handleRequest(request);
        }
    }
}
