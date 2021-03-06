Module Main()
//Declare variables to hold the user’s selections and dollar amount.
Declare Integer menuSelection
Declare Real washPrice
Set washPrice = 0.00

Do
//Display menu
   Call displayMenu(menuSelection)

//Operate from the following selections.
  Select menuSelection
  Case 1:
    Call basicWash()
    Set washPrice = 3.00

  Case 2:
    Call standardWash()
    Set washPrice = 5.00

  Case 3:
    Call premiumWash()
    Set washPrice = 8.00

  Case 4:
    Call ultimateWash()
    Set washPrice = 10.00

  End Select
  While menuSelection != 5

//Validate selection
  If menuSelection < 1 OR menuSelection > 5
    Display “Sorry, that is an invalid selection.”
    Display “Please select from the options listed.”
  Else If menuSelection == 5
    Display “Thank you for your visit, have a good day!”
  End If

//Prompt user to pay on the attached system.
  Display “Your selection has been confirmed.”
  Display “ Your total today is “ currencyFormat(washPrice)
  Display “Please insert amount, swipe card, or press button for assistance on ”
  Display “the attached system.”

End Module

//The displayMenu module displays the menu and gets
//the user’s selection and validates it.

Module displayMenu(Integer Ref Selection)
//Display menu.
  Display “ Car Wash Options”
  Display “1. Basic Wash $3.00 ”
  Display “2. Standard Wash $5.00 ”
  DIsplay “3. Premium Wash $8.00 ”
  Display “4. Ultimate Wash $10.00 ”
  Display
  Display “5. Cancel Purchase”
  Display
//Prompt user for input.
  Display “Enter your selection.”
  Input menuSelection

End Module

//The basicWash module will allow people to select the most affordable wash at a low
//price while passing up on a full vehicle wash service.
Module basicWash()
//Declare variables
  Declare String continue = “Y”
  Declare String another = “Y”

//Description
  Display “This option includes a cold rinse with a light scrub and use of ”
  Display “soap to get a fast and quick easy clean.”

  While toUpper(continue) = “Y”
    Display “Purchase this package?”
    Display “Enter Y or N”
    Input continue
      If toUpper(continue) = “N”
        Display “Do you wish to choose “
        Display “another package?”
        Input another
    If toUpper(another) = “Y”
        Display “Obtaining Menu Options”
    End If

    Else If toUpper(continue) = “Y”
      Display “Your selection is being processed.”
    End If
  End While
End Module

//The standardWash module includes a cold rinse and soap scrub with the addition
//of a tire and rim sweep to get a deeper and newer look on the tires as well.
Module standardWash()
//Declare variables
  Declare String continue = “Y”
  Declare String another = “Y”

//Description
  Display “This option comes with a soap and scrub wash with the addition “
  Display “of getting a deep tire and rim wash to help your wheels shine.”

  While toUpper(continue) = “Y”
    Display “Purchase this package?”
    Display “Enter Y or N”
    Input continue
    If toUpper(continue) = “N”
      Display “Do you wish to choose “
      Display “another package?”
      Input another
      If toUpper(another) = “Y”
        Display “Obtaining Menu Options”
     End If

    Else If toUpper(continue) = “Y”
      Display “Your selection is being processed.”
    End If
  End While
End Module

//The premiumWash module allows customers to purchase a higher cleaning
//detail towards their vehicle while still spending less than average
//total for this package.
Module premiumWash()

//Declare variables
  Declare String continue = “Y”
  Declare String another = “Y”

//Description
  Display “This package includes a deep soap and water rinse, rim and tire blast ”
  Display “and undercarriage water blast.”

  While toUpper(continue) = “Y”
    Display “Purchase this package?”
    Display “Enter Y or N”
    Input continue
    If toUpper(continue) = “N”
      Display “Do you wish to choose “
      Display “another package?”
      Input another
      If toUpper(another) = “Y”
        Display “Obtaining Menu Options”
      End If

      Else If toUpper(continue) = “Y”
        Display “Your selection is being processed.”
      End If
   End While
End Module

//The ultimateWash module is the best package offered at this location
//allowing full complete service to the customer.
Module ultimateWash()

//Declare variables
  Declare String continue = “Y”
  Declare String another = “Y”

//Description
  Display “This package includes a deep soap and water rinse, rim and tire blast “
  Display “undercarriage water blast, rain-x application, and lava wax.”

  While toUpper(continue) = “Y”
    Display “Purchase this Package?”
    Display “Enter Y or N”
    Input continue
    If toUpper(continue) = “N”
      Display “Do you wish to choose “
      Display “another package?”
      Input another
    If toUpper(another) = “Y”
      Display “Obtaining Menu Options”
    End If

  Else If toUpper(continue) = “Y”
    Display “Your selection is being processed”
  End If
End While
End Modul
