import java.util.ArrayList;
import java.util.List;

public class Menu implements UIcomponent{

    // Menu ke under bahut saare part ho sakte hai
    // iske liye under ke saare part ko main -> childern kehra hu

    List<UIcomponent> children=new ArrayList<>();

    public void draw(){
        for (UIcomponent component : children) {
            component.draw();
        }
    }

    public void add(UIcomponent uIcomponent){
        children.add(uIcomponent);
    }

    public void remove(UIcomponent uIcomponent){
        children.remove(uIcomponent);
    }
}
