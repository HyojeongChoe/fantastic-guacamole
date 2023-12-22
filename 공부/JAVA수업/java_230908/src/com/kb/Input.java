package com.kb;

import java.io.InputStream;
import java.util.Scanner;

public class Input {
    public String inputFromUser(String msg, Scanner scanner) {
        System.out.println(msg);    //msg를 인자로 전달
        String str = scanner.nextLine();
        return str;
    }
}

