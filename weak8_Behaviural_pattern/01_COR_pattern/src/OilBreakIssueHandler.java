public class OilBreakIssueHandler extends AbstractHandler{
    public static int code=301;

    OilBreakIssueHandler(AbstractHandler request){
        super(request);
    }

    public void handleRequest(AbstractRequest request){
        if(request.getReqCode()==code){
            System.out.println("OilBreakHandler is handling request");
        }else{
            super.handleRequest(request);
        }
    }
}
