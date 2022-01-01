#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "queue.h"
#include "../linked_list/linked_list.h"

static void error(const char* message) {
  fprintf(stderr, "Queue error: %s\n", message);
  exit(-1);
}

//  Initializing The Queue
void queue_init(Queue *queue) {
  queue->front = NULL;
  queue->rear = NULL;
}


// Checking Top of the queue
void queue_peek(Queue* queue,QueueEntry *entry) {
  if (queue_is_empty(queue))
    error("Queue is empty");

  *entry = queue->front->data;
}

// Inserting Elements In the Queue
void queue_enqueue(Queue* queue,QueueEntry entry) {
  Node *newNode = ll_make_node(entry);

  if (queue_is_empty(queue))
    queue->front = queue->rear = newNode;
  else {
    queue->rear->next = newNode;
    queue->rear = newNode;
  }
}

// Deleteing Elements From The Queue
void queue_dequeue(Queue* queue,QueueEntry *entry) {
  if (queue_is_empty(queue))
    error("Queue is empty");

  *entry = queue->front->data;
  Node* node = queue->front;
  queue->front = node->next;

  if (queue->front == NULL)
    queue->rear = NULL;

  free(node);
}

//  Checking Queue IS empty
bool queue_is_empty(Queue* queue) {
  return queue->front == NULL;
}

// Traversing The Queue
void queue_for_each(Queue* queue,void (*fn)(Node*)){
  for (Node *p = queue->front;p != NULL;p = p->next)
    fn(p);
}

