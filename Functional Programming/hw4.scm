(define mycount
    (lambda (x L)
    (define i 0)
    (cond ((null? L) 0)
          ((= x (car L)) (+ i 1 (mycount x (cdr L))))
          (else (+ i (mycount x (cdr L)))))))

(define tagmatch 
  (lambda (x L)
  (define T '())
    (cond ((null? L) '())
          ((= x (car L)) (cons 1 (tagmatch x (cdr L))))
          (else (cons 0 (tagmatch x (cdr L)))))))



