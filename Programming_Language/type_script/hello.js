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
