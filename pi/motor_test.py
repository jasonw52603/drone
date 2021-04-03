import pigpio

pi1 = pigpio.pi()
pi1.set_PWM_range(12, 100)

pi1.write(12, 100)