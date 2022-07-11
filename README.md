# OnePinShow
A simple Arduino communication protocol through one pin only

## Why we made this
We had to establish some sort of communication between 2 arduino unos, keeping in mind that we were using a shield that prevented us from accessing the uart pins or any pwm pins

## How does it work
Long story short it depends on the time between two consecutive HIGH signals and that time is translated into a message

## Features
- You can send a number ranging from 1 to 1635 (due to memory issues)
- You can send an array of elements directly (directly means no conversion is required and an api can handle the array)
- You can send a character directly
- You can send a string directly

## Limitations
- Only arduinos with ATmega chips or chips that support reading from an output pin are supported.
- The protocol is not that fast, it needs about 15ms to send 1 character or number and 200 ms to send a string of 10 characters
- The error rate was calculated to be less than 1% in a message of length 100 element and less than 2% in a message of length 300 element
- This library behaviour is not guaranteed to work with interrupts
