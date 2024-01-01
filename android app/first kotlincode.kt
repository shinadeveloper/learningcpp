fun main(){

    var HP1=Laptop( name: "gaming pro max", ram: 32)

    HP1.canwebuy(ram: 32)

}

class Laptop(var name: String,var ram: Int){

    fun canwebuy(ram: Int){
        if(ram<8){
            println("NO")
        }
        else{
            println("YES")
        }
    }
}