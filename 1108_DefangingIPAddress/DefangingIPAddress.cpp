// Source : https://leetcode.com/problems/defanging-an-ip-address/
// Author : Jerry
// Date   : 2021-04-14

/********************************************************************************** 
* 
* Given a valid (IPv4) IP address, return a defanged version of that IP address.
* A defanged IP address replaces every period "." with "[.]".
*
* Example 1:
* Input: address = "1.1.1.1"
* Output: "1[.]1[.]1[.]1"
*            
**********************************************************************************/

string defangIPaddr(string address) {
    string defanged = "";
    for(int i = 0; i < address.size(); i++)
    {
        if(address[i] == '.')
            defanged+="[.]";
        else
            defanged+=address[i];
    }
    return defanged;
}
