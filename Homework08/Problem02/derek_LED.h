// This is the derek_LED.h header file and will
// Be the interface for the LED class

 class LED{
  private:
    string path;
    int number;
    virtual void writeLED(string filename, string value);
    virtual void removeTrigger();
  public:
    LED(int number);
    virtual void turnOn();
    virtual void turnOff();
    virtual void flash(string delayms);
    virtual void outputState();
    virtual void blink(int num);
    virtual ~LED();
};
