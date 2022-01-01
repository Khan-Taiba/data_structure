// Header File For The Queue
#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdbool.h>
#include "../linked_list/linked_list.h"

typedef int QueueEntry;

// Definition Are Given Below 

typedef struct queue {
  Node *front;
  Node *rear;
} Queue;

void queue_init(Queue *queue);
void queue_peek(Queue* queue, QueueEntry *entry);
void queue_enqueue(Queue* queue, QueueEntry entry);
void queue_dequeue(Queue* queue, QueueEntry *entry);
bool queue_is_empty(Queue* queue);
void queue_for_each(Queue* queue, void (*fn)(Node*));

#endif
