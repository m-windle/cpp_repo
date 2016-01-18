#include "DataNode.h"
#include "string"

using namespace std;

// Constructor
DataNode::DataNode(string data)
{
	//
	/*
		DataNode myNode = DataNode("data value");
		New constructor creates pointer; Pointers are coder managed memory; 
		you would then have to delete it manually in code since it is no longer under machine control
	*/

	DataNode::setData(data);
	DataNode::nextNode = NULL;

	// Set first node if none exists
	if (DataNode::getFirstNode() == 0){
		DataNode::setFirstNode(this);
		DataNode::setCurrentNode(this);
	} 
	// Get current node and link this new node to the end of the list
	else{
		DataNode current = DataNode::getCurrentNode();

		DataNode::setCurrentNode(this);
	}
}

DataNode::~DataNode()
{
}

// NODES
// Retrieve values of a node
string DataNode::getData(){
	return DataNode::data;
}

DataNode* DataNode::getNextNode(){
	return DataNode::nextNode;
}

// Set the values of a node
void DataNode::setData(string data){
	DataNode::data = data;
}

void DataNode::setNextNode(DataNode* nextNode){
	DataNode::nextNode = nextNode;
}

// LINKED LIST
// Retrieve nodes of list
DataNode DataNode::getFirstNode(){
	return DataNode::firstNode;
}

DataNode DataNode::getCurrentNode(){
	return DataNode::currentNode;
}

// Set nodes of list
void DataNode::setFirstNode(DataNode node){
	DataNode::firstNode = node;
}

void DataNode::setCurrentNode(DataNode node){
	DataNode::currentNode = node;
}