FROM --platform=linux/amd64 alpine:latest

WORKDIR /hanoi-towers

COPY main.c .

RUN apk add --no-cache build-base

RUN gcc -o main main.c

CMD [ "./main" ]

