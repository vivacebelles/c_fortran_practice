! First test of debugging
! Original program:
! program bug
! this program is full of errors
! real :: a, b, c
! a = b + c
! read *, c
! print *,a
! end program simple
      program simple
          real :: a, b, c
          a = b + c
          print *, 'Enter values for b and c: '
          read *, b, c
          print *, a
          end program simple
