struct ListNode {
  int val;
  struct ListNode *next;
};

int len(struct ListNode *l) {
  int cnt = 0;
  while (l) {
    l = l->next;
    cnt++;
  }
  return cnt;
}
struct ListNode *middleNode(struct ListNode *head) {
  int size = len(head);
  struct ListNode *middle = head;
  for (int i = 0; i < size / 2; i++) {
    middle = middle->next;
  }
  return middle;
}
