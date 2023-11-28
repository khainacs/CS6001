package fa.training.dao;

import com.mysql.cj.jdbc.StatementImpl;
import lombok.Getter;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;


public class Repository {
    private static String dbURL = "jdbc:mysql://localhost:3306/sms";
    private static String userName = "root";
    private static String password = "";
    private static Connection conn;

    public static Connection getConn() {
        return conn;
    }

    /**
     * create connection

     * @param dbURL: database's url
     * @param userName: username is used to login
     * @param password: password is used to login
     * @return connection
     */
    public static Connection getConnection() {

        try {
            //Class.forName("com.mysql.jdbc.Driver");
            conn = DriverManager.getConnection(dbURL,userName, "");
            System.out.println("connect successfully!");
        } catch (Exception ex) {
            System.out.println("connect failure!");
            ex.printStackTrace();
        }
        return conn;
    }
}
