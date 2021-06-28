#include <iostream>
#include <nanodbc.h>
#include <exception>
#include <string>
#include <vector>
#include "FUNCTIONS.h"
#include "BIRD_STRUCTURE.h"
#include "BIRD_CLASS.h"
#include "BIRD_MENU.h"
#include "LAKE_CLASS.h"
#include "LAKE_STRUCTURE.h"
#include "LAKE_MENU.h"
#include "DataBase.h"

using namespace std;

void insertCustomer(nanodbc::connection conn, string ability, string name, string color, string size, string yersoflife, string migration, string sizeofeggs)
{
    nanodbc::statement statement(conn);
    nanodbc::prepare(statement, NANODBC_TEXT(R"(

        USE [team-atlantis-project-aqua]
        INSERT INTO
            [Birds]

            (Ability, Name, Color, Size, YearsOfLife, Migration, SizeOfEggs)

            VALUES

            (?, ?, ?, ?, ?, ?, ?)

    )"));
    statement.bind(0, ability.c_str());
    statement.bind(1, name.c_str());
    statement.bind(2, color.c_str());
    statement.bind(3, size.c_str());
    statement.bind(4, yersoflife.c_str());
    statement.bind(5, migration.c_str());
    statement.bind(6, sizeofeggs.c_str());
    execute(statement);
}

/*
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
*/


