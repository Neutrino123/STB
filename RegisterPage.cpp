#include "RegisterPage.h"
#include "./ui_RegisterPage.h"
#include <QDebug>
#include <QFile>
#include <sys/stat.h>
#include <QMessageBox>
#include "utils.h"
#include <QRegularExpression>
#include "ServerConnection.h"



RegisterPage::RegisterPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterPage)
{
    ui->setupUi(this);
    this->success = new SuccessBox();
}

RegisterPage::~RegisterPage()
{
    delete ui;
}

// Function to validate email format using regular expression
bool isValidEmail(const QString &email) {
    QRegularExpression regex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex.match(email).hasMatch();
}

// Function to validate password strength
bool isStrongPassword(const QString &password) {
    // Password must be at least 8 characters, contain uppercase, lowercase, digit, and special character
    QRegularExpression regex(R"((?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,})");
    return regex.match(password).hasMatch();
}

// Registration button click handler
void RegisterPage::on_submitButton_clicked()
{
    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

        // Collect and trim user inputs
        QString userName = ui->txtUserName->text().trimmed();
        QString email = ui->txtEmail->text().trimmed();
        QString password = ui->txtPassword->text().trimmed();
        QString confirmPassword = ui->txtConfPassword->text().trimmed();
        QString nume = ui->txtNume->text().trimmed();
        QString prenume = ui->txtPrenume->text().trimmed();
        QString cnp = ui->txtCNP->text().trimmed();



        // Validate input fields
        if (userName.isEmpty() || email.isEmpty() || password.isEmpty() || confirmPassword.isEmpty() || nume.isEmpty() || prenume.isEmpty() || cnp.isEmpty()) {
            QMessageBox::warning(this, "Input Error", "All fields must be filled!");
            return;
        }

        // Ensure password meets strength criteria
        if (!isStrongPassword(password)) {
            QMessageBox::warning(this, "Weak Password", "Password must be at least 8 characters and include uppercase, lowercase, digit, and special character.");
            return;
         }
        // Check for valid email format
        if (!isValidEmail(email)) {
            QMessageBox::warning(this, "Invalid Email", "Please enter a valid email address!");
            return;
        }

        // Ensure password confirmation matches
        if (password != confirmPassword) {
            QMessageBox::warning(this, "Password Mismatch", "Passwords do not match!");
            return;
        }

        QRegularExpression nameRegex("^[A-Za-zăîâșțĂÎÂȘȚ]{2,}$");

        if (!nameRegex.match(nume).hasMatch()) {
            QMessageBox::warning(this, "Invalid Name", "Numele trebuie să conțină doar litere și să aibă cel puțin 2 caractere!");
            return;
        }

        if (!nameRegex.match(prenume).hasMatch()) {
            QMessageBox::warning(this, "Invalid Surname", "Prenumele trebuie să conțină doar litere și să aibă cel puțin 2 caractere!");
            return;
        }

        // Validate CNP (exactly 13 digits)
        QRegularExpression cnpRegex("^\\d{13}$");

        if (!cnpRegex.match(cnp).hasMatch()) {
            QMessageBox::warning(this, "Invalid CNP", "CNP-ul trebuie să conțină exact 13 cifre!");
            return;
        }


        QString hasAbonament = "";
        QString abonament = "";

        QString buffer = "register|" + password + "|" + cnp + "|" + nume + "|" + prenume + "|"+
                         email + "|" + "client" + "|" + hasAbonament + "|" + abonament + "|";
        buffer += '\0';
        server->sendData(buffer);

        QString response = server->receiveData();
        qDebug()<<response;
        if(response == "success")
        {
            this->success->setMessage("Ați creat contul cu succes!");
            this->success->show();
            this->close();
        }
        else if(response == "email used")
        {
            QMessageBox::information(this, "Failed", "Email already used, try another one");
        }

        delete server;

}





