class Employee {
    String name;
    int id;
    double salary;

    Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    public String toString() {
        return "Name: " + name + ", ID: " + id + ", Salary: " + salary;
    }
}

class Manager extends Employee {
    String department;

    Manager(String name, int id, double salary, String department) {
        super(name, id, salary);
        this.department = department;
    }

    public String toString() {
        return super.toString() + ", Department: " + department;
    }
}

class Executive extends Manager {
    double bonus;

    Executive(String name, int id, double salary, String department, double bonus) {
        super(name, id, salary, department);
        this.bonus = bonus;
    }

    public String toString() {
        return super.toString() + ", Bonus: " + bonus;
    }
}

public class Plm_03 {
    public static void main(String[] args) {

        Employee e1 = new Employee("ZIDAN", 110, 150000);
        Manager m1 = new Manager("HEMEL", 132, 50000, "UI/UX");
        Executive ex1 = new Executive("REDOY", 107, 60000, "DEVOLOPER", 20000);

        System.out.println(e1);
        System.out.println(m1);
        System.out.println(ex1);
    }
}







//Q1.
//
//Employee নামে একটি ক্লাস তৈরি করো, যার অ্যাট্রিবিউট হবে name, id, এবং salary।

//এরপর Employee ক্লাস থেকে ইনহেরিট করে একটি সাবক্লাস Manager তৈরি করো, যেখানে অতিরিক্ত একটি অ্যাট্রিবিউট থাকবে department।
//
//Employee এবং Manager উভয় ক্লাসেই toString() মেথড ইমপ্লিমেন্ট করো, যাতে কর্মচারী ও ম্যানেজারের বিস্তারিত তথ্য প্রিন্ট করা যায়।
//
//এরপর Manager ক্লাস থেকে ইনহেরিট করে আরেকটি সাবক্লাস Executive তৈরি করো, যেখানে অতিরিক্ত একটি অ্যাট্রিবিউট থাকবে bonus।
//Executive ক্লাসেও toString() মেথড ইমপ্লিমেন্ট করো, যাতে এক্সিকিউটিভের বিস্তারিত তথ্য প্রিন্ট করা যায়।
//
//সবশেষে একটি টেস্ট প্রোগ্রাম লিখো, যেখানে Employee, Manager, এবং Executive ক্লাসের অবজেক্ট তৈরি করে তাদের তথ্য প্রিন্ট করা হবে।