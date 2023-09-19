package cph;

public class Main {

    
    interface item
    {
        public void displayInfo();
    }
    static class book implements item
    {
        public String title;
        public String author;
        public int year;
        book()
        {
            System.out.println("BOOK IS CREATED");
        }
        public void displayInfo()
        {
            System.out.println(title+" "+author+" "+year);
        }
    }
    static class Magazine implements item
    {
        public String title;
        public int issueNumber;
        public String IssueDate;
        Magazine()
        {
            System.out.println("Magazine is created");
        }
        public void displayInfo()
        {
            System.out.println(title+" "+issueNumber+" "+IssueDate);
        }
    }
    static class DVD implements item
    {
        public String title;
        public int issueNumber;
        public String publicationDate;
        DVD()
        {
            System.out.println("DVD IS CREATED");
        }
        public void displayInfo()
        {
            System.out.println(title+" "+issueNumber+" "+publicationDate);
        }
    }
    static class Library 
    {
        public book book_obj=new book();
        public Magazine magazine_obj=new Magazine();
        public DVD dvd_obj=new DVD();
        public void addBook(String Title, String Author, int pub)
        {
            book_obj.title=Title;
            book_obj.author=Author;
            book_obj.year=pub;
        }
        public void addMagazine(String Title,int Issue_Number, String issueDate)
        {
            magazine_obj.title=Title;
            magazine_obj.issueNumber=Issue_Number;
            magazine_obj.IssueDate=issueDate;
        }
        public void addDvd(String Title, int Issue_Number,String PublicationDate)
        {
            dvd_obj.title=Title;
            dvd_obj.issueNumber=Issue_Number;
            dvd_obj.publicationDate=PublicationDate;
        }
        public void display()
        {
            book_obj.displayInfo();
            dvd_obj.displayInfo();
            magazine_obj.displayInfo();
        }
    }
    public static void main( String [] args)
    {
        Library library = new Library();
        library.addBook("book", "turzo",2013);
        library.addDvd("DVD", 123123, "22-03-23");
        library.addMagazine("Magazine", 123123123, "23-03-23");
        library.display();
    }

}

