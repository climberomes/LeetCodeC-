class Solution {
public:
    string defangIPaddr(string address) {
        
        if(address[0] == '.')
            return "[.]" + defangIPaddr(address.substr(1));
        else
            return (address.size()!=0)? address[0] + defangIPaddr(address.substr(1)):"";
    }
};
