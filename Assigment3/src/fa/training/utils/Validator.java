package fa.training.utils;

import java.time.LocalDate;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeParseException;

public class Validator {
    private static final String EMAIL_PATTERN =
            "^[_A-Za-z0-9-]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9]+(\\.[A-Za-z0-9]+)*(\\.[A-Za-z]{2,})$";
    private static final Pattern pattern = Pattern.compile(EMAIL_PATTERN);
    private static final DateTimeFormatter DATE_FORMATTER = DateTimeFormatter.ofPattern("yyyy-MM-dd");

    public static boolean validateEmail(String email) {
        Matcher matcher = pattern.matcher(email);
        return matcher.matches();
    }

    public static boolean validGrade(String data) {
        double grade = Double.parseDouble(data);
        return grade >= 0.0 && grade < 10.0;
    }


    public static boolean isValidBirthday(String birthday) {
        try {
            LocalDate date = LocalDate.parse(birthday, DATE_FORMATTER);
            LocalDate currentDate = LocalDate.now();

            // Assuming a reasonable upper limit for age, e.g., 150 years
            LocalDate oldestPossibleBirthday = currentDate.minusYears(150);

            // Check if the birthday is in the past and not too far in the past
            return date.isBefore(currentDate) && date.isAfter(oldestPossibleBirthday);
        } catch (DateTimeParseException e) {
            // Invalid date format
            return false;
        }
    }
}
