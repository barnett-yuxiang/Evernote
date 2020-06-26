package com.example.main;

import com.example.example.MQMessageProtos;
import com.google.protobuf.InvalidProtocolBufferException;

public class TestPB {
    public static void main(String[] args) {
        MQMessageProtos.Item item1 = MQMessageProtos.Item.newBuilder()
                .setKey("1")
                .putFields("field1", "value1")
                .putFields("field2", "value2")
                .build();
        MQMessageProtos.Item item2 = MQMessageProtos.Item.newBuilder()
                .setKey("2")
                .putFields("field3", "value3")
                .putFields("field4", "value4")
                .build();
        MQMessageProtos.MQMessage mqMessage = MQMessageProtos.MQMessage.newBuilder()
                .setName("testName")
                .setOperationType(MQMessageProtos.MQMessage.OperationType.UPDATE)
                .addItems(item1)
                .addItems(item2)
                .build();

        byte[] byteArray = mqMessage.toByteArray();

        try {
            MQMessageProtos.MQMessage message = MQMessageProtos.MQMessage.parseFrom(byteArray);
            System.out.println(message.getName());
            System.out.println(message.getItems(0).getAllFields());
            System.out.println(message.getItems(0).getFieldsOrDefault("field1", "default-value1"));
            System.out.println(message.getItems(1).getAllFields());
        } catch (InvalidProtocolBufferException e) {
            e.printStackTrace();
        }
    }
}
