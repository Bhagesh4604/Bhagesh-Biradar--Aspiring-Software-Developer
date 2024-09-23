class Outerclass 
{
void display()
{
System.out.println("Outer class display method.");
}
class Innerclass 
{
void display()
{
System.out.println("Inner class display method.");
}
}
public static void main(String[] args)
{
Outerclass outer = new Outerclass();
outer.display(); // Call the outer class's display() method
Outerclass.Innerclass inner = outer.new Innerclass(); 
inner.display(); // Call the inner class's display() method
}
