#ifndef segmentSection_h
#define segmentSection_h
//for explanation see segmentSet.h
struct segmentSection {
  int16_t startPixel; //-1 for dummy pixel
  int16_t length;
  //support for direction of segment section, not implemented elsewhere
  //avoid using due to large increase in memory usage
  //instead, if you have a section facing the wrong way, define each pixel as a section, placing them in the order you want
  // boolean direct;
  //segmentSection(uint16_t sp, uint16_t l): startPixel(sp), length(l), direct(true){}
  //segmentSection(uint16_t sp, uint16_t l, boolean d): startPixel(sp), length(l), direct(d){}
} ;

#endif