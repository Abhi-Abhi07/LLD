public class EngineIssueHandler extends AbstractHandler{
    public static int code=302;

    EngineIssueHandler(AbstractHandler request){
        super(request);
    }

    public void handleRequest(AbstractRequest request){
        if(request.getReqCode()==code){
            System.out.println("EngineHandler is handing request");
        }
        else{
            super.handleRequest(request);
        }
    }
}
