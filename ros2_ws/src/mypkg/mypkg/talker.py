import rclpy
from rclpy.node import Node
from person_msgs.srv import Query

class talker(Node):
    def __init__(self):
        super().__init__("talker")
        self.pub = self.create_publisher(Int16, "countup", 10)
        self.create_timer(0.5, self.cb)
        self.n = 0






rclpy.init()
node = Node("talker")


def cb(request, response):
    if request.name == "武田遊星":
        response.age = 25
    else:
        response.age = 255

    return response


def main():
    srv = node.create_service(Query, "query", cb)
    rclpy.spin(node)

