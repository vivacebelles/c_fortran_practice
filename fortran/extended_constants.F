! Demonstrate use of extended precision
      program extendedconstants
          implicit none
          integer, parameter :: ikind=selected_real_kind(p=18)
          real (kind=ikind) :: val, x, y
          val =10/3
          print *, val !10/3 calculated as an integer - wrong!
          x=10.0
          y=3.0
          val=x/y   !x/y assigned to extended precision - right!
          print *, val
          val = 10.0_ikind/3    !extend precision constant -right!
          print *, val
          val = 0.12345679
          print *, val
          val = 0.123456789034097509_ikind !ext precision consts -right!
          print *, val
          end program extendedconstants
