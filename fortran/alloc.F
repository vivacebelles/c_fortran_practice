c using arrays when it is unknown size
      program alloc
          implicit none
          integer, allocatable, dimension(:)::vector
          !note syntax -dimension (:)
          integer                           :: elements, i
          print *, 'Enter the number of elements in the vector:'
          read*, elements
          allocate(vector(elements))
          !allocates the correct amount of memory
          print *, 'your vector is of size ', elements
          print *, 'Now enter each element'
          do i = 1, elements
            read *, vector(i)
          end do
          print *, 'this is your vector'
          do i = 1, elements
            print *, vector(i)
          end do

          deallocate(vector)

          end program alloc
