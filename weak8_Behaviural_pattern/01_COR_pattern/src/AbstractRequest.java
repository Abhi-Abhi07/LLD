public abstract class AbstractRequest {
    
    private int reqCode;

    AbstractRequest(int reqCode){
        this.reqCode=reqCode;
    }

    public int getReqCode(){
        return this.reqCode;
    }
}
