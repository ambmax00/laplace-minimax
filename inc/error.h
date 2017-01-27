!----------------------------------------------------------------------!
!
!     number of Laplace point for each interval
!
!----------------------------------------------------------------------!
      integer, parameter ::  nlap_init_2E00 = 7
      integer, parameter ::  nlap_init_3E00 = 7
      integer, parameter ::  nlap_init_4E00 = 7
      integer, parameter ::  nlap_init_5E00 = 7
      integer, parameter ::  nlap_init_6E00 = 7
      integer, parameter ::  nlap_init_7E00 = 7
      integer, parameter ::  nlap_init_8E00 = 7
      integer, parameter ::  nlap_init_9E00 = 7
      integer, parameter ::  nlap_init_1E01 = 16
      integer, parameter ::  nlap_init_2E01 = 16
      integer, parameter ::  nlap_init_3E01 = 16
      integer, parameter ::  nlap_init_4E01 = 17
      integer, parameter ::  nlap_init_5E01 = 18
      integer, parameter ::  nlap_init_6E01 = 18
      integer, parameter ::  nlap_init_7E01 = 18
      integer, parameter ::  nlap_init_8E01 = 18
      integer, parameter ::  nlap_init_9E01 = 19
      integer, parameter ::  nlap_init_1E02 = 20
      integer, parameter ::  nlap_init_2E02 = 23
      integer, parameter ::  nlap_init_3E02 = 22
      integer, parameter ::  nlap_init_4E02 = 23
      integer, parameter ::  nlap_init_5E02 = 23
      integer, parameter ::  nlap_init_6E02 = 11
      integer, parameter ::  nlap_init_7E02 = 22
      integer, parameter ::  nlap_init_8E02 = 11
      integer, parameter ::  nlap_init_9E02 = 11
      integer, parameter ::  nlap_init_1E03 = 22
      integer, parameter ::  nlap_init_2E03 = 22
      integer, parameter ::  nlap_init_3E03 = 21
      integer, parameter ::  nlap_init_4E03 = 20
      integer, parameter ::  nlap_init_5E03 = 20
      integer, parameter ::  nlap_init_6E03 = 10
      integer, parameter ::  nlap_init_7E03 = 20
      integer, parameter ::  nlap_init_8E03 = 9
      integer, parameter ::  nlap_init_9E03 = 9
      integer, parameter ::  nlap_init_1E04 = 20
      integer, parameter ::  nlap_init_2E04 = 20
      integer, parameter ::  nlap_init_3E04 = 18
      integer, parameter ::  nlap_init_4E04 = 12
      integer, parameter ::  nlap_init_5E04 = 18
      integer, parameter ::  nlap_init_6E04 = 2
      integer, parameter ::  nlap_init_7E04 = 12
      integer, parameter ::  nlap_init_8E04 = 2
      integer, parameter ::  nlap_init_9E04 = 2
      integer, parameter ::  nlap_init_1E05 = 18
      integer, parameter ::  nlap_init_2E05 = 17
      integer, parameter ::  nlap_init_3E05 = 8
      integer, parameter ::  nlap_init_4E05 = 7
      integer, parameter ::  nlap_init_5E05 = 14
      integer, parameter ::  nlap_init_6E05 = 1
      integer, parameter ::  nlap_init_7E05 = 6
      integer, parameter ::  nlap_init_8E05 = 1
      integer, parameter ::  nlap_init_9E05 = 1
      integer, parameter ::  nlap_init_1E06 = 13
      integer, parameter ::  nlap_init_2E06 = 13
      integer, parameter ::  nlap_init_3E06 = 11
      integer, parameter ::  nlap_init_4E06 = 10
      integer, parameter ::  nlap_init_5E06 = 10
      integer, parameter ::  nlap_init_6E06 = 1
      integer, parameter ::  nlap_init_7E06 = 9
      integer, parameter ::  nlap_init_8E06 = 1
      integer, parameter ::  nlap_init_9E06 = 1
      integer, parameter ::  nlap_init_1E07 = 9
      integer, parameter ::  nlap_init_2E07 = 7
      integer, parameter ::  nlap_init_3E07 = 6
      integer, parameter ::  nlap_init_4E07 = 5
      integer, parameter ::  nlap_init_5E07 = 5
      integer, parameter ::  nlap_init_7E07 = 4
      integer, parameter ::  nlap_init_1E08 = 5
      integer, parameter ::  nlap_init_2E08 = 5
      integer, parameter ::  nlap_init_3E08 = 4
      integer, parameter ::  nlap_init_4E08 = 3
      integer, parameter ::  nlap_init_5E08 = 1
      integer, parameter ::  nlap_init_7E08 = 9
      integer, parameter ::  nlap_init_1E09 = 8
      integer, parameter ::  nlap_init_2E09 = 7
      integer, parameter ::  nlap_init_3E09 = 5
      integer, parameter ::  nlap_init_4E09 = 3
      integer, parameter ::  nlap_init_5E09 = 3
      integer, parameter ::  nlap_init_6E09 = 1
      integer, parameter ::  nlap_init_7E09 = 2
      integer, parameter ::  nlap_init_1E10 = 9
      integer, parameter ::  nlap_init_2E10 = 7
      integer, parameter ::  nlap_init_3E10 = 3
      integer, parameter ::  nlap_init_4E10 = 2
      integer, parameter ::  nlap_init_5E10 = 3
      integer, parameter ::  nlap_init_7E10 = 2
      integer, parameter ::  nlap_init_1E11 = 12
      integer, parameter ::  nlap_init_2E11 = 9
      integer, parameter ::  nlap_init_3E11 = 5
      integer, parameter ::  nlap_init_4E11 = 4
      integer, parameter ::  nlap_init_5E11 = 6
      integer, parameter ::  nlap_init_7E11 = 4
      integer, parameter ::  nlap_init_1E12 = 5
      integer, parameter ::  nlap_init_2E12 = 3
      integer, parameter ::  nlap_init_3E12 = 2
      integer, parameter ::  nlap_init_4E12 = 1
      integer, parameter ::  nlap_init_inft = 51

!----------------------------------------------------------------------!
!
!     number of Laplace point for each interval
!
!----------------------------------------------------------------------!
      integer, parameter ::  ilap_init_2E00(nlap_init_2E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_3E00(nlap_init_3E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_4E00(nlap_init_4E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_5E00(nlap_init_5E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_6E00(nlap_init_6E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_7E00(nlap_init_7E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_8E00(nlap_init_8E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_9E00(nlap_init_9E00) = (/        &
     & 1, 2, 3, 4, 5, 6, 7 /)

      integer, parameter ::  ilap_init_1E01(nlap_init_1E01) = (/        &
     & 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,                     &
     &16 /)

      integer, parameter ::  ilap_init_2E01(nlap_init_2E01) = (/        &
     & 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,                     &
     &17 /)

      integer, parameter ::  ilap_init_3E01(nlap_init_3E01) = (/        &
     & 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,                     &
     &17 /)

      integer, parameter ::  ilap_init_4E01(nlap_init_4E01) = (/        &
     & 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,                     &
     &17,18 /)

      integer, parameter ::  ilap_init_5E01(nlap_init_5E01) = (/        &
     & 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,                     &
     &17,18,19 /)

      integer, parameter ::  ilap_init_6E01(nlap_init_6E01) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20 /)

      integer, parameter ::  ilap_init_7E01(nlap_init_7E01) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20 /)

      integer, parameter ::  ilap_init_8E01(nlap_init_8E01) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20 /)

      integer, parameter ::  ilap_init_9E01(nlap_init_9E01) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20,21 /)

      integer, parameter ::  ilap_init_1E02(nlap_init_1E02) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20,21,22 /)

      integer, parameter ::  ilap_init_2E02(nlap_init_2E02) = (/        &
     & 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,                     &
     &18,19,20,21,22,23,24,25 /)

      integer, parameter ::  ilap_init_3E02(nlap_init_3E02) = (/        &
     & 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,                     &
     &19,20,21,22,23,24,25 /)

      integer, parameter ::  ilap_init_4E02(nlap_init_4E02) = (/        &
     & 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,                     &
     &19,20,21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_5E02(nlap_init_5E02) = (/        &
     & 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,                     &
     &19,20,21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_6E02(nlap_init_6E02) = (/        &
     & 5, 6, 7,15,16,17,18,19,20,21,26 /)

      integer, parameter ::  ilap_init_7E02(nlap_init_7E02) = (/        &
     & 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,                     &
     &20,21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_8E02(nlap_init_8E02) = (/        &
     & 5, 6, 7,15,16,17,18,19,20,21,26 /)

      integer, parameter ::  ilap_init_9E02(nlap_init_9E02) = (/        &
     & 5, 6, 7,15,16,17,18,19,20,21,26 /)

      integer, parameter ::  ilap_init_1E03(nlap_init_1E03) = (/        &
     & 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,                     &
     &20,21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_2E03(nlap_init_2E03) = (/        &
     & 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,                     &
     &20,21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_3E03(nlap_init_3E03) = (/        &
     & 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,                     &
     &21,22,23,24,25,26 /)

      integer, parameter ::  ilap_init_4E03(nlap_init_4E03) = (/        &
     & 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,                     &
     &22,23,24,25,26 /)

      integer, parameter ::  ilap_init_5E03(nlap_init_5E03) = (/        &
     & 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,                     &
     &22,23,24,25,26 /)

      integer, parameter ::  ilap_init_6E03(nlap_init_6E03) = (/        &
     & 7,15,16,17,18,19,20,21,25,26 /)

      integer, parameter ::  ilap_init_7E03(nlap_init_7E03) = (/        &
     & 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,                     &
     &22,23,24,25,26 /)

      integer, parameter ::  ilap_init_8E03(nlap_init_8E03) = (/        &
     &15,16,17,18,19,20,21,25,26 /)

      integer, parameter ::  ilap_init_9E03(nlap_init_9E03) = (/        &
     &15,16,17,18,19,20,21,25,26 /)

      integer, parameter ::  ilap_init_1E04(nlap_init_1E04) = (/        &
     & 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,                     &
     &23,24,25,26,27 /)

      integer, parameter ::  ilap_init_2E04(nlap_init_2E04) = (/        &
     & 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,                     &
     &23,24,25,26,27 /)

      integer, parameter ::  ilap_init_3E04(nlap_init_3E04) = (/        &
     & 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,                     &
     &24,26,27 /)

      integer, parameter ::  ilap_init_4E04(nlap_init_4E04) = (/        &
     &15,16,17,18,19,20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_5E04(nlap_init_5E04) = (/        &
     &10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,                     &
     &25,26,27 /)

      integer, parameter ::  ilap_init_6E04(nlap_init_6E04) = (/        &
     &26,27 /)

      integer, parameter ::  ilap_init_7E04(nlap_init_7E04) = (/        &
     &15,16,17,18,19,20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_8E04(nlap_init_8E04) = (/        &
     &26,27 /)

      integer, parameter ::  ilap_init_9E04(nlap_init_9E04) = (/        &
     &26,27 /)

      integer, parameter ::  ilap_init_1E05(nlap_init_1E05) = (/        &
     &10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,                     &
     &25,26,27 /)

      integer, parameter ::  ilap_init_2E05(nlap_init_2E05) = (/        &
     &11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,                     &
     &26,27 /)

      integer, parameter ::  ilap_init_3E05(nlap_init_3E05) = (/        &
     &12,13,14,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_4E05(nlap_init_4E05) = (/        &
     &13,14,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_5E05(nlap_init_5E05) = (/        &
     &14,15,16,17,18,19,20,21,22,23,24,25,26,27 /)

      integer, parameter ::  ilap_init_6E05(nlap_init_6E05) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_7E05(nlap_init_7E05) = (/        &
     &14,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_8E05(nlap_init_8E05) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_9E05(nlap_init_9E05) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_1E06(nlap_init_1E06) = (/        &
     &15,16,17,18,19,20,21,22,23,24,25,26,27 /)

      integer, parameter ::  ilap_init_2E06(nlap_init_2E06) = (/        &
     &15,16,17,18,19,20,21,22,23,24,25,26,27 /)

      integer, parameter ::  ilap_init_3E06(nlap_init_3E06) = (/        &
     &16,17,18,19,20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_4E06(nlap_init_4E06) = (/        &
     &17,18,19,20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_5E06(nlap_init_5E06) = (/        &
     &18,19,20,21,22,23,24,25,26,27 /)

      integer, parameter ::  ilap_init_6E06(nlap_init_6E06) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_7E06(nlap_init_7E06) = (/        &
     &18,19,20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_8E06(nlap_init_8E06) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_9E06(nlap_init_9E06) = (/        &
     &27 /)

      integer, parameter ::  ilap_init_1E07(nlap_init_1E07) = (/        &
     &19,20,21,22,23,24,25,26,27 /)

      integer, parameter ::  ilap_init_2E07(nlap_init_2E07) = (/        &
     &20,21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_3E07(nlap_init_3E07) = (/        &
     &21,22,23,24,26,27 /)

      integer, parameter ::  ilap_init_4E07(nlap_init_4E07) = (/        &
     &22,23,24,26,27 /)

      integer, parameter ::  ilap_init_5E07(nlap_init_5E07) = (/        &
     &23,24,25,26,27 /)

      integer, parameter ::  ilap_init_7E07(nlap_init_7E07) = (/        &
     &23,24,26,27 /)

      integer, parameter ::  ilap_init_1E08(nlap_init_1E08) = (/        &
     &24,25,26,27,28 /)

      integer, parameter ::  ilap_init_2E08(nlap_init_2E08) = (/        &
     &25,26,27,28,50 /)

      integer, parameter ::  ilap_init_3E08(nlap_init_3E08) = (/        &
     &26,27,28,50 /)

      integer, parameter ::  ilap_init_4E08(nlap_init_4E08) = (/        &
     &27,28,50 /)

      integer, parameter ::  ilap_init_5E08(nlap_init_5E08) = (/        &
     &50 /)

      integer, parameter ::  ilap_init_7E08(nlap_init_7E08) = (/        &
     &28,29,20,31,32,33,34,35,50 /)

      integer, parameter ::  ilap_init_1E09(nlap_init_1E09) = (/        &
     &29,30,31,32,33,34,35,50 /)

      integer, parameter ::  ilap_init_2E09(nlap_init_2E09) = (/        &
     &30,31,32,33,34,35,50 /)

      integer, parameter ::  ilap_init_3E09(nlap_init_3E09) = (/        &
     &32,33,34,35,50 /)

      integer, parameter ::  ilap_init_4E09(nlap_init_4E09) = (/        &
     &33,34,50 /)

      integer, parameter ::  ilap_init_5E09(nlap_init_5E09) = (/        &
     &34,35,50 /)

      integer, parameter ::  ilap_init_6E09(nlap_init_6E09) = (/        &
     &50 /)

      integer, parameter ::  ilap_init_7E09(nlap_init_7E09) = (/        &
     &34,50 /)

      integer, parameter ::  ilap_init_1E10(nlap_init_1E10) = (/        &
     &35,36,37,38,39,40,41,42,50 /)

      integer, parameter ::  ilap_init_2E10(nlap_init_2E10) = (/        &
     &36,37,39,40,41,42,50 /)

      integer, parameter ::  ilap_init_3E10(nlap_init_3E10) = (/        &
     &38,41,50 /)

      integer, parameter ::  ilap_init_4E10(nlap_init_4E10) = (/        &
     &39,50 /)

      integer, parameter ::  ilap_init_5E10(nlap_init_5E10) = (/        &
     &40,42,50 /)

      integer, parameter ::  ilap_init_7E10(nlap_init_7E10) = (/        &
     &41,50 /)

      integer, parameter ::  ilap_init_1E11(nlap_init_1E11) = (/        &
     &42,43,44,45,46,47,48,49,50,51,52,53 /)

      integer, parameter ::  ilap_init_2E11(nlap_init_2E11) = (/        &
     &43,44,46,48,49,50,51,52,53 /)

      integer, parameter ::  ilap_init_3E11(nlap_init_3E11) = (/        &
     &45,48,49,50,51 /)

      integer, parameter ::  ilap_init_4E11(nlap_init_4E11) = (/        &
     &46,50,51,53 /)

      integer, parameter ::  ilap_init_5E11(nlap_init_5E11) = (/        &
     &47,49,50,51,52,53 /)

      integer, parameter ::  ilap_init_7E11(nlap_init_7E11) = (/        &
     &48,50,51,52 /)

      integer, parameter ::  ilap_init_1E12(nlap_init_1E12) = (/        &
     &49,50,51,52,53 /)

      integer, parameter ::  ilap_init_2E12(nlap_init_2E12) = (/        &
     &50,51,53 /)

      integer, parameter ::  ilap_init_3E12(nlap_init_3E12) = (/        &
     &52,53 /)

      integer, parameter ::  ilap_init_4E12(nlap_init_4E12) = (/        &
     &53 /)

      integer, parameter ::  ilap_init_inft(nlap_init_inft) = (/        &
     & 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,                     &
     &16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,                     &
     &31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,                     &
     &46,47,48,49,50,51 /)

!----------------------------------------------------------------------!
!
!     Laplace error at each interval bound
!
!----------------------------------------------------------------------!
      real(8), parameter :: error_init_2E00(nlap_init_2E00) = (/        &
     &2.128D-02, 2.080D-04, 1.834D-06, 1.542D-08,                       &
     &1.261D-10, 1.012D-12, 8.020D-15 /)

      real(8), parameter :: error_init_3E00(nlap_init_3E00) = (/        &
     &4.358D-02, 1.035D-03, 2.223D-05, 4.556D-07,                       &
     &9.088D-09, 1.780D-10, 3.444D-12 /)

      real(8), parameter :: error_init_4E00(nlap_init_4E00) = (/        &
     &5.960D-02, 2.191D-03, 7.279D-05, 2.311D-06,                       &
     &7.139D-08, 2.167D-09, 6.498D-11 /)

      real(8), parameter :: error_init_5E00(nlap_init_5E00) = (/        &
     &7.075D-02, 3.437D-03, 1.500D-04, 6.258D-06,                       &
     &2.543D-07, 1.016D-08, 4.007D-10 /)

      real(8), parameter :: error_init_6E00(nlap_init_6E00) = (/        &
     &7.825D-02, 4.659D-03, 2.463D-04, 1.246D-05,                       &
     &6.143D-07, 2.976D-08, 1.424D-09 /)

      real(8), parameter :: error_init_7E00(nlap_init_7E00) = (/        &
     &8.288D-02, 5.811D-03, 3.553D-04, 2.079D-05,                       &
     &1.185D-06, 6.643D-08, 3.677D-09 /)

      real(8), parameter :: error_init_8E00(nlap_init_8E00) = (/        &
     &8.516D-02, 6.878D-03, 4.718D-04, 3.098D-05,                       &
     &1.982D-06, 1.246D-07, 7.741D-09 /)

      real(8), parameter :: error_init_9E00(nlap_init_9E00) = (/        &
     &8.556D-02, 7.857D-03, 5.924D-04, 4.273D-05,                       &
     &3.004D-06, 2.076D-07, 1.417D-08 /)

      real(8), parameter :: error_init_1E01(nlap_init_1E01) = (/        &
     &8.556D-02, 8.752D-03, 7.145D-04, 5.577D-05,                       &
     &4.243D-06, 3.173D-07, 2.344D-08, 1.716D-09,                       &
     &1.248D-10, 9.021D-12, 6.492D-13, 4.654D-14,                       &
     &3.326D-15, 2.371D-16, 1.708D-17, 5.136D-18  /)

      real(8), parameter :: error_init_2E01(nlap_init_2E01) = (/        &
     &1.448D-02, 1.819D-03, 2.169D-04, 2.521D-05,                       &
     &2.880D-06, 3.252D-07, 3.640D-08, 4.045D-09,                       &
     &4.470D-10, 4.918D-11, 5.389D-12, 5.888D-13,                       &
     &6.414D-14, 6.972D-15, 7.562D-16, 8.202D-17  /)

      real(8), parameter :: error_init_3E01(nlap_init_3E01) = (/        &
     &1.699D-02, 2.627D-03, 3.795D-04, 5.336D-05,                       &
     &7.379D-06, 1.008D-06, 1.365D-07, 1.836D-08,                       &
     &2.456D-09, 3.270D-10, 4.337D-11, 5.735D-12,                       &
     &7.562D-13, 9.947D-14, 1.306D-14, 1.711D-15  /)

      real(8), parameter :: error_init_4E01(nlap_init_4E01) = (/        &
     &1.784D-02, 3.215D-03, 5.230D-04, 8.266D-05,                       &
     &1.285D-05, 1.973D-06, 3.003D-07, 4.539D-08,                       &
     &6.822D-09, 1.021D-09, 1.522D-10, 2.262D-11,                       &
     &3.352D-12, 4.956D-13, 7.312D-14, 1.077D-14,                       &
     &1.584D-15 /)

      real(8), parameter :: error_init_5E01(nlap_init_5E01) = (/        &
     &1.785D-02, 3.659D-03, 6.469D-04, 1.110D-04,                       &
     &1.872D-05, 3.121D-06, 5.155D-07, 8.456D-08,                       &
     &1.380D-08, 2.241D-09, 3.625D-10, 5.847D-11,                       &
     &9.405D-12, 1.509D-12, 2.417D-13, 3.863D-14,                       &
     &6.165D-15, 9.826D-16 /)

      real(8), parameter :: error_init_6E01(nlap_init_6E01) = (/        &
     &4.001D-03, 7.541D-04, 1.377D-04, 2.471D-05,                       &
     &4.382D-06, 7.701D-07, 1.344D-07, 2.333D-08,                       &
     &4.031D-09, 6.939D-10, 1.191D-10, 2.038D-11,                       &
     &3.479D-12, 5.927D-13, 1.008D-13, 1.711D-14,                       &
     &2.902D-15, 4.914D-16 /)

      real(8), parameter :: error_init_7E01(nlap_init_7E01) = (/        &
     &4.271D-03, 8.474D-04, 1.626D-04, 3.066D-05,                       &
     &5.711D-06, 1.054D-06, 1.933D-07, 3.525D-08,                       &
     &6.398D-09, 1.157D-09, 2.085D-10, 3.749D-11,                       &
     &6.723D-12, 1.203D-12, 2.150D-13, 3.834D-14,                       &
     &6.829D-15, 1.215D-15 /)

      real(8), parameter :: error_init_8E01(nlap_init_8E01) = (/        &
     &4.485D-03, 9.293D-04, 1.858D-04, 3.648D-05,                       &
     &7.077D-06, 1.361D-06, 2.598D-07, 4.932D-08,                       &
     &9.323D-09, 1.756D-09, 3.295D-10, 6.169D-11,                       &
     &1.152D-11, 2.147D-12, 4.004D-13, 7.420D-14,                       &
     &1.376D-14, 2.549D-15 /)

      real(8), parameter :: error_init_9E01(nlap_init_9E01) = (/        &
     &4.655D-03, 1.002D-03, 2.074D-04, 4.213D-05,                       &
     &8.458D-06, 1.683D-06, 3.325D-07, 6.532D-08,                       &
     &1.278D-08, 2.490D-09, 4.836D-10, 9.369D-11,                       &
     &1.811D-11, 3.492D-12, 6.723D-13, 1.292D-13,                       &
     &2.480D-14, 4.754D-15, 9.103D-16 /)

      real(8), parameter :: error_init_1E02(nlap_init_1E02) = (/        &
     &4.789D-03, 1.066D-03, 2.274D-04, 4.760D-05,                       &
     &9.841D-06, 2.016D-06, 4.103D-07, 8.303D-08,                       &
     &1.673D-08, 3.357D-09, 6.716D-10, 1.340D-10,                       &
     &2.667D-11, 5.298D-12, 1.050D-12, 2.079D-13,                       &
     &4.110D-14, 8.114D-15, 1.600D-15, 3.153D-16 /)

      real(8), parameter :: error_init_2E02(nlap_init_2E02) = (/        &
     &5.052D-03, 1.456D-03, 3.707D-04, 9.217D-05,                       &
     &2.261D-05, 5.498D-06, 1.327D-06, 3.186D-07,                       &
     &7.613D-08, 1.812D-08, 4.301D-09, 1.018D-09,                       &
     &2.403D-10, 5.663D-11, 1.332D-11, 3.128D-12,                       &
     &7.333D-13, 1.717D-13, 4.017D-14, 9.385D-15,                       &
     &2.191D-15, 5.111D-16, 1.192D-16 /)

      real(8), parameter :: error_init_3E02(nlap_init_3E02) = (/        &
     &1.628D-03, 4.554D-04, 1.235D-04, 3.297D-05,                       &
     &8.724D-06, 2.292D-06, 5.986D-07, 1.557D-07,                       &
     &4.032D-08, 1.041D-08, 2.681D-09, 6.888D-10,                       &
     &1.766D-10, 4.519D-11, 1.155D-11, 2.946D-12,                       &
     &7.507D-13, 1.910D-13, 4.857D-14, 1.234D-14,                       &
     &3.131D-15, 7.939D-16 /)

      real(8), parameter :: error_init_4E02(nlap_init_4E02) = (/        &
     &1.695D-03, 5.117D-04, 1.467D-04, 4.141D-05,                       &
     &1.157D-05, 3.209D-06, 8.850D-07, 2.430D-07,                       &
     &6.645D-08, 1.812D-08, 4.926D-09, 1.336D-09,                       &
     &3.616D-10, 9.771D-11, 2.636D-11, 7.099D-12,                       &
     &1.910D-12, 5.132D-13, 1.377D-13, 3.693D-14,                       &
     &9.895D-15, 2.649D-15, 7.087D-16 /)

      real(8), parameter :: error_init_5E02(nlap_init_5E02) = (/        &
     &1.700D-03, 5.517D-04, 1.649D-04, 4.842D-05,                       &
     &1.407D-05, 4.061D-06, 1.165D-06, 3.326D-07,                       &
     &9.463D-08, 2.683D-08, 7.587D-09, 2.140D-09,                       &
     &6.025D-10, 1.693D-10, 4.750D-11, 1.331D-11,                       &
     &3.723D-12, 1.040D-12, 2.905D-13, 8.101D-14,                       &
     &2.278D-14, 6.284D-15, 1.749D-15 /)

      real(8), parameter :: error_init_6E02(nlap_init_6E02) = (/        &
     &5.811D-04, 1.795D-04, 5.438D-05, 3.067D-09,                       &
     &8.902D-10, 2.579D-10, 7.459D-11, 2.154D-11,                       &
     &6.213D-12, 1.790D-12, 3.501D-15 /)

      real(8), parameter :: error_init_7E02(nlap_init_7E02) = (/        &
     &6.031D-04, 1.915D-04, 5.952D-05, 1.829D-05,                       &
     &5.577D-06, 1.691D-06, 5.101D-07, 1.533D-07,                       &
     &4.594D-08, 1.372D-08, 4.091D-09, 1.217D-09,                       &
     &3.613D-10, 1.071D-10, 3.170D-11, 9.371D-12,                       &
     &2.767D-12, 8.162D-13, 2.405D-13, 7.080D-14,                       &
     &2.083D-14, 6.122D-15 /)

      real(8), parameter :: error_init_8E02(nlap_init_8E02) = (/        &
     &6.193D-04, 2.016D-04, 6.401D-05, 5.190D-09,                       &
     &1.576D-09, 4.776D-10, 1.445D-10, 4.367D-11,                       &
     &1.318D-11, 3.972D-12, 9.739D-15 /)

      real(8), parameter :: error_init_9E02(nlap_init_9E02) = (/        &
     &6.309D-04, 2.102D-04, 6.799D-05, 6.349D-09,                       &
     &1.962D-09, 6.052D-10, 1.864D-10, 5.732D-11,                       &
     &1.760D-11, 5.400D-12, 1.446D-14 /)

      real(8), parameter :: error_init_1E03(nlap_init_1E03) = (/        &
     &6.385D-04, 2.177D-04, 7.153D-05, 2.321D-05,                       &
     &7.468D-06, 2.389D-06, 7.605D-07, 2.412D-07,                       &
     &7.623D-08, 2.403D-08, 7.555D-09, 2.371D-09,                       &
     &7.426D-10, 2.322D-10, 7.251D-11, 2.261D-11,                       &
     &7.044D-12, 2.192D-12, 6.813D-13, 2.116D-13,                       &
     &6.566D-14, 2.036D-14 /)

      real(8), parameter :: error_init_2E03(nlap_init_2E03) = (/        &
     &6.428D-04, 2.570D-04, 9.365D-05, 3.341D-05,                       &
     &1.180D-05, 4.140D-06, 1.445D-06, 5.025D-07,                       &
     &1.741D-07, 6.017D-08, 2.074D-08, 7.134D-09,                       &
     &2.450D-09, 8.396D-10, 2.874D-10, 9.824D-11,                       &
     &3.354D-11, 1.144D-11, 3.898D-12, 1.327D-12,                       &
     &4.514D-13, 1.534D-13 /)

      real(8), parameter :: error_init_3E03(nlap_init_3E03) = (/        &
     &2.646D-04, 1.047D-04, 3.926D-05, 1.456D-05,                       &
     &5.360D-06, 1.963D-06, 7.157D-07, 2.601D-07,                       &
     &9.426D-08, 3.407D-08, 1.229D-08, 4.425D-09,                       &
     &1.590D-09, 5.708D-10, 2.046D-10, 7.325D-11,                       &
     &2.620D-11, 9.359D-12, 3.341D-12, 1.192D-12,                       &
     &4.246D-13 /)

      real(8), parameter :: error_init_4E03(nlap_init_4E03) = (/        &
     &1.110D-04, 4.316D-05, 1.654D-05, 6.284D-06,                       &
     &2.375D-06, 8.936D-07, 3.351D-07, 1.253D-07,                       &
     &4.673D-08, 1.739D-08, 6.461D-09, 2.396D-09,                       &
     &8.873D-10, 3.281D-10, 1.212D-10, 4.472D-11,                       &
     &1.648D-11, 6.071D-12, 2.234D-12, 8.214D-13 /)

      real(8), parameter :: error_init_5E03(nlap_init_5E03) = (/        &
     &1.146D-04, 4.596D-05, 1.804D-05, 7.020D-06,                       &
     &2.715D-06, 1.046D-06, 4.013D-07, 1.536D-07,                       &
     &5.861D-08, 2.232D-08, 8.484D-09, 3.220D-09,                       &
     &1.220D-09, 4.617D-10, 1.745D-10, 6.588D-11,                       &
     &2.485D-11, 9.364D-12, 3.526D-12, 1.327D-12 /)

      real(8), parameter :: error_init_6E03(nlap_init_6E03) = (/        &
     &1.162D-04, 6.972D-08, 2.704D-08, 1.046D-08,                       &
     &4.043D-09, 1.560D-09, 6.011D-10, 2.313D-10,                       &
     &5.023D-12, 1.924D-12 /)

      real(8), parameter :: error_init_7E03(nlap_init_7E03) = (/        &
     &1.163D-04, 4.969D-05, 2.021D-05, 8.137D-06,                       &
     &3.254D-06, 1.295D-06, 5.138D-07, 2.032D-07,                       &
     &8.014D-08, 3.154D-08, 1.239D-08, 4.858D-09,                       &
     &1.902D-09, 7.438D-10, 2.905D-10, 1.133D-10,                       &
     &4.417D-11, 1.720D-11, 6.692D-12, 2.602D-12 /)

      real(8), parameter :: error_init_8E03(nlap_init_8E03) = (/        &
     &8.993D-08, 3.584D-08, 1.425D-08, 5.659D-09,                       &
     &2.244D-09, 8.883D-10, 3.513D-10, 8.504D-12,                       &
     &3.347D-12 /)

      real(8), parameter :: error_init_9E03(nlap_init_9E03) = (/        &
     &9.917D-08, 3.995D-08, 1.606D-08, 6.445D-09,                       &
     &2.582D-09, 1.033D-09, 4.131D-10, 1.044D-11,                       &
     &4.152D-12 /)

      real(8), parameter :: error_init_1E04(nlap_init_1E04) = (/        &
     &5.271D-05, 2.232D-05, 9.296D-06, 3.844D-06,                       &
     &1.582D-06, 6.481D-07, 2.648D-07, 1.079D-07,                       &
     &4.388D-08, 1.780D-08, 7.213D-09, 2.918D-09,                       &
     &1.179D-09, 4.755D-10, 1.916D-10, 7.715D-11,                       &
     &3.103D-11, 1.247D-11, 5.009D-12, 2.010D-12 /)

      real(8), parameter :: error_init_2E04(nlap_init_2E04) = (/        &
     &5.392D-05, 2.546D-05, 1.133D-05, 4.975D-06,                       &
     &2.171D-06, 9.429D-07, 4.081D-07, 1.762D-07,                       &
     &7.587D-08, 3.261D-08, 1.399D-08, 5.993D-09,                       &
     &2.564D-09, 1.095D-09, 4.674D-10, 1.993D-10,                       &
     &8.488D-11, 3.612D-11, 1.536D-11, 6.528D-12 /)

      real(8), parameter :: error_init_3E04(nlap_init_3E04) = (/        &
     &2.611D-05, 1.230D-05, 5.583D-06, 2.514D-06,                       &
     &1.127D-06, 5.029D-07, 2.238D-07, 9.939D-08,                       &
     &4.404D-08, 1.948D-08, 8.602D-09, 3.793D-09,                       &
     &1.671D-09, 7.350D-10, 3.230D-10, 1.418D-10,                       &
     &2.727D-11, 1.195D-11 /)

      real(8), parameter :: error_init_4E04(nlap_init_4E04) = (/        &
     &2.604D-07, 1.180D-07, 5.336D-08, 2.409D-08,                       &
     &1.086D-08, 4.886D-09, 2.196D-09, 9.860D-10,                       &
     &4.422D-10, 1.981D-10, 3.968D-11, 1.774D-11 /)

      real(8), parameter :: error_init_5E04(nlap_init_5E04) = (/        &
     &1.307D-05, 6.242D-06, 2.920D-06, 1.357D-06,                       &
     &6.283D-07, 2.898D-07, 1.334D-07, 6.124D-08,                       &
     &2.807D-08, 1.284D-08, 5.868D-09, 2.678D-09,                       &
     &1.221D-09, 5.557D-10, 2.528D-10, 1.149D-10,                       &
     &5.218D-11, 2.368D-11 /)

      real(8), parameter :: error_init_6E04(nlap_init_6E04) = (/        &
     &6.458D-11, 2.966D-11 /)

      real(8), parameter :: error_init_7E04(nlap_init_7E04) = (/        &
     &3.356D-07, 1.579D-07, 7.409D-08, 3.471D-08,                       &
     &1.623D-08, 7.580D-09, 3.535D-09, 1.647D-09,                       &
     &7.663D-10, 3.562D-10, 7.679D-11, 3.561D-11 /)

      real(8), parameter :: error_init_8E04(nlap_init_8E04) = (/        &
     &8.879D-11, 4.152D-11 /)

      real(8), parameter :: error_init_9E04(nlap_init_9E04) = (/        &
     &1.005D-10, 4.735D-11 /)

      real(8), parameter :: error_init_1E05(nlap_init_1E05) = (/        &
     &1.312D-05, 6.795D-06, 3.379D-06, 1.646D-06,                       &
     &7.973D-07, 3.847D-07, 1.850D-07, 8.877D-08,                       &
     &4.251D-08, 2.032D-08, 9.700D-09, 4.624D-09,                       &
     &2.201D-09, 1.047D-09, 4.975D-10, 2.362D-10,                       &
     &1.120D-10, 5.310D-11 /)

      real(8), parameter :: error_init_2E05(nlap_init_2E05) = (/        &
     &6.807D-06, 3.630D-06, 1.877D-06, 9.491D-07,                       &
     &4.770D-07, 2.389D-07, 1.193D-07, 5.942D-08,                       &
     &2.955D-08, 1.467D-08, 7.274D-09, 3.602D-09,                       &
     &1.782D-09, 8.804D-10, 4.347D-10, 2.144D-10,                       &
     &1.057D-10 /)

      real(8), parameter :: error_init_3E05(nlap_init_3E05) = (/        &
     &3.630D-06, 1.966D-06, 1.023D-06, 4.619D-09,                       &
     &2.334D-09, 1.178D-09, 2.992D-10, 1.506D-10 /)

      real(8), parameter :: error_init_4E05(nlap_init_4E05) = (/        &
     &1.984D-06, 1.066D-06, 5.422D-09, 2.779D-09,                       &
     &1.423D-09, 3.719D-10, 1.899D-10 /)

      real(8), parameter :: error_init_5E05(nlap_init_5E05) = (/        &
     &1.092D-06, 5.797D-07, 3.048D-07, 1.597D-07,                       &
     &8.339D-08, 4.346D-08, 2.260D-08, 1.174D-08,                       &
     &6.089D-09, 3.154D-09, 1.632D-09, 8.439D-10,                       &
     &4.359D-10, 2.250D-10 /)

      real(8), parameter :: error_init_6E05(nlap_init_6E05) = (/        &
     &2.567D-10 /)

      real(8), parameter :: error_init_7E05(nlap_init_7E05) = (/        &
     &1.108D-06, 7.155D-09, 3.765D-09, 1.979D-09,                       &
     &5.451D-10, 2.858D-10 /)

      real(8), parameter :: error_init_8E05(nlap_init_8E05) = (/        &
     &3.126D-10 /)

      real(8), parameter :: error_init_9E05(nlap_init_9E05) = (/        &
     &3.375D-10 /)

      real(8), parameter :: error_init_1E06(nlap_init_1E06) = (/        &
     &6.280D-07, 3.445D-07, 1.867D-07, 1.007D-07,                       &
     &5.421D-08, 2.911D-08, 1.560D-08, 8.351D-09,                       &
     &4.464D-09, 2.384D-09, 1.272D-09, 6.777D-10,                       &
     &3.609D-10 /)

      real(8), parameter :: error_init_2E06(nlap_init_2E06) = (/        &
     &6.311D-07, 3.658D-07, 2.076D-07, 1.157D-07,                       &
     &6.415D-08, 3.548D-08, 1.958D-08, 1.079D-08,                       &
     &5.936D-09, 3.262D-09, 1.791D-09, 9.820D-10,                       &
     &5.381D-10 /)

      real(8), parameter :: error_init_3E06(nlap_init_3E06) = (/        &
     &3.659D-07, 2.148D-07, 1.227D-07, 6.923D-08,                       &
     &3.893D-08, 2.184D-08, 1.223D-08, 6.834D-09,                       &
     &3.815D-09, 1.185D-09, 6.595D-10 /)

      real(8), parameter :: error_init_4E06(nlap_init_4E06) = (/        &
     &2.155D-07, 1.265D-07, 7.240D-08, 4.118D-08,                       &
     &2.336D-08, 1.322D-08, 7.471D-09, 4.216D-09,                       &
     &1.338D-09, 7.525D-10 /)

      real(8), parameter :: error_init_5E06(nlap_init_5E06) = (/        &
     &1.284D-07, 7.454D-08, 4.279D-08, 2.448D-08,                       &
     &1.397D-08, 7.960D-09, 4.528D-09, 2.573D-09,                       &
     &1.460D-09, 8.280D-10 /)

      real(8), parameter :: error_init_6E06(nlap_init_6E06) = (/        &
     &8.916D-10 /)

      real(8), parameter :: error_init_7E06(nlap_init_7E06) = (/        &
     &1.289D-07, 7.706D-08, 4.495D-08, 2.605D-08,                       &
     &1.505D-08, 8.679D-09, 4.997D-09, 1.650D-09,                       &
     &9.465D-10 /)

      real(8), parameter :: error_init_8E06(nlap_init_8E06) = (/        &
     &9.947D-10 /)

      real(8), parameter :: error_init_9E06(nlap_init_9E06) = (/        &
     &1.038D-09 /)

      real(8), parameter :: error_init_1E07(nlap_init_1E07) = (/        &
     &7.811D-08, 4.679D-08, 2.752D-08, 1.611D-08,                       &
     &9.404D-09, 5.481D-09, 3.190D-09, 1.854D-09,                       &
     &1.076D-09 /)

      real(8), parameter :: error_init_2E07(nlap_init_2E07) = (/        &
     &4.794D-08, 2.955D-08, 1.780D-08, 1.065D-08,                       &
     &6.349D-09, 2.246D-09, 1.333D-09 /)

      real(8), parameter :: error_init_3E07(nlap_init_3E07) = (/        &
     &2.976D-08, 1.848D-08, 1.124D-08, 6.791D-09,                       &
     &2.464D-09, 1.480D-09 /)

      real(8), parameter :: error_init_4E07(nlap_init_4E07) = (/        &
     &1.868D-08, 1.157D-08, 7.067D-09, 2.609D-09,                       &
     &1.581D-09 /)

      real(8), parameter :: error_init_5E07(nlap_init_5E07) = (/        &
     &1.176D-08, 7.254D-09, 4.444D-09, 2.715D-09,                       &
     &1.656D-09 /)

      real(8), parameter :: error_init_7E07(nlap_init_7E07) = (/        &
     &1.185D-08, 7.478D-09, 2.863D-09, 1.763D-09 /)

      real(8), parameter :: error_init_1E08(nlap_init_1E08) = (/        &
     &7.583D-09, 4.802D-09, 2.999D-09, 1.866D-09,                       &
     &1.159D-09 /)

      real(8), parameter :: error_init_2E08(nlap_init_2E08) = (/        &
     &4.898D-09, 3.179D-09, 2.028D-09, 1.284D-09,                       &
     &4.429D-14 /)

      real(8), parameter :: error_init_3E08(nlap_init_3E08) = (/        &
     &3.190D-09, 2.086D-09, 1.341D-09, 5.718D-14 /)

      real(8), parameter :: error_init_4E08(nlap_init_4E08) = (/        &
     &2.094D-09, 1.371D-09, 6.780D-14 /)

      real(8), parameter :: error_init_5E08(nlap_init_5E08) = (/        &
     &7.692D-14 /)

      real(8), parameter :: error_init_7E08(nlap_init_7E08) = (/        &
     &1.385D-09, 9.203D-10, 6.020D-10, 3.912D-10,                       &
     &2.536D-10, 1.642D-10, 1.062D-10, 6.860D-11,                       &
     &9.218D-14 /)

      real(8), parameter :: error_init_1E09(nlap_init_1E09) = (/        &
     &9.227D-10, 6.162D-10, 4.053D-10, 2.651D-10,                       &
     &1.730D-10, 1.128D-10, 7.343D-11, 1.103D-13 /)

      real(8), parameter :: error_init_2E09(nlap_init_2E09) = (/        &
     &6.188D-10, 4.177D-10, 2.814D-10, 1.870D-10,                       &
     &1.238D-10, 8.181D-11, 1.515D-13 /)

      real(8), parameter :: error_init_3E09(nlap_init_3E09) = (/        &
     &2.837D-10, 1.925D-10, 1.289D-10, 8.593D-11,                       &
     &1.790D-13 /)

      real(8), parameter :: error_init_4E09(nlap_init_4E09) = (/        &
     &1.938D-10, 1.316D-10, 1.998D-13 /)

      real(8), parameter :: error_init_5E09(nlap_init_5E09) = (/        &
     &1.329D-10, 9.004D-11, 2.167D-13 /)

      real(8), parameter :: error_init_6E09(nlap_init_6E09) = (/        &
     &2.309D-13 /)

      real(8), parameter :: error_init_7E09(nlap_init_7E09) = (/        &
     &1.331D-10, 2.432D-13 /)

      real(8), parameter :: error_init_1E10(nlap_init_1E10) = (/        &
     &9.194D-11, 6.365D-11, 4.353D-11, 2.962D-11,                       &
     &2.011D-11, 1.364D-11, 9.246D-12, 6.262D-12,                       &
     &2.724D-13 /)

      real(8), parameter :: error_init_2E10(nlap_init_2E10) = (/        &
     &6.382D-11, 4.452D-11, 2.147D-11, 1.476D-11,                       &
     &1.013D-11, 6.943D-12, 3.314D-13 /)

      real(8), parameter :: error_init_3E10(nlap_init_3E10) = (/        &
     &3.121D-11, 1.055D-11, 3.911D-13 /)

      real(8), parameter :: error_init_4E10(nlap_init_4E10) = (/        &
     &2.197D-11, 3.911D-13 /)

      real(8), parameter :: error_init_5E10(nlap_init_5E10) = (/        &
     &1.554D-11, 7.635D-12, 4.100D-13 /)

      real(8), parameter :: error_init_7E10(nlap_init_7E10) = (/        &
     &1.104D-11, 4.380D-13 /)

      real(8), parameter :: error_init_1E11(nlap_init_1E11) = (/        &
     &7.869D-12, 5.591D-12, 3.938D-12, 2.766D-12,                       &
     &1.940D-12, 1.360D-12, 9.524D-13, 6.667D-13,                       &
     &4.664D-13, 3.262D-13, 2.280D-13, 1.594D-13 /)

      real(8), parameter :: error_init_2E11(nlap_init_2E11) = (/        &
     &5.633D-12, 4.047D-12, 2.063D-12, 1.035D-12,                       &
     &7.317D-13, 5.171D-13, 3.652D-13, 2.578D-13,                       &
     &1.819D-13 /)

      real(8), parameter :: error_init_3E11(nlap_init_3E11) = (/        &
     &2.919D-12, 1.074D-12, 7.639D-13, 5.430D-13,                       &
     &3.857D-13 /)

      real(8), parameter :: error_init_4E11(nlap_init_4E11) = (/        &
     &2.113D-12, 5.594D-13, 3.989D-13, 2.025D-13 /)

      real(8), parameter :: error_init_5E11(nlap_init_5E11) = (/        &
     &1.534D-12, 7.969D-13, 5.708D-13, 4.084D-13,                       &
     &2.919D-13, 2.086D-13 /)

      real(8), parameter :: error_init_7E11(nlap_init_7E11) = (/        &
     &1.118D-12, 5.855D-13, 4.210D-13, 3.024D-13 /)

      real(8), parameter :: error_init_1E12(nlap_init_1E12) = (/        &
     &8.172D-13, 5.983D-13, 4.321D-13, 3.120D-13,                       &
     &2.251D-13 /)

      real(8), parameter :: error_init_2E12(nlap_init_2E12) = (/        &
     &5.992D-13, 4.407D-13, 2.371D-13 /)

      real(8), parameter :: error_init_3E12(nlap_init_3E12) = (/        &
     &3.251D-13, 2.405D-13 /)

      real(8), parameter :: error_init_4E12(nlap_init_4E12) = (/        &
     &2.405D-13 /)

      real(8), parameter :: error_init_inft(nlap_init_inft) = (/        &
     &8.556407558D-02,1.784984402D-02,5.051623329D-03,1.700257409D-03,  &
     &6.428132177D-04,2.646094657D-04,1.163345309D-04,5.392467586D-05,  &
     &2.611349262D-05,1.312192339D-05,6.806654744D-06,3.629990787D-06,  &
     &1.983780556D-06,1.107997444D-06,6.310717659D-07,3.658514896D-07,  &
     &2.155406905D-07,1.288728616D-07,7.810694747D-08,4.793658344D-08,  &
     &2.976463658D-08,1.868283243D-08,1.184632475D-08,7.583094318D-09,  &
     &4.897586383D-09,3.189817902D-09,2.094083296D-09,1.385098807D-09,  &
     &9.226923049D-10,6.188242106D-10,4.177046642D-10,2.836818690D-10,  &
     &1.937906483D-10,1.331253085D-10,9.194133568D-11,6.382429591D-11,  &
     &4.452420484D-11,3.120733581D-11,2.197295677D-11,1.553880806D-11,  &
     &1.103505368D-11,7.868531456D-12,5.632662739D-12,4.047404176D-12,  &
     &2.918954737D-12,2.112585877D-12,1.534222510D-12,1.117899610D-12,  &
     &8.171723389D-13,5.992104599D-13,4.407166906D-13 /)
