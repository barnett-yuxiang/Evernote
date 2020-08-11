
package main
 
//Protocol Buffer例子
//author: Xiong Chuan Liang
//date: 2015-3-7
 
import (
	"fmt"
	"github.com/golang/protobuf/proto"
	"pfmsg"
)
 
func main() {
 
	//编码
	data, err := Marshal()
	if err != nil {
		fmt.Println("Marshal() error: ", err)
	}
	fmt.Println("Marshal:\n", data)
 
	//解码
	Unmarshal(data)
}
 
func Marshal() ([]byte, error) {
 
	var status pfmsg.UserStatus
	status = pfmsg.UserStatus_ONLINE
 
	userInfo := &pfmsg.UserInfo{
		Id:     proto.Int32(10),
		Name:   proto.String("XCL"),
		Status: &status,
	}
 
	return proto.Marshal(userInfo)
}
 
func Unmarshal(data []byte) {
	userInfo := &pfmsg.UserInfo{}
 
	err := proto.Unmarshal(data, userInfo)
	if err != nil {
		fmt.Println("Unmarshal() error: ", err)
	}
 
	fmt.Println("Unmarshal()\n userInfo:", userInfo)
}
