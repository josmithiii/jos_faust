/*
 * jos_freeverb.h - freeverb from the faustlibraries distribution (in reverbs.lib)
 * Julius Smith
 * October 2021
 * MIT License with LGPL component
 */

namespace jos
{

//==============================================================================

  /** Forward declarations of classes provided by the Faust distribution. */
  class freeverb;
  class APIUI;

  /** Freeverb is a Schroeder reverb by Jezar at Dreampoint used extensively in free software.
      Reference: https://ccrma.stanford.edu/~jos/pasp/Freeverb.html
      @see Zitarev
      @tags{Effects}
    */
  class JUCE_API Freeverb : public FaustModule
  {
    /** Number of input signals. */
    int mNumInputs;

    /** Number of output signals. */
    int mNumOutputs;

    /** Amount of reverb desired from 0 (none) to 1 (maximally wet). */
    float mReverbLevel;

    /** Faust signal processing module (derived class of dsp) implementing Freeverb. */
    freeverb* freeverbP;

    /** Faust user interface (derived class of UI) controlling Freeverb. */
    APIUI* freeverbUIP;

    /** process nframes samples of audio from inputs to outputs. */
    void compute(int nframes, float** inputs, float** outputs);

  public:
    /** Constructor.

        Creates an instance of Freeverb with the specified number of input and output channels.

        @param numInChans number of input channels
        @param numOutChans number of output channels

        @see Zitarev

        @tags{effects}
    */
    Freeverb(int numInChans, int numOutChans); // xtor

    /** Destructor. */
    virtual ~Freeverb();

    /** Ask the Faust signal-processing module how many inputs it has. */
    int getNumInputs() override { return(mNumInputs); }

    /** Ask the Faust signal-processing module how many outputs it has. */
    int getNumOutputs() override { return(mNumOutputs); }

    /** Tell the Faust signal-processing module what the sampling rate is. */
    void prepareToPlay(double samplingRateHz, int maxSamplesPerBlock) override;

    /** Set the reverberation level between 0 (no reverb) to 1 (maximally "wet" reverb). */
    void setReverbLevel(float level) {
      mReverbLevel = level;
    }

    /** Process the audio buffer along with any MIDI controls. */
    virtual void processBlock (juce::AudioBuffer<float>& audio, juce::MidiBuffer& midi) override;

  }; // Class Freeverb

} // namespace jos
