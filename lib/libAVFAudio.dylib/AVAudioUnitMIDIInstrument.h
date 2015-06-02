/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitMIDIInstrument : AVAudioUnit

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3;
- (void)sendMIDISysExEvent:(id)arg1;
- (void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2;
- (void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4;
- (void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2;

@end
