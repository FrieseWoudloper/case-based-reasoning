% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils.R
\name{terminalNodes}
\alias{terminalNodes}
\title{Get the terminal node id of a RandomForest Object}
\usage{
terminalNodes(x, rfObject)
}
\arguments{
\item{x}{a data.frame}

\item{rfObject}{\code{ranger} object}
}
\value{
Matrix with terminal node IDs for all observations in x (rows) and
        trees (columns)
}
\description{
Extracts for each observation and for each tree in the forest the terminal 
node id. The index of terminal nodes are starting with 1, e.g., the root node has id 1
}
\examples{
library(ranger)
rf.fit <- ranger(Species ~ ., data = iris, num.trees = 5, write.forest = TRUE)
dfNodes <- terminalNodes(iris[, -5], rf.fit)

}
