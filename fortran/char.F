!This uses integer and character variables
      program convert
          implicit none
          integer :: pounds, pence, total
          character :: name*30
          print *, 'What is your name?'
          read *, name
          print *, 'Hi ',name,'! Enter number of pound and pence'\
          'please'
          read *, pounds, pence
          total = 100 * pounds + pence
          print *, 'the total money is pence is ',total
          end program convert
