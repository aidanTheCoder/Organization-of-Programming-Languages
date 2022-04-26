(define mycount
    (lambda (x L)
    (cond ((null? L) 0)
          ((= x (car L)) (+ 1 (mycount x (cdr L))))
          (else (mycount x (cdr L))))))

(define tagmatch 
  (lambda (x L)
    (cond ((null? L) '())
          ((= x (car L)) (cons 1 (tagmatch x (cdr L))))
          (else (cons 0 (tagmatch x (cdr L)))))))



