c Going to try and open, read, close file using Fortran
      program op_read
          implicit none
          character :: a
          integer :: i
          open(unit=2, file="sample.txt")
          read(2,*)
          do i = 100
            read(2, *)
            print *, a
          end do
          close(2)
          end op_read
