#include <bits/stdc++.h>
using namespace std;

struct Incident
{
    int incidentID;
    string description;
    Incident *next;
};

struct LocationNode
{
    int locationID;
    string area;
    string city;
    Incident *incidentHead;
    LocationNode *left;
    LocationNode *right;
    int height;
};

int getHeight(LocationNode *node)
{
    return (node == NULL) ? 0 : node->height;
}

int getBalance(LocationNode *node)
{
    return (node == NULL) ? 0 : getHeight(node->left) - getHeight(node->right);
}

Incident *createInc(int id, const string &desc)
{
    Incident *newIncident = new Incident();
    newIncident->incidentID = id;
    newIncident->description = desc;
    newIncident->next = NULL;
    return newIncident;
}

LocationNode *createLocationNode(int id, const string &area, const string &city)
{
    LocationNode *newNode = new LocationNode();
    newNode->locationID = id;
    newNode->area = area;
    newNode->city = city;
    newNode->incidentHead = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1; 
    return newNode;
}

LocationNode *rightRotate(LocationNode *y)
{
    LocationNode *x = y->left;
    LocationNode *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

LocationNode *leftRotate(LocationNode *x)
{
    LocationNode *y = x->right;
    LocationNode *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

LocationNode *insertLoc(LocationNode *node, int locationID, const string &area, const string &city)
{
    if (node == NULL)
    {
        return createLocationNode(locationID, area, city);
    }

    if (locationID < node->locationID)
    {
        node->left = insertLoc(node->left, locationID, area, city);
    }
    else if (locationID > node->locationID)
    {
        node->right = insertLoc(node->right, locationID, area, city);
    }
    else
    {
        return node;
    }

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    int balance = getBalance(node);
    
    // Left Left Case
    if (balance > 1 && locationID < node->left->locationID)
    {
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && locationID > node->right->locationID)
    {
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && locationID > node->left->locationID)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && locationID < node->right->locationID)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void addInc(LocationNode *location, int incidentID, const string &description)
{
    if (location == NULL)
    {
        cout << "Location not found!" << endl;
        return;
    }

    Incident *newIncident = createInc(incidentID, description);
    newIncident->next = location->incidentHead;
    location->incidentHead = newIncident;
}

void deleteInc(LocationNode *location, int incidentID)
{
    if (location == NULL)
    {
        cout << "Location not found!" << endl;
        return;
    }

    Incident *current = location->incidentHead;
    Incident *previous = NULL;

    while (current != NULL && current->incidentID != incidentID)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Incident not found!" << endl;
        return;
    }

    if (previous == NULL)
    {
        location->incidentHead = current->next; 
    }
    else
    {
        previous->next = current->next; 
    }

    delete current; 
}

void displayInc(LocationNode *location)
{
    if (location == NULL)
    {
        cout << "Location not found!" << endl;
        return;
    }

    Incident *current = location->incidentHead;
    cout << "Incidents at Location ID " << location->locationID << " (" << location->area << "):" << endl;
    while (current != NULL)
    {
        cout << "Incident ID: " << current->incidentID << ", Description: " << current->description << endl;
        current = current->next;
    }
}

void inOrderTraversal(LocationNode *node)
{
    if (node != NULL)
    {
        inOrderTraversal(node->left);
        cout << "Location ID: " << node->locationID << ", Area: " << node->area << ", City: " << node->city << endl;
        displayInc(node);
        inOrderTraversal(node->right);
    }
}

LocationNode *removeLoc(LocationNode *root, int locationID)
{
    if (root == NULL)
    {
        return root;
    }

    if (locationID < root->locationID)
    {
        root->left = removeLoc(root->left, locationID);
    }
    else if (locationID > root->locationID)
    {
        root->right = removeLoc(root->right, locationID);
    }
    else
    {
        if ((root->left == NULL) || (root->right == NULL))
        {
            LocationNode *temp = root->left ? root->left : root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
            {
                *root = *temp; 
            }
            delete temp;
        }
        else
        {
            LocationNode *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }

            root->locationID = temp->locationID;

            root->right = removeLoc(root->right, temp->locationID);
        }
    }

    if (root == NULL)
    {
        return root;
    }
    
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getBalance(root);
    
    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
    {
        return rightRotate(root);
    }

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
    {
        return leftRotate(root);
    }

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

int main()
{
    LocationNode *root = NULL;

    root = insertLoc(root, 110, "G-13", "Isl");
    root = insertLoc(root, 115, "F-7", "Isl");
    root = insertLoc(root, 125, "F-9 Markaz", "Isl");

   addInc(root, 101, "Fire near bank");
   addInc(root, 102, "Traffic Accident");
   addInc(root->left, 201, "Main Road Suicide Attack");
   addInc(root->left, 202, "Gun Fires");

    cout << "In-order traversal:" << endl;
    inOrderTraversal(root);

    cout << "\nDeleting incident with ID 101 from location ID 110:" << endl;
    deleteInc(root, 101);
    displayInc(root);

    cout << "\nRemoving location with ID 115:" << endl;
    root = removeLoc(root, 115);
    inOrderTraversal(root);

    return 0;
}