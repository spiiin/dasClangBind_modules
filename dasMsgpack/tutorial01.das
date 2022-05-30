require msgpack

[export]
def main
    var sbuf : msgpack_sbuffer
    var pk : msgpack_packer
    var mempool: msgpack_zone
    var deserialized: msgpack_object

    unsafe
        var ptrBuf = addr(sbuf)
        var ptrPk = addr(pk)
        var ptrMempool = addr(mempool)
        var ptrDeserialized = addr(deserialized)

        /* msgpack::sbuffer is a simple buffer implementation. */
        msgpack_sbuffer_init(ptrBuf)
        /* serialize values into the buffer using msgpack_sbuffer_write callback function. */
        msgpack_packer_init(ptrPk, ptrBuf)

        msgpack_pack_array(ptrPk, 4ul)
        msgpack_pack_int(ptrPk, 1)
        msgpack_pack_true(ptrPk)
        msgpack_pack_float(ptrPk, 3.0)
        msgpack_pack_str(ptrPk, 7ul)
        msgpack_pack_str_body(ptrPk, "example", 7ul);

        //print("{sbuf.data}, {sbuf.size}")

        msgpack_zone_init(ptrMempool, 2048ul)

        var data = 0ul;
        var ptrData = addr(data)
        msgpack_unpack(sbuf.data, sbuf.size, ptrData, ptrMempool, ptrDeserialized);
        msgpack_object_print(ptrDeserialized);

        msgpack_zone_destroy(ptrMempool);
        msgpack_sbuffer_destroy(ptrBuf)