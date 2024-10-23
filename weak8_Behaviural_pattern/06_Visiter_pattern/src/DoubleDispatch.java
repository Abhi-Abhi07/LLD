// public class DoubleDispatch {
//     public static void main(String[] args) {
//         Scorpio scorpio =new Scorpio();
//         Scorpio advScorpio=new AdvancedScorpio();
//         StandardBreak stdBreak=new StandardBreak();
//         StandardBreak advBreak=new AdvancedBreak();

//         // scorpio.applyBraek(stdBreak);
//         // advScorpio.applyBraek(stdBreak);

//         // yha fat rha hai
//         // Main cha rha hu ki adv brak apply ho 
//         // but std brak apply ho rhi hai 
//         // because Standard break ne advanced break ko hold karke rkha hai joki logic wise shi
//         // main Issue : bhai advanced break to apply hi nhi ho rhe hai
//         scorpio.applyBraek(advBreak);
//         advScorpio.applyBraek(advBreak);
//     }    
// }

// class StandardBreak{
//     public String playSound(){
//         return "Normal Break sound";
//     }
// }

// class AdvancedBreak extends StandardBreak{
//     public String playSound(){
//         return "Adv break sound";
//     }
// }
// class Scorpio{
//     public String whtsMyName(){
//         return "Scopio";
//     }

//     public void applyBraek(StandardBreak standardBreak){
//         System.out.println(whtsMyName() + " Std break apply " + standardBreak.playSound());
//     }
//     public void applybreak(AdvancedBreak advBreak){
//         System.out.println(whtsMyName() + " Adv break apply " + advBreak.playSound());
//     }
// } 

// class AdvancedScorpio extends Scorpio{
//     public String whtsMyName(){
//         return "Advanced Scopio";
//     }
// }