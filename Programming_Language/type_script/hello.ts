function sayHello(person: string) {
    if (typeof person === 'string') {
        return 'Hello, ' + person;
    } else {
        throw new Error('person is not a string');
    }
}

let user = 'Tom';
console.log(sayHello(user));
console.log(typeof user);

let user2 = [0, 1, 2];
console.log(typeof user2);
