FROM alpine:latest

WORKDIR /hanoi

COPY main.c .

RUN apk add --no-cache build-base

RUN gcc -o main main.c

CMD ["./main"]

