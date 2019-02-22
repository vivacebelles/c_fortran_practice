!practicing if else and and statements
      program and
          real :: x
          print *, 'Enter a number please: '
          read *, x
          if (x >0 .and. x<1) then
              print *, 'You have some coin, but not enough to make'
              print *, 'a dollar! That is unfortunate.'
          else if (x >1 .and. x<10) then
              print *, 'You have enough for a simple meal'
              print *, 'But make sure to include tax!'
          else if (x<0 .or. x>=10) then
              print *, 'Hm, not sure what you want me to say.'
          end if
          end program and
