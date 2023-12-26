-- Ʈ���� ����ϱ����� ���� �ƿ�ǲ�� ON ��Ų��
SET SERVEROUTPUT ON;

DROP TABLE INVENTORY;
DROP TABLE CATEGORY;
DROP TABLE COMPANY;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

DROP SEQUENCE FOOD_BARCODE;         -- ��ǰ�ڵ� ������ 
DROP SEQUENCE INVENTORY_BARCODE;    -- �κ��丮 ������

CREATE SEQUENCE FOOD_BARCODE START WITH 846543 INCREMENT BY 17; -- ��ǰ�ڵ� 846543���� �����ؼ� 17�� ����
CREATE SEQUENCE INVENTORY_BARCODE START WITH 846543 INCREMENT BY 17; -- �κ��丮�ڵ� 846543���� �����ؼ� 17�� ����

CREATE TABLE CATEGORY(              -- ǰ�� ���̺� (�� ���̺��� �����Ͱ��� ����)
    CODE VARCHAR2(10) PRIMARY KEY,  -- ǰ��з��ڵ� 
    KIND VARCHAR2(20)               -- ǰ�� �з�
);
CREATE TABLE COMPANY(                  -- ȸ�� ���̺�
    CODE INT DEFAULT FOOD_BARCODE.NEXTVAL PRIMARY KEY,  -- ��ǰ �ڵ�(��ǰ���� �ٸ�, ������ ���)
    COMPANY VARCHAR2(30)            -- ����ȸ���
);
CREATE TABLE INVENTORY(             -- ���� ���̺� 
    CATEGORY_CODE VARCHAR2(10),     -- ǰ��з��ϱ����� �ڵ� (�ܷ�Ű) -- CATEGORY ���̺��� CODE�� ����
    FOOD_CODE INT DEFAULT INVENTORY_BARCODE.NEXTVAL, -- ��ǰ �ڵ�(�ܷ�Ű) -- COMPANY ���̺��� CODE�� ����
    NAME VARCHAR2(50),              -- ��ǰ�� 
    CNT INT ,                        -- ���
    PRICE INT                     -- ���� ����
);
-- CATEGORY ���̺��� CODE�� �����Ͽ� INVENTORY ���̺��� CATEGORY_CODE�� �ܷ�Ű�� ����
ALTER TABLE INVENTORY ADD CONSTRAINT FK_CATEGORY_CODE FOREIGN KEY(CATEGORY_CODE) REFERENCES CATEGORY(CODE);   
                                                                                                           
 -- COMPANY ���̺��� CODE�� �����Ͽ� INVENTORY ���̺��� FOOD_CODE�� �ܷ�Ű�� ����                                                                                      
ALTER TABLE INVENTORY ADD CONSTRAINT FK_FOOD_CODE FOREIGN KEY(FOOD_CODE) REFERENCES COMPANY(CODE);     
                                                                                       
-- CATEGORY ���̺� ������ �߰�/ ǰ��з��ڵ�(CODE), ǰ�� �з�(KIND) 
INSERT INTO CATEGORY VALUES ('AB01', '����Ļ�');    -- ����
INSERT INTO CATEGORY VALUES ('AB02', '����');       -- ȿ��
INSERT INTO CATEGORY VALUES ('AB03', '���̽�ũ��');   -- ����
INSERT INTO CATEGORY VALUES ('AB04', '��ǰ');       --ȿ��
INSERT INTO CATEGORY VALUES ('AB05', '����');        -- ����

-- CATEGORY ���̺� ���
SELECT * FROM CATEGORY;

-- COMPANY ���̺� ������ �߰�/ ȸ���(COMPANY)
-- ����Ļ� ������ �߰�
INSERT INTO COMPANY(COMPANY) VALUES ('PB');
INSERT INTO COMPANY(COMPANY) VALUES ('PB');
INSERT INTO COMPANY(COMPANY) VALUES ('PB');
INSERT INTO COMPANY(COMPANY) VALUES ('PB');
INSERT INTO COMPANY(COMPANY) VALUES ('PB');
-- ���� ������ �߰�
INSERT INTO COMPANY(COMPANY) VALUES ('ũ���');
INSERT INTO COMPANY(COMPANY) VALUES ('������');
INSERT INTO COMPANY(COMPANY) VALUES ('ũ���');
INSERT INTO COMPANY(COMPANY) VALUES ('����');
INSERT INTO COMPANY(COMPANY) VALUES ('�����۽�');
-- ���̽�ũ�� ������ �߰�
INSERT INTO COMPANY(COMPANY) VALUES ('�Ե�');
INSERT INTO COMPANY(COMPANY) VALUES ('���׷�');
INSERT INTO COMPANY(COMPANY) VALUES ('�Ե�');
INSERT INTO COMPANY(COMPANY) VALUES ('�㽬');
INSERT INTO COMPANY(COMPANY) VALUES ('����');
-- ��ǰ ������ �߰�
INSERT INTO COMPANY(COMPANY) VALUES ('���');
INSERT INTO COMPANY(COMPANY) VALUES ('���ѱ�');
INSERT INTO COMPANY(COMPANY) VALUES ('���ѱ�');
INSERT INTO COMPANY(COMPANY) VALUES ('���');
INSERT INTO COMPANY(COMPANY) VALUES ('���');
-- ���� ������ �߰�
INSERT INTO COMPANY(COMPANY) VALUES ('��ī�ݶ�');
INSERT INTO COMPANY(COMPANY) VALUES ('��ī�ݶ�');
INSERT INTO COMPANY(COMPANY) VALUES ('�Ե�');
INSERT INTO COMPANY(COMPANY) VALUES ('�Ե�');
-- COMPANY ���̺� ���
SELECT * FROM COMPANY;

-- ���� ���̺� ������ �߰�/ ��ǰ�̸�(NAME), ǰ�� �ڵ�(FOOD_CODE), ���(CNT), ����(PRICE), 
-- ����Ļ� ������ �Է�
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�Ķ��̵�ġŲ' ,'AB01', 3, 9900); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�ҽ�����' ,'AB01', 2, 2400); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�������Ű' ,'AB01', 10, 1000); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�۷�����嵵��' ,'AB01', 15, 1300); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�����̾�Ʈ������' ,'AB01', 4, 2900); 
-- ���� ������ �߰�
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��Ĩ', 'AB02', 15, 3000);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('������' ,'AB02', 13, 2000);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('ȭ��Ʈ����','AB02', 42, 3300);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('���͸���Ű','AB02', 18, 1700);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�����۽���������','AB02', 24, 4000);
-- ���̽�ũ�� ������ �߰�
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��ũ����', 'AB03', 13, 1500);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('���ؾ�θ���', 'AB03', 18, 2200);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�����ڵ���', 'AB03', 21, 1500);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�������ڹ�', 'AB03', 14, 2500);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��ġ��ġ��', 'AB03', 6, 1500);
-- ��ǰ ������ �߰�
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('����û����Ķ����', 'AB04', 20, 1800);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('�Ŵ������', 'AB04', 25, 1800);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��������', 'AB04', 18, 1500);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('���ձ�������', 'AB04', 18, 1800);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��«����', 'AB04', 7, 1800);
-- ���� ������ �߰�
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��ũ���η�����355','AB05', 13, 2000); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('��ī�ݶ�����','AB05', 13, 2000); 
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('����ݶ�����ĵ355','AB05', 13, 19000);
INSERT INTO INVENTORY(NAME,CATEGORY_CODE,CNT,PRICE) VALUES ('����ݶ�ĵ350','AB05', 13, 19000);

-- ���� ���̺� ���
SELECT * FROM INVENTORY;

COMMIT;
-------------------------------------��ȸ-------------------------------------
-- ��� ���̺� JOIN�ؼ� ��� ��ȸ
SELECT * FROM INVENTORY JOIN COMPANY ON INVENTORY.FOOD_CODE = COMPANY.CODE JOIN CATEGORY ON CATEGORY.CODE = INVENTORY.CATEGORY_CODE; 
-- ��� ���̺� ��ȸ �ϸ� ��ġ�� �Ӽ���(��ǰ�ڵ�,ī�װ��ڵ�)�� �����ϱ� �ʿ��� �����鸸 �Ӽ� �̾Ƽ� �� �����.
CREATE VIEW ALL_INFO AS
SELECT KIND, NAME, PRICE, CNT, COMPANY, FOOD_CODE �����ڵ� FROM COMPANY, CATEGORY, INVENTORY WHERE INVENTORY.FOOD_CODE = COMPANY.CODE AND CATEGORY.CODE = INVENTORY.CATEGORY_CODE;
-- ������� �� ��ȸ(�� �̸� : ALL_INFO)
SELECT * FROM ALL_INFO;
-- ȸ�纰 ��ǰ ����
SELECT COMPANY, COUNT(*) ��ǰ���� FROM ALL_INFO GROUP BY COMPANY;
-- ȸ�纰 ��ǰ�� 3�� ���� �̻� ���
SELECT COMPANY, COUNT(*) ��ǰ���� FROM ALL_INFO GROUP BY COMPANY HAVING COUNT(*) >= 3;
-- Ư�� �̸��� �˻� ��(EX.����) �����ڵ� ,���� ,���ĸ� ,���� ,��� ,������ ����ϱ�
SELECT * FROM ALL_INFO WHERE NAME LIKE '%����%'; 
-- ���� ���� ������ ��ǰ ������ ����ϱ� (��ø���ǹ� ���)
SELECT * FROM ALL_INFO WHERE PRICE = (SELECT MIN(PRICE) FROM ALL_INFO);
-------------------------- ����-----------------------------------------
-- 1. ǰ�� ���� ���涧 INVENTORY ���̺� insert �ϴ� 2�� ���ν��� ����� 
-- ���� �����Ҷ� ���ν��� �ΰ��� �������� �Ѱ����ϸ� ���ڵ� ���δ�
-- COMPANY�� �Ǵµ� INVENTORY�� �ȵȴ�

-- COMPANY ���̺� ������ �߰�
CREATE OR REPLACE PROCEDURE INSERT_COMPANY
(
    INSERT_CODE INT,
    INSERT_COMPANY VARCHAR2
)
IS BEGIN
INSERT INTO COMPANY (CODE,COMPANY) VALUES(INSERT_CODE,INSERT_COMPANY);
END INSERT_COMPANY;
/

-- ���ν��� ȣ��
EXEC INSERT_COMPANY(FOOD_BARCODE.NEXTVAL,'�׽�Ʈȸ��');

-- Ȯ�� ���
SELECT * FROM COMPANY;

-- ���ν��� ����
DROP PROCEDURE INSERT_COMPANY;

-- INVENTORY�� �ȵȴ� 
-- INVENTORY ���̺� ������ �߰�
CREATE OR REPLACE PROCEDURE INSERT_INVENTORY
(
    INSERT_NAME VARCHAR2,   -- ��ǰ��
    INSERT_CGCODE VARCHAR2, -- ī�װ��ڵ� �з��ڵ�
    INSERT_FCODE INT,       -- ��ǰ�ڵ�
    INSERT_CNT INT,         -- ���
    INSERT_PRICE INT        -- ����
)
IS BEGIN
INSERT INTO INVENTORY (NAME,CATEGORY_CODE,FOOD_CODE,CNT,PRICE) VALUES(INSERT_NAME,INSERT_CGCODE,INSERT_FCODE,INSERT_CNT,INSERT_PRICE);
END INSERT_INVENTORY;
/
-- INVENTORY ���̺� ������ �߰��ϴ� ���ν��� ȣ�� 
EXEC INSERT_INVENTORY('�׽�Ʈ���','AB01',INVENTORY_BARCODE.NEXTVAL,1,3000);


-- ���ν��� ����
DROP PROCEDURE INSERT_INVENTORY;


-- 2. ��� ����
-- � ��ǰ�� ��� ���� �� ���ΰ�? �̸��ļ� ������
CREATE OR REPLACE PROCEDURE UPDATE_CNT
(
    UPDATE_CNT INT,
    SEARCH_NAME VARCHAR2
)    
IS BEGIN 
UPDATE INVENTORY SET CNT = UPDATE_CNT WHERE NAME = SEARCH_NAME;
END UPDATE_CNT;
/
-- ��ǰ�� �̸��� ���ǿ� �������� ����� �����ϴ� ���ν��� ȣ�� ������ ���, �˻��� ��ǰ��
EXEC UPDATE_CNT(2,'�Ķ��̵�ġŲ'); 

-- ��� Ȯ�� ���
SELECT NAME,CNT FROM INVENTORY;

-- ���ν��� ����
DROP PROCEDURE UPDATE_CNT;

-- 3. ���� ����
-- � ��ǰ ������ ���� �� ���ΰ�?
-- ��ǰ�� �̸��� ���ǿ� �������� ������ ����
CREATE OR REPLACE PROCEDURE UPDATE_PRICE
(
    UPDATE_PRICE INT,
    SEARCH_NAME VARCHAR2
)
IS BEGIN 
UPDATE INVENTORY SET PRICE = UPDATE_PRICE WHERE NAME = SEARCH_NAME;
END UPDATE_PRICE;
/

-- ��ǰ�� �̸��� ���ǿ� �������� ������ �����ϴ� ���ν��� ȣ��
EXEC UPDATE_PRICE(9000,'�Ķ��̵�ġŲ'); -- �����Ұ���, �˻�����ǰ��

-- ��� Ȯ�� ���
SELECT NAME,PRICE FROM INVENTORY;

-- ���ν��� ����
DROP PROCEDURE UPDATE_PRICE;

---------------------- ���� ------------------------------------
-- 1. ��ü ������ ����
CREATE OR REPLACE PROCEDURE DELETE_ALL
IS BEGIN
    DELETE FROM INVENTORY;
END DELETE_ALL;
/
-- ��ü������(INVENTORY) ���� ���ν��� ȣ��
EXEC DELETE_ALL();
-- INVENTORY Ȯ�� ���
SELECT * FROM INVENTORY;
-- ���ν��� ���� 
DROP PROCEDURE DELETE_ALL;

-- 2. ��ǰ �����ͻ��� - �̸�����
CREATE OR REPLACE PROCEDURE DELETE_NAME(
    DEL_NAME IN VARCHAR2
)
IS BEGIN
    DELETE FROM INVENTORY WHERE NAME = DEL_NAME;
END DELETE_NAME;
/
--��ǰ�� ���� ���ν��� ȣ��
-- ������ ���Ƿ� �־����
EXEC DELETE_NAME('�Ķ��̵�ġŲ'); 
-- INVENTORY Ȯ�� ���
SELECT * FROM INVENTORY;
--���ν��� ����
DROP PROCEDURE DELETE_NAME;

------------------ Ʈ���� ------------------------------
-- 1. ���� �߰��ɶ� '������ �߰��Ǿ����ϴ�.'
-- COMPANY ���̺� �߰�
CREATE OR REPLACE TRIGGER ALARM_INSERT_COMPANY
BEFORE INSERT ON COMPANY     
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �߰��Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_INSERT_COMPANY;

-- IVENTORY ���̺� �߰�
CREATE OR REPLACE TRIGGER ALARM_INSERT_INVENTORY
BEFORE INSERT ON INVENTORY    
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �߰��Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_INSERT_INVENTORY;

-- 2. ���� �����ɋ� '������ �����Ǿ����ϴ�.'
-- COMPANY ���̺� ����
CREATE OR REPLACE TRIGGER ALARM_UPDATE_COMPANY
BEFORE UPDATE ON COMPANY     
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �����Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_UPDATE_COMPANY;
-- IVENTORY ���̺� ����
CREATE OR REPLACE TRIGGER ALARM_UPDATE_INVENTORY
BEFORE UPDATE ON INVENTORY    
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �����Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_UPDATE_INVENTORY;

-- 3. ���� �����ɶ� '������ �����Ǿ����ϴ�.'
-- COMPANY ���̺� ����
CREATE OR REPLACE TRIGGER ALARM_DELETE_COMPANY
BEFORE DELETE ON COMPANY     
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �����Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_DELETE_COMPANY;
-- IVENTORY ���̺� ����
CREATE OR REPLACE TRIGGER ALARM_DELETE_INVENTORY
BEFORE DELETE ON INVENTORY    
FOR EACH ROW
DECLARE BEGIN
    DBMS_OUTPUT.PUT_LINE('�����Ͱ� �����Ǿ����ϴ�.');
END; 
/
DROP TRIGGER ALARM_DELETE_INVENTORY;

COMMIT;