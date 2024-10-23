public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        AbstractHandler pHandler=new PressureIssueHandler(null);
        AbstractHandler eHandler=new EngineIssueHandler(pHandler);
        AbstractHandler oilHandler=new OilBreakIssueHandler(eHandler);

        PressureIssueRequest pRequest=new PressureIssueRequest();
        eHandler.handleRequest(pRequest);
        eHandler.handleRequest(new EngineIssueRequest());
        System.out.println();
        pHandler.handleRequest(new EngineIssueRequest());
        System.out.println();
        oilHandler.handleRequest(pRequest);
        oilHandler.handleRequest(new EngineIssueRequest());
        oilHandler.handleRequest(new OilBreakIssueRequest());

    }
}
