interface Resizable 
{
void resizeWidth(int width); 
void resizeHeight(int height);
}
class Rectangle implements Resizable 
{
private int width; 
private int height;
public Rectangle(int width, int height)
{
this.width = width; 
this.height = height;
}
public void resizeWidth(int newWidth)
{
this.width = newWidth;
}
public void resizeHeight(int newHeight)
{
this.height = newHeight;
}
public void display()
{
System.out.println("Rectangle width: " + width + ", height: " + height);
}
public static void main(String[] args)
{
Rectangle rectangle = new Rectangle(5, 10); 
rectangle.display();
rectangle.resizeWidth(8); 
rectangle.resizeHeight(15); 
rectangle.display();
