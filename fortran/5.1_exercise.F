c Write a program that asks the user
c how many numbers they want to enter
c call this value imax. Alloc imax to two
c arrays, a and b. Read in imax numbers to 
c and do the same to b. Print out the arrays
c a, b and print out the sume of a and b. Compare
c with sumalloc.F
      program exercise
          implicit none
          integer,allocatable, dimension(:) :: imax
          integer :: i, a, b, values
          print *, 'How many values are in your array?'
          read *, a, b
          allocate(imax(a))
          allocate(imax(b))
          print *, 'There are',a,'in your array.'
          do a=1, imax(i)
            read *, imax(i)
          end do
          do a=1, values
            print *,imax(a)
          end do
          deallocate(imax)
          end program exercise

          
