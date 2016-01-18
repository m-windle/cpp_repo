#include <string>
#pragma once

using namespace std;

class DataNode
{
	string data;
	DataNode* nextNode;

	public:
		DataNode(string);
		~DataNode();

		// Linked list related
		void setFirstNode(DataNode);
		void setCurrentNode(DataNode);
		DataNode getFirstNode();
		DataNode getCurrentNode();

		// Node related
		void setData(string);
		void setNextNode(DataNode*);
		DataNode* getNextNode();
		string getData();
};

