//memo 

/*
リングバッファ
配列でのqueue実装は
メモリの有効活用と
enqueue/dequeueの操作をそれぞれO(0)のアルゴリズムで行うことがポイント
*/

initialize(){
  head = tail = 0
}

isEmpty(){
  return head == tail
}

isFull(){
  return head == (tail + 1) % MAX
}

enqueue(x){
  isFull(){
    //error  overflow
  }
  Q[tail] = x
  if (tail + 1 == MAX){
    tail = 0
  }else{
    tail++
  }
}

enqueue(x){
  isFull(){
    //error  underflow
  }
  x = Q[head]
  if (head + 1 == MAX){
    head = 0
  }else{
    head++
  }
  return x
}
