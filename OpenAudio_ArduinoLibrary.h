
#include <AudioAlignLR_F32.h>
#include <AudioStream_F32.h>
#include <AudioControlSGTL5000_Extended.h>
#include <control_tlv320aic3206.h>
#include "AudioCalcEnvelope_F32.h"
#include "AudioCalcGainWDRC_F32.h"
#include "AudioConfigFIRFilterBank_F32.h"
#include "AudioControlTester.h"
#include "AudioConvert_F32.h"
#include "AudioEffectCompressor_F32.h"
#include "AudioEffectCompressor2_F32.h"
//#include "AudioEffectCompWDRC_F32.h"
#include "AudioEffectEmpty_F32.h"
#include "AudioEffectGain_F32.h"
#include "AudioFilterBiquad_F32.h"
#include "AudioFilterConvolution_F32.h"
#include <AudioFilterFIR_F32.h>
#include <AudioFilterIIR_F32.h>
#include "AudioLMSDenoiseNotch_F32.h"
#include "AudioMixer_F32.h"
#include "AudioMultiply_F32.h"
#include "AudioSettings_F32.h"
#include "AudioSpectralDenoise_F32.h"
#include "input_i2s_f32.h"
#include "output_i2s_f32.h"
#include "play_queue_f32.h"
#include "record_queue_f32.h"
#include "synth_pinknoise_f32.h"
#include "synth_sine_f32.h"
#include "synth_waveform_F32.h"
#include "synth_whitenoise_f32.h"
#include "synth_GaussianWhiteNoise_F32.h"
#include "analyze_CTCSS_F32.h"
#include "analyze_fft1024_F32.h"
#include "analyze_fft256_iq_F32.h"
#include "analyze_fft1024_iq_F32.h"
#include "analyze_fft2048_iq_F32.h"
#include "analyze_fft4096_iq_F32.h"
#include "analyze_fft4096_iqem_F32.h"
#include "analyze_peak_f32.h"
#include "analyze_rms_f32.h"
#include "analyze_tonedetect_F32.h"
// #include "control_tlv320aic3206.h"  collides much with Teensy Audio
#include "AudioSwitch_OA_F32.h"
#include "FFT_Overlapped_OA_F32.h"
#include "AudioEffectFreqShiftFD_OA_F32.h"
#include "AudioEffectDelay_OA_F32.h"
#include "radioModulatedGenerator_F32.h"
#include "RadioIQMixer_F32.h"
#include "AudioFilter90Deg_F32.h"
#include "AudioAnalyzePhase_F32.h"
#include "AudioFilterEqualizer_F32.h"
#include "AudioFilterFIRGeneral_F32.h"
#include "RadioFMDetector_F32.h"
#include "radioNoiseBlanker_F32.h"
#include "synth_sin_cos_f32.h"
// #include "USB_Audio_F32.h" Include this separately if needed. Then in IDE Tools>USB Type>Audio
