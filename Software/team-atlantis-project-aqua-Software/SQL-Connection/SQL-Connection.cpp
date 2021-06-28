#include <iostream>

#include "nanodbc.h"

#include <exception>



using namespace std;



struct CUSTOMER

{

    int id = 0;

    string firstName;

    string lastName;

    string phone;

    string email;

    string street;

    string city;

    string state;

    int zipCode = 0;

};



void insertCustomer(nanodbc::connection conn, const CUSTOMER& customer)

{

    nanodbc::statement statement(conn);

    nanodbc::prepare(statement, NANODBC_TEXT(R"(

        INSERT INTO

            BikeStores.sales.customers

            (first_name, last_name, phone, email, street, city, state, zip_code)

            VALUES

            (?, ?, ?, ?, ?, ?, ?, ?)

    )"));



    statement.bind(0, customer.firstName.c_str());

    statement.bind(1, customer.lastName.c_str());

    statement.bind(2, customer.phone.c_str());

    statement.bind(3, customer.email.c_str());

    statement.bind(4, customer.street.c_str());

    statement.bind(5, customer.city.c_str());

    statement.bind(6, customer.state.c_str());

    statement.bind(7, &customer.zipCode);



    execute(statement);

}



CUSTOMER getCustomerById(nanodbc::connection conn, int id)

{

    CUSTOMER customer;



    nanodbc::statement statement(conn);

    nanodbc::prepare(statement, NANODBC_TEXT(R"(

        SELECT *

            FROM BikeStores.sales.customers

            WHERE customer_id = ?

    )"));



    statement.bind(0, &id);



    auto result = execute(statement);



    if (result.next())

    {

        customer.id = result.get<int>("customer_id");

        customer.firstName = result.get<nanodbc::string>("first_name", "");

        customer.lastName = result.get<nanodbc::string>("last_name", "");

        customer.phone = result.get<nanodbc::string>("phone", "");

        customer.email = result.get<nanodbc::string>("email", "");

        customer.street = result.get<nanodbc::string>("street", "");

        customer.city = result.get<nanodbc::string>("city", "");

        customer.state = result.get<nanodbc::string>("state", "");

        customer.zipCode = result.get<int>("zip_code");

    }



    return customer;

}



CUSTOMER recordToCustomer(nanodbc::result& result)

{

    CUSTOMER customer;



    if (result.next())

    {

        customer.id = result.get<int>("customer_id");

        customer.firstName = result.get<nanodbc::string>("first_name", "");

        customer.lastName = result.get<nanodbc::string>("last_name", "");

        customer.phone = result.get<nanodbc::string>("phone", "");

        customer.email = result.get<nanodbc::string>("email", "");

        customer.street = result.get<nanodbc::string>("street", "");

        customer.city = result.get<nanodbc::string>("city", "");

        customer.state = result.get<nanodbc::string>("state", "");

        customer.zipCode = result.get<int>("zip_code");

    }



    return customer;

}



vector<CUSTOMER> getAllCustomers(nanodbc::connection conn)

{

    vector<CUSTOMER> customers;



    nanodbc::statement statement(conn);

    nanodbc::prepare(statement, NANODBC_TEXT(R"(

        SELECT *

            FROM BikeStores.sales.customers

    )"));



    auto result = execute(statement);

    int cnt = 0;

    while (result.next())

    {

        cnt++;

        CUSTOMER customer;



        customer.id = result.get<int>("customer_id");

        customer.firstName = result.get<nanodbc::string>("first_name", "");

        customer.lastName = result.get<nanodbc::string>("last_name", "");

        customer.phone = result.get<nanodbc::string>("phone", "");

        customer.email = result.get<nanodbc::string>("email", "");

        customer.street = result.get<nanodbc::string>("street", "");

        customer.city = result.get<nanodbc::string>("city", "");

        customer.state = result.get<nanodbc::string>("state", "");

        customer.zipCode = result.get<int>("zip_code");

        //        CUSTOMER c = recordToCustomer(result);

        //        customers.push_back(c);

    }

    cout << cnt;

    return customers;

}



int main()

{

    try

    {

        nanodbc::string connstr = NANODBC_TEXT("DRIVER={SQL Server};SERVER=(local)\\SQLExpress;DATABASE=BikeStores;Trusted_Connection=yes;"); // an ODBC connection string to your database



        nanodbc::connection conn(connstr);



        // insertCustomer(conn, { 0, "fn1", "ln1", "123", "e1@abv.bg", "street1", "city1", "state1", 1234 });



        //CUSTOMER customer = getCustomerById(conn, 1445);



        vector<CUSTOMER> customers = getAllCustomers(conn);



        //auto result = nanodbc::execute(conn, NANODBC_TEXT(R"(

        //    SELECT TOP 2 * FROM BikeStores.sales.customers

        //)"));



        //while (result.next())

        //{

        //    auto i = result.get<int>(0);

        //    auto firstName = result.get<nanodbc::string>(1, "");

        //    auto phone = result.get<nanodbc::string>("phone", "<NO PHONE>");



        //    cout << i << ", " << firstName

        //         << "," << phone << endl;

        //}



        return EXIT_SUCCESS;

    }

    catch (std::exception& e)

    {

        std::cerr << e.what() << std::endl;

        return EXIT_FAILURE;

    }

}

