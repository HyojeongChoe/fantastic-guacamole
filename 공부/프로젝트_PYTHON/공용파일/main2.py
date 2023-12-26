import EMOTION
import TITLE
from flask import Flask, request, jsonify
import random

application = Flask(__name__)

myreq1 = None
myreq2 = None
emo = EMOTION.EMOTION()
tit = TITLE.TITLE()

@application.route("/hello", methods=["POST"])
def handle_request1():
    global myreq1
    req = request.get_json()
    print(req["userRequest"]["utterance"])
    myreq1 = req["userRequest"]["utterance"]

    if request.path == "/hello":
        message_text = "오늘은 어떤 음악을 들으실 건가요?"
        quick_replies = [
            {"messageText": "힙합", "action": "message", "label": "힙합"},
            {"messageText": "아이돌", "action": "message", "label": "아이돌"},
            {"messageText": "인디", "action": "message", "label": "인디"},
            {"messageText": "발라드", "action": "message", "label": "발라드"}
        ]
        # else:
        #     return None

        res = {
            "version": "2.0",
            "template": {
                "outputs": [
                    {
                        "simpleText": {
                            "text": message_text
                        }
                    }
                ],
                "quickReplies": quick_replies
            }
        }
        return jsonify(res)
    else:
        return jsonify({"error": "Invalid request path"})


@application.route("/category", methods=["POST"])
def handle_request2():
    global myreq2
    req = request.get_json()
    print(req["userRequest"]["utterance"])
    myreq2 = req["userRequest"]["utterance"]
    
    if request.path == "/category":
        message_text = "오늘은 어떤 음악을 들으실 건가요?"
        quick_replies = [
            {"messageText": "기쁨", "action": "message", "label": "기쁨"},
            {"messageText": "슬픔", "action": "message", "label": "슬픔"},
            {"messageText": "분노", "action": "message", "label": "분노"},
            {"messageText": "불안", "action": "message", "label": "불안"},
            {"messageText": "심심", "action": "message", "label": "심심"}
        ]
        # else:
        #     return None

        res = {
            "version": "2.0",
            "template": {
                "outputs": [
                    {
                        "simpleText": {
                            "text": message_text
                        }
                    }
                ],
                "quickReplies": quick_replies
            }
        }
        return jsonify(res)
    else:
        return jsonify({"error": "Invalid request path"})


@application.route("/wm", methods=["POST"])
def handle_request3():
    global myreq1
    global myreq2
    req = request.get_json()
    print(req["userRequest"]["utterance"])
    myreq = req["userRequest"]["utterance"]
    rn = random.choice(1,6)
    getUrl = emo.indiJoy(rn)
    getTitle = tit.indiJoy(rn)
    res = {
        "version": "2.0",
        "template": {
            "outputs": [
                {
                    'basicCard': {
                        'title': '이런 노래는 어떤가요',
                        'description': getTitle,
                        'buttons': [
                            {
                                'action': 'webLink',
                                'label': '들어보기',
                                'webLinkUrl': getUrl
                            }
                        ]
                    }
                }
            ]
        }
    }
    return jsonify(res)
    
if __name__ == "__main__":
    application.run(host='0.0.0.0', port=80, debug=True)

