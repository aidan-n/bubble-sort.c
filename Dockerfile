# use alpine as base image
FROM alpine AS build-env
# install gcc and musl-dev inside build-env container
RUN apk add --no-cache gcc musl-dev
# copy all files from current host directory into the build-env container
COPY . .
# Compile C code and generate hello binary executable file
RUN gcc -o bubble-sort bubble-sort.c
# run the program
CMD ["/bubble-sort"]