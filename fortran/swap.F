!switch values between two variables
      program switch
          implicit none
          real :: a, b, c
          print *, 'The value for a now is: '
          read *, a
          print *, 'The value of b now is: '
          read *, b
          c = b
          print *, 'The value of a is now ', c
          c = a
          print *, 'The value of b is now ', c
          print *, 'You did it! Congratulations!'
          end program switch
