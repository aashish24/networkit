/*
 * ConnectedComponents.cpp
 *
 *  Created on: Dec 16, 2013
 *      Author: cls
 */

#ifndef CONNECTEDCOMPONENTS_H_
#define CONNECTEDCOMPONENTS_H_

#include "../graph/Graph.h"
#include "../graph/BFS.h"
#include "../structures/Partition.h"

namespace NetworKit {

/**
 * @ingroup properties
 * Determines the connected components of an undirected graph.
 */
class ConnectedComponents {
public:
	/**
	 * Create ConnectedComponents class for Graph @a G.
	 *
	 * @param G The graph.
	 */
	ConnectedComponents(const Graph& G);

	/** Default destructor */
	virtual ~ConnectedComponents() = default;
	/**
	 * This method determines the connected components for the graph given in the constructor.
	 */
	void runSequential();

	/**
	 * This method determines the connected components for the graph given in the constructor.
	 */
	void run();

	/**
	 * Get the number of connected components.
	 *
	 * @return The number of connected components.
	 */
	count numberOfComponents();

	/**
	 * Get the the component in which node @a u is situated.
	 *
	 * @param[in]	u	The node whose component is asked for.
	 */
	count componentOfNode(node u);


	/** 
	 * Get a Partition that represents the components.
	 *
	 * @return A partition representing the found components.
	 */
	Partition getPartition();
    
    /**
     *Return the map from component to size
     */
    std::map<index, count> getComponentSizes();


private:
	const Graph& G;
	Partition component;
};

}


#endif /* CONNECTEDCOMPONENTS_H_ */
