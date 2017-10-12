#ifndef TABLE_H
#define TABLE_H
typedef struct _Table_entry {
    int key;
    char* val;
    struct _Table_entry *next;
} Table_entry;

typedef Table_entry *PTable_entry;

char* lookup(PTable_entry table, int k);
void store(PTable_entry *table, int k, char v[]);
void display(PTable_entry table, int k);

#endif
