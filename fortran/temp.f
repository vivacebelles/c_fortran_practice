c programming a conversion between Celsius and Farenheit
      program convert_temp
          implicit none
          integer :: degF, degC
          print *, 'What temperature is it right now in degree Celsius?'
          read *, degC
          degF = (9/5)*degC +32
          print *, 'The temperature is', degF,' Farenheit.'
          end program convert_temp
