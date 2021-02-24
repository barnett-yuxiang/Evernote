function sayHello(person) {
    if (typeof person === 'string') {
        return 'Hello, ' + person;
    }
    else {
        throw new Error('person is not a string');
    }
}
var user = 'Tom';
console.log(sayHello(user));
console.log(typeof user);
var user2 = [0, 1, 2];
console.log(typeof user2);
