#pragma once

#include<thread>
#include<iostream>
#include<winsock.h>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include<atomic>
#include<Windows.h>
#include<mutex>
#pragma comment(lib,"Ws2_32.lib")
using namespace std;

inline void color(int c);						//����̨��ɫ����
bool init_WSA();								//SOCKET��ʼ������
void Get_IPs(vector<string>& IPs, string& Start_IP_Addr, string& End_IP_Addr);//IP������
void Scan_IP_Port(vector<string>& IPs, ofstream & out_IP, const size_t & size);//IPɨ�躯��
