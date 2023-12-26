import random
class ARTIST:
    def artist(song, rn):
        # 인디
        
        indiJoy = [
            '완벽해 - 레터플로우',
            '예쁜 말 - 어나니머스 아티스트',
            'UP DOWN - 어나니머스 아티스트',
            '뭘 믿고 그렇게 이쁜거니 - 레터플로우',
            'ocean view - 로시'
        ]
        indiSad = [
            '내 맘이 어떻든 - 레터플로우',
            '꺼져 - 이민석',
            '놓아 - 이민석',
            '무너져 - 바닐라 어쿠스틱',
            '미안해 - 스웨덴 세탁소'
        ]
        indiAnger = [
            'Hi Bully - 터치드',
            'lovers in the night - seori',
            '여우별 - 어나니머스 아티스트',
            '퇴사 - 이민석',
            '무음모드 - 와인루프'
        ]
        indiUnrest = [
            '아무도 그대를 바라지 않는 - 알레프',
            '나는 왜 - OOO',
            'Abduvida - 맥거핀',
            '자유 - 알레프',
            '두리번 - 맥거핀'
        ]
        indiBoring = [
            '너를 사랑한다는 말이 발음 안돼 - WET BOY',
            '긴밤 - 서리',
            'T - 맥거핀',
            'DISCO - 맥거핀',
            '춘곤 - 징고'
        ]

        # 힙합

        hipJoy = [
            'DPR LIVE - Martini Blue',
            'Loopy - SAVE(feat.Paloalto)',
            'lobonabeat! - 생일(feat.BILL STAX)',
            'Crush - Ibiza',
            'The Quiett - 귀감(feat.ZENE THE ZILLA)'
        ]
        hipSad = [
            'PATEKO - Rainy day(feat.ASH ISLAND, Skinny Brown)',
            '미란이 - Daisy(feat.pH-1)',
            'Crucial Star - Im OK(생각보다)',
            'Lil Boi - CREDIT(feat.염따,기리보이,Zion.T)',
            'The Quiett - 한강 gang(feat.Byung Un,창모)'
        ]
        hipAnger = [
            'nafla - 선빵(feat.Gaeko,기리보이)',
            'Dynamic Duo - 길을막지마',
            '이센스 - RADAR(feat.김심야)',
            'Sik-k - FIRE',
            'Uneducated Kid - 어쩌라고(feat.Beenzino)'
        ]
        hipUnrest = [
            'ASH ISLAND - Paranoid',
            'BLOO - Drama',
            'Dok2 - On My Way(feat.Zion.T)',
            '창모 - S T A R T',
            '기리보이 - 호랑이소굴(feat.Jvcki Wai)'
        ]
        hipBoring = [
            '죠지 - Boat',
            '릴러말즈 - Trip(feat.Hannah)',
            '기리보이 - Party People(feat.염따,Uneducated Kid)',
            'Lil Moshpit - Yooooo(feat.Kid Milli,sokodomo,Polodared)',
            '한요한 - 범퍼카(feat.NO:EL,Young B)'
        ]

        # 아이돌
        idolJoy = [
            '달링 - 걸스데이',
            '살짝 설렜어 - 오마이걸',
            '사랑인가봐 - 김세정',
            'Feel My Rhythm - 레드벨벳',
            '불꽃놀이 - 오마이걸',
            'we go - 프로미스나인',
            'LOVEBOMB - 프로미스나인'
        ]
        idolSad = [
            '사랑하는 법을 몰라서 - ft아일랜드',
            '사랑했었다 - 이홍기,유회승',
            '헤어지자 - 휘인',
            '잘 있어요 - 태일',
            'I Miss you -소유',
            'LOVE DIVE - IVE'
        ]
        idolAnger = [
            'ETA - 뉴진스',
            'Tomboy - 여자아이들',
            '미친거아니야?-2pm',
            '멍청이 - 화사',
            '가시나 - 선미'
        ]
        idolUnrest = [
            '파이팅 해야지 -부석순',
            'Warning - 김세정',
            'When This Rain Stops - 웬디',
            'SMILEY - 예나',
            '빛 - HOT'
        ]
        idolBoring = [
            'super shy - 뉴진스',
            '롤리폴리 - 티아라',
            '뿜뿜 - 모모랜드',
            'Weekend - 태연',
            'Perfect Night - 르세라핌',
            'shake it - 씨스타',
            'party - 소녀시대'

        ]

        # 발라드

        balJoy = [
            '걷자,집앞이야 - 스무살',
            '지그재그 - 맥거핀',
            '케이윌 - Love Blossom',
            '에릭남,치즈 - 사랑인가요',
            'Would u -레드벨벳 ',
            '나의 오랜 연인에게 - 다비치'
        ]
        balSad = [
            '환상 - 하현우',
            '너의 번호를 누르고 - #안녕',
            '에일리 - 첫눈처럼 너에게 가겠다.',
            'V.O.S - 울어',
            '혼자 - 거미',
            '노력 - 박원'
        ]
        balAnger = [
            'Fighting Another Day - Thyra',
            'Whiskey and Morphine - Alexander Jean',
            '브라운아이드소울 - 비켜줄께',
            '포맨 - 눈물',
            '헤어져줘서 고마워 - 벤',
            'To.X - 태연'

        ]
        balUnrest = [
            '밤하늘의 별을 4 - 양정승',
            'Dangerously - 찰리 푸스',
            '케이윌 - 이러지마 제발',
            '버즈 - 겁쟁이',
            '진심이 담긴 노래 - 케이시',
            '숨 - 이하이'
        ]
        balBoring = [
            '드라큘라 - 히미츠',
            '그거아세요 - 과나',
            '프라이머리 - ~42(feat.Sam Kim,eSNa)',
            '폴킴 - 집돌이',
            '별 보러가자 - 적재',
            'Think About Chu - 샘김'
        ]
        return (rn)
