hello <- function(name) {
    cat("Hello", name, "\n")
}

main <- function() {
    cat("Hello R!\n")
    args <- commandArgs(trailingOnly = TRUE)
    for(i in 1:length(args)) {
        hello(args[i])
    }
}

main();
