/**
 * @return {Generator<number>}
 */
var fibGenerator = function * ()
{
    let a = 0;
    let b = 1;
    yield a;
    yield b;
    while (true)
    {
        const curr = a + b;
        yield curr;
        a = b;
        b = curr;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */