/*****************************************************************************
** File Name:        Intelligent algorithm library(IAL)
** Author:           SiQi_Wang
** Date:             2018/04/26
** Version:          1.0.1
** Description:      �����㷨������
******************************************************************************
**                         Important Edit History                            *
** --------------------------------------------------------------------------*
** DATE           		NAME             				DESCRIPTION          *
** 2018/04/24     		SiQi_Wang                       Create               *
** --------------------------------------------------------------------------*
******************************************************************************
**                         Important Edit Update                             *
** --------------------------------------------------------------------------*
** DATE           		NAME             				DESCRIPTION          *
** 2018/04/26     		SiQi_Wang                       Create               *
** --------------------------------------------------------------------------*
** 1������������Ƶĵݹ�Ͱ�����㷨ʵ��
** 2) ��߲��������㷨³����
******************************************************************************
** Copyright(c) 2018, SiQi_Wang
** All rights reserved.
** Distributed under the BSD license.
** (See accompanying file LICENSE.txt at https://LICENSE.txt)
******************************************************************************/
#pragma once
/*---------------------------------------------------------------------------*
**                              Include Files                                *
**---------------------------------------------------------------------------*/
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;
/*---------------------------------------------------------------------------*
**                         Function Statement                                *
**---------------------------------------------------------------------------*/
/**--------------------------------------------------------------------------*
Name:		    Swap
Discribe:		���ݽ���
Parameter:      a, b (����������)
**---------------------------------------------------------------------------*/
template <typename T> void Swap(T &a, T &b);

/**--------------------------------------------------------------------------*
Name:		    isDigit
Discribe:		�����ж�
Parameter:      ch (�ַ�)
Return:		    bool : true(������), false(��������)
**---------------------------------------------------------------------------*/
bool isDigit(char &ch);

/**--------------------------------------------------------------------------*
Name:		    gcd
Discribe:		���Լ��
Parameter:      num1, num2
Return:		    int (���Լ��)
**---------------------------------------------------------------------------*/
int gcd(int &num1, int &num2);

/**--------------------------------------------------------------------------*
Name:		    SwapStr
Discribe:		�ַ�����ת (����&�Ӵ�)
Parameter:      str(�ַ���), len(�Ӵ���), start, end(�±�����,��0��ʼ)
Header:         #include <string>
				#include <cstring>
**---------------------------------------------------------------------------*/
//����1   Input : string���ַ��� ��������ת��
void SwapStr(string &str);
//����2   Input : C�ַ�����ָ�� ��������ת��
void SwapStr(char *str);
//����3   Input : string���ַ��� ������len�Ӵ���ת��
void SwapStr(string &str, const int &len);
//����4   Input : C�ַ�����ָ�� ������len�Ӵ���ת��
void SwapStr(char *str, const int &len);
//����5   Input : string���ַ���, �±�������Χ[start, end]�� ��(str[start], str[end])�Ӵ���ת��
void SwapStr(string &str, const int &start, const int &end);
//����6   Input : C�ַ�����ָ��, �±�������Χ[start, end]�� ��(str[start], str[end])�Ӵ���ת��
void SwapStr(char *str, const int &start, const int &end);

/**--------------------------------------------------------------------------*
Name:		    isPalindrome
Discribe:		�����ж� (����&�Ӵ�)
Parameter:      str(�ַ���), len(�Ӵ���), start, end(�±�����,��0��ʼ)
Return:		    bool : true(�ǻ���), false(���ǻ���)
Header:         #include <string>
				#include <cstring>
**---------------------------------------------------------------------------*/
bool isPalindromeCore(const char *start, const char *end);
//����1   Input : string���ַ��� �����������жϡ�
bool isPalindrome(const string &str);
//����2   Input : C�ַ�����ָ�� �����������жϡ�
bool isPalindrome(const char *str);
//����3   Input : string���ַ��� ������len�Ӵ������жϡ�
bool isPalindrome(const string &str, const int &len);
//����4   Input : C�ַ�����ָ�� ������len�Ӵ������жϡ�
bool isPalindrome(const char *str, const int &len);
//����5   Input : string���ַ��� ��(str[start], str[end])�Ӵ������жϡ�
bool isPalindrome(const string &str, const int &start, const int &end);
//����6   Input : C�ַ�����ָ�� ��(str[start], str[end])�Ӵ������жϡ�
bool isPalindrome(const char *str, const int &start, const int &end);

/**--------------------------------------------------------------------------*
Name:		    Permutation
Discribe:		ȫ���У���������&�Ӵ���ȫ���м�����������
Parameter:      str(�ַ���), len(�Ӵ���), start, end(�±�����,��0��ʼ)
Return:		    permuPair : permuPair.array(����), permuPair.count(������)
Header:         #include <string>
				#include <cstring>
				#include <vector>
**---------------------------------------------------------------------------*/
struct permuPair
{
	vector<string> array;
	int count = 0;
};
void PermutationCore(char *pStr, char *pBegin, permuPair &res);
//����1   Input : string���ַ��� ���������С�
permuPair Permutation(const string &str);
//����2   Input : C�ַ�����ָ�� ���������С�
permuPair Permutation(const char *str);
//����3   Input : string���ַ��� ������len�Ӵ�ȫ���С�
permuPair Permutation(const string &str, const int &len);
//����4   Input : C�ַ�����ָ�� ������len�Ӵ�ȫ���С�
permuPair Permutation(const char *str, const int &len);
//����5   Input : string���ַ��� ��(str[start], str[end])�Ӵ�ȫ���С�
permuPair Permutation(const string &str, const int &start, const int &end);
//����6   Input : C�ַ�����ָ�� ��(str[start], str[end])�Ӵ�ȫ���С�
permuPair Permutation(const char *str, const int &start, const int &end);

/**--------------------------------------------------------------------------*
Name:		    Combination & CombinationN
Discribe:		ȫ��ϣ���������&�Ӵ���ȫ��ϡ��ַ�ȫ��ϼ����������
Parameter:      str(�ַ���), len(�Ӵ���), n(��ϴ���), start, end(�±�����,��0��ʼ)
Return:		    combPair : combPair.array(���), combPair.count(�����)
Header:         #include <string>
				#include <cstring>
				#include <vector>
**---------------------------------------------------------------------------*/
struct combPair
{
	vector<vector<char>> array;
	int count = 0;
};
void CombinationCore(char *pStr, int number, vector<char> &ans, combPair &result);
//����1   Input : string���ַ��� ������ȫ��ϡ�
combPair Combination(const string &str);
//����2   Input : C�ַ�����ָ�� ������ȫ��ϡ�
combPair Combination(const char *str);
//����3   Input : string���ַ��� ��ǰlen���ַ���ȫ��ϡ�
combPair Combination(const string &str, const int &len);
//����4   Input : C�ַ�����ָ�� ��ǰlen���ַ���ȫ��ϡ�
combPair Combination(const char *str, const int &len);
//����5   Input : string���ַ��� ��(str[start], str[end])�Ӵ�ȫ��ϡ�
combPair Combination(const string &str, const int &start, const int &end);
//����6   Input : C�ַ�����ָ�� ��(str[start], str[end])�Ӵ�ȫ��ϡ�
combPair Combination(const char *str, const int &start, const int &end);

//����1   Input : string���ַ���, ����ַ���n  ������n�ַ���ϡ�
combPair CombinationN(const string &str, const int &n);
//����2   Input : C�ַ�����ָ��, ����ַ���n  ������n�ַ���ϡ�
combPair CombinationN(const char *str, const int &n);
//����3   Input : string���ַ���, ����ַ���n ������len�Ӵ�n�ַ���ϡ�
combPair CombinationN(const string &str, const int &len, const int &n);
//����4   Input : C�ַ�����ָ��, ����ַ���n ������len�Ӵ�n�ַ���ϡ�
combPair CombinationN(const char *str, const int &len, const int &n);
//����5   Input : string���ַ���, ����ַ���n ��(str[start], str[end])�Ӵ�n�ַ���ϡ�
combPair CombinationN(const string &str, const int &start, const int &end, const int &n);
//����6   Input : C�ַ�����ָ��, ����ַ���n ��(str[start], str[end])�Ӵ�n�ַ���ϡ�
combPair CombinationN(const char *str, const int &start, const int &end, const int &n);

/**--------------------------------------------------------------------------*
Name:		    BubbleSort
Discribe:		ð������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
//����1   Input : vector<int>�����������  ��������������
void BubbleSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BubbleSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BubbleSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void BubbleSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void BubbleSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    SelectSort
Discribe:		ѡ������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
//����1   Input : vector<int>�����������  ��������������
void SelectSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void SelectSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void SelectSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void SelectSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void SelectSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    InsertSort
Discribe:		��������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
//����1   Input : vector<int>�����������  ��������������
void InsertSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void InsertSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void InsertSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void InsertSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void InsertSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    ShellSort
Discribe:		ϣ������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
//����1   Input : vector<int>�����������  ��������������
void ShellSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void ShellSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void ShellSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void ShellSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void ShellSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    QuickSort
Discribe:		��������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
template <typename T> void QuickSortCore(T &array, int begin, int end, const int &rule);
//����1   Input : vector<int>�����������  ��������������
void QuickSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void QuickSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void QuickSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void QuickSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void QuickSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    MergeSort
Discribe:		�鲢����
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
template <typename T> void MergeSortCore(T &array, T &ans, int start, int end, const int &rule);
//����1   Input : vector<int>�����������  ��������������
void MergeSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void MergeSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void MergeSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void MergeSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void MergeSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    HeapSort
Discribe:		������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
template <typename T> void HeapAdjust(T &array, int i, const int& len, const int &rule, const int& flag);
//����1   Input : vector<int>�����������  ��������������
void HeapSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void HeapSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void HeapSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void HeapSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void HeapSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    RadixSort
Discribe:		��������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <cmath>
				#include <vector>
**---------------------------------------------------------------------------*/
int FindNum(const int &i, const int &number); //LSD��ȡ��number�ĸ�λ����(i == 1Ϊ��λ,i == 2Ϊʮλ)
int MaxBits(int *ans, const int &len); //��ȡ�������ֵ��λ��
//����1   Input : vector<int>�����������  ��������������
void RadixSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void RadixSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void RadixSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void RadixSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void RadixSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    CountSort
Discribe:		��������
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
template <typename T> void CountSortCore(T &array, const int &len, const int &rule);
//����1   Input : vector<int>�����������  ��������������
void CountSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void CountSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void CountSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void CountSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void CountSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    BucketSort
Discribe:		Ͱ����
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
template <typename T> void BucketSortCore(T &array, const int &len, const int &rule);
//����1   Input : vector<int>�����������  ��������������
void BucketSort(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BucketSort(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BucketSort(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void BucketSort(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void BucketSort(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    BucketSort2
Discribe:		Ͱ����2
Parameter:      array(����), len(���򳤶�), start, end(�������䣬��ʼΪ0), rule(������� 1-���� 2-����)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
int BucketSizeMap(const int &min, const int &max, const int &len);
template <typename T> void BucketSortCore2(T &array, const int &len, const int &rule);
//����1   Input : vector<int>�����������  ��������������
void BucketSort2(vector<int> &array, const int &rule);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BucketSort2(vector<int> &array, const int &len, const int &rule);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ��������������
void BucketSort2(int *array, const int &len, const int &rule);
//����4   Input : vector<int>�����������  ��������[start, end]���������������
void BucketSort2(vector<int> &array, const int &start, const int &end, const int &rule);
//����5   Input : C����ָ��  ��������[start, end]���������������
void BucketSort2(int *array, const int &start, const int &end, const int &rule);

/**--------------------------------------------------------------------------*
Name:		    generateList
Discribe:		����һ���������� 
Parameter:      array(����), len(������), start, end(ԭ�������䣬��ʼΪ0)
Return:		    ListNode* (����ͷ���)
Header:         #include <vector>
**---------------------------------------------------------------------------*/
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};
//����1   Input : vector<int>�����������  ����������ת���ɵ�����
ListNode* generateList(vector<int> &array);
//����2   Input : vector<int>�����������  ���Դ�0��ʼ����Ϊlen�ĵ����������ɵ�������
ListNode* generateList(vector<int> &array, const int &len);
//����3   Input : C����ָ��  ���Դ�0��ʼ����Ϊlen�ĵ����������ɵ�������
ListNode* generateList(int *array, const int &len);
//����4   Input : vector<int>�����������  ��������[start, end]�����������ɵ�������
ListNode* generateList(vector<int> &array, const int &start, const int &end);
//����5   Input : C����ָ��  ��������[start, end]�����������ɵ�������
ListNode* generateList(int *array, const int &start, const int &end);

/**--------------------------------------------------------------------------*
Name:		    printList
Discribe:		��ӡ���� 
Parameter:      pHead(ͷ���)
**---------------------------------------------------------------------------*/
void printList(ListNode *pHead);

/**--------------------------------------------------------------------------*
Name:		    destroyList
Discribe:		ɾ������ 
Parameter:      pHead(ͷ���)
**---------------------------------------------------------------------------*/
void destroyList(ListNode *pHead);

/**--------------------------------------------------------------------------*
Name:		    addListNode
Discribe:		��ӽ�㵽�����ָ��λ��
Parameter:      pHead(ԭ����ͷ���), pos(������λ��������ͷ���Ϊ0), pNode(������), val(����ӽ��ֵ)
**---------------------------------------------------------------------------*/
//����1   Input : ����ͷ��㡢������λ������  ����ԭ����posλ������ǰ���ֵΪval�Ľ�㡿
void addListNode(ListNode **pHead, int pos, const int &val);
//����2   Input : ����ͷ��㡢������  ����ԭ����pNode���ǰ���ֵΪval�Ľ�㡿
void addListNode(ListNode **pHead, ListNode *Node, const int &val);

/**--------------------------------------------------------------------------*
Name:		    removeListNode
Discribe:		ɾ������ָ��λ���µĽ��
Parameter:      pHead(ԭ����ͷ���), pos(������λ��������ͷ���Ϊ0), pNode(������)
**---------------------------------------------------------------------------*/
//����1   Input : ����ͷ��㡢������λ������  ��ɾ��ԭ����posλ�������µĽ�㡿
void removeListNode(ListNode **pHead, int pos);
//����2   Input : ����ͷ��㡢������  ��ɾ��ԭ����pNode��㡿
void removeListNode(ListNode **pHead, ListNode *Node);

