# OnePinShow
A simple Arduino communication protocol through one pin only

## Why we made this
We had to establish some sort of communication between 2 arduino unos, keeping in mind that we were using a shield that prevented us from accessing the uart pins or any pwm pins

## When to use this
You can use this library if you want to transmit data from one arduino to another in a very simple method and the time delay is not a big deal

## How does it work
Long story short it depends on the time between two consecutive HIGH signals and that time is translated into a message.
Firstly a handshake method is conducted to ensure both sides are ready for communication, then the sequence starts to operate

## Features
- You can send or receive any integer number ranging from 1 to 1635 (due to memory issues)
- You can send or receive an array of elements directly (directly means no conversion is required and an api can handle the array)
- You can send or receive a character directly
- You can send or receive a string directly

## Limitations
- Only arduinos with ATmega chips or chips that support reading from an output pin are supported.
- The protocol is not that fast, it needs about 15ms to send 1 character or number and 200 ms to send a string of 10 characters
- The error rate was calculated to be less than 1% in a message of length 100 element and less than 2% in a message of length 300 element
- This library behaviour is not guaranteed to work with interrupts

## Usage
- OPS InstanceName(PinNumber); -> to create an instance of the protocol
- InstanceName.Send(intNumber); -> Send any integer number ranging from 1 to 1635
- InstanceName.Send('D'); -> Send any character
- InstanceName.SendMSG( array, arraySize); -> Send an array of integers of size "arraySize"
- InstanceName.SendMSG("String"); -> Send any string, keeping in mind that longer strings require more time
- myInt = InstanceName.Receive(); -> Receive an integer
- myChar = InstanceName.ReceiveC(); -> Receive a characted
- myArray = InstanceName.GetMSG(array, arraySize); -> Receive an array of integers of expected size "arraySize"
- myString = InstanceName.GetMSG(); -> Receive a string

## To import the library
- Download the OnePinShow.zip file
- Open your arduino IDE
- Under the "Sketch" tab, select "Include Library", then select "Add .Zip Library"
- Navigate to the downloaded zip file and select it
- Again uder the "Sketch" tab, select "Include Library", then you should find OnePinShow under the "Contributed lbraries" section
